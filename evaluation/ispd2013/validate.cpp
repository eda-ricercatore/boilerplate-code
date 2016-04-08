//////////////////////////////////////////////////////////////////
//
//
//  Violation computation routines for the ISPD 2012 contest
//
//  This code is provided for description purposes only. The contest
//  organizers cannot guarantee that the provided code is free of
//  bugs or defects. !!!! USE THIS CODE AT YOUR OWN RISK !!!!!
//
//
//  The contestants are free to use these functions as-is or make
//  modifications. If the contestants choose to use the provided
//  code, they are responsible for making sure that it works as
//  expected.
//
//  The code provided here has no real or implied warranties.
//
//
////////////////////////////////////////////////////////////////////

#include <string.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <limits>
#include <cassert>
#include <cctype>
#include <cmath>
#include <map>
#include <set>

using namespace std; 

#include "parser_helper.h"


// Rouding function
double myRound(double v, int digits){
  double myV = v*pow(10.0,digits);
  int intv = (int) round(myV);
  return intv/pow(10.0,digits);
}


class violation_ctrl{

private:
  map<string,double> cap;
  map<string,string> fanout;
  set<string> _po_set;

  // File names
  string _lib;
  string _sdc;
  string _v;
  string _sizes;
  string _timing;
  string _ceff;
  string _slack_violation_file;
  string _slew_violation_file;
  string _cap_violation_file;
  
  // Cell info
  map<string,LibParserCellInfo> _cells;
  map<string,pair<string,string> > _drv_cells;

  // Timing constraints
  double _ck_period;
  string _ck_name;
  string _ck_port;
  map<string,double> _output_delay;
  double _max_transition;
  double _slew_violations;
  double _slack_violations;
  double _cap_violations;

  // Circuit info
  map<string,string> _type_map_orig;
  map<string, vector< pair< string,string> > > _pin_map_orig;
  map<string, double > _netcap;
  map< pair<string,string> , double > _ceff_pincap;
  map<string, double > _ceff_netcap;
  map<string,string> _type_map_new;
  map<string,string> _type_map_merged;

  // Power
  double _total_leakage_power;

public:
  violation_ctrl(string bench, string lib) ;
  void check_violations();
  void read_sdc();
  void read_lib();
  void read_v();
  void read_sizes();
  void read_ceff();
  void read_timing();

  void print_new_sizes(){
    cout << "Printing new sizes: " << endl;
    for(map<string,string>::iterator it=_type_map_new.begin();
	it!=_type_map_new.end();it++){
      cout << it->first << " - " << it->second << endl;
    }
  }

  void merge_sizes();

  // Check for max cap violations
  void check_max_cap();
  void compute_power();
  
};


int main(int argc, char *argv[]){

  if (argc != 3) {
    cout << "Usage: " << argv[0] << " benchmark_name library_file" << endl ;
    exit(0) ;
  }

  string bench = argv[1] ;
  string lib = argv[2] ;
  
  // Create violation ctrl object
  violation_ctrl vc(bench,lib) ;
  vc.check_violations();

  return 0;
}


violation_ctrl::violation_ctrl(string bench, string lib) {
  // Populate file names

  _lib = lib ;
  _sdc = bench + "/" + bench + ".sdc" ;
  _v = bench + "/" + bench + ".v" ;
  _sizes = bench + "/" + bench + ".sizes" ;
  _timing = bench + "/" + bench + ".timing" ;
  _ceff = bench + "/" + bench + ".ceff" ;
  
  _slack_violation_file = bench + "/" + bench + ".slack_violations" ;
  _slew_violation_file =  bench + "/" + bench + ".slew_violations" ;
  _cap_violation_file = bench + "/" + bench + ".cap_violations" ;

  // Check if input files exists
  bool fail=false;

  if(!ifstream(_lib.c_str()).good()){
    fail=true;
    cerr << "File " << _lib << " not found." << endl;
  }
  if(!ifstream(_sdc.c_str()).good()){
    fail=true;
    cerr << "File " << _sdc << " not found." << endl;
  }
  if(!ifstream(_v.c_str()).good()){
    fail=true;
    cerr << "File " << _v << " not found." << endl;
  }
  if(!ifstream(_sizes.c_str()).good()){
    fail=true;
    cerr << "File " << _sizes << " not found." << endl;
  }
  if(!ifstream(_timing.c_str()).good()){
    fail=true;
    cerr << "File " << _timing << " not found." << endl;
  }
  if(!ifstream(_ceff.c_str()).good()){
    fail=true;
    cerr << "File " << _ceff << " not found." << endl;
  }

  if(fail)
    exit(1);
}

void violation_ctrl::check_violations(){

  // Initilize delay violations
  _slack_violations=0;
  _slew_violations=0;
  _cap_violations=0;
  _total_leakage_power=0;

  // reading ceff file
  read_ceff();

  // read sdc file and populate constraints
  read_sdc();

  // read lib file and populate constraints
  read_lib();

  // read verilog file
  read_v();

  // read new sizes
  read_sizes();  

  // Merge new sizes to the old sizes
  // this has to be done prior to checking violations
  merge_sizes();

  // read timing
  read_timing();

  // Check capacitance violations
  check_max_cap();

  // compute total leakage power
  compute_power();

  cout << setiosflags(ios::fixed) << setprecision(2);
  cout << "Total Slack violations: " << _slack_violations << "ps" <<endl;
  cout << "Total Slew violations: " << _slew_violations << "ps" << endl;
  cout << "Total Cap violations: " << _cap_violations << "fF" << endl;
  cout << "Total violations: " << _slack_violations + _slew_violations +  _cap_violations << endl; 
  cout << "Total Leakage Power: " << _total_leakage_power << "uW" <<endl;
}

void violation_ctrl::read_lib(){

  LibParser lp (_lib) ;

  _max_transition = 0.0 ;
  bool valid = lp.read_default_max_transition(_max_transition) ;

  assert (valid) ;


  int readCnt = 0 ;
  do {
    LibParserCellInfo cell ;
    valid = lp.read_cell_info (cell) ;

    if (valid) {
      ++readCnt ;

      // Add each cell to a cell map indexed by cellname
      _cells.insert(make_pair(cell.name,cell));
    }
    
  } while (valid) ;

  


}

void violation_ctrl::read_sdc(){


  SdcParser sp (_sdc) ;
  bool valid = sp.read_clock (_ck_name, _ck_port, _ck_period) ;

  assert(valid) ;

  do {
    string portName ;
    double delay ;

    valid = sp.read_input_delay (portName, delay) ;

  } while (valid) ;
  

  do {
    string portName ;
    string driverSize ;
    string driverPin ;
    double inputTransitionFall ;
    double inputTransitionRise ;
    
    valid = sp.read_driver_info (portName, driverSize, driverPin,
                                 inputTransitionFall, inputTransitionRise) ;

    if(valid){
      _drv_cells.insert( make_pair(portName,make_pair(driverSize,driverPin)));
    }
    
  } while (valid) ;

  do {
    string portName ;
    double delay ;

    valid = sp.read_output_delay (portName, delay) ;

    if (valid){
      _output_delay.insert(pair<string,double> (portName,delay));
    }
  } while (valid) ;
  // Capacitance don't need to be accounted for here since they 
  // are included in the ceff file
}

void violation_ctrl::read_v(){

  VerilogParser vp (_v) ;

  string moduleName ;
  bool valid = vp.read_module (moduleName) ;
  assert (valid) ;  

  do {
    string primaryInput ;
    valid = vp.read_primary_input (primaryInput) ;

  } while (valid) ;


  do {
    string primaryOutput ;
    valid = vp.read_primary_output (primaryOutput) ;
    _po_set.insert(primaryOutput);
  } while (valid) ;

  do {
    string net ;
    valid = vp.read_wire (net) ;

  } while (valid) ;
  
  do {
    string cellType, cellInst ;
    vector<std::pair<string, string> > pinNetPairs ;
    
    valid = vp.read_cell_inst (cellType, cellInst, pinNetPairs) ;

    if (valid) {
      _type_map_orig.insert(pair<string,string> (cellInst,cellType));
      _pin_map_orig.insert(pair<string,vector< pair<string,string> > > (cellInst,pinNetPairs));

    }
    
  } while (valid) ;
}  

void violation_ctrl::read_ceff() {

  CeffParser cp (_ceff) ;

  bool valid = false ;
  while (true) {
    
    string name1, name2 ;
    double riseCeff, fallCeff ;
    
    valid = cp.read_ceff_line (name1, name2, riseCeff, fallCeff) ;

    if (!valid)
      break ;

    if (name2 != "") {
      // ceff values of a pin
      pair<string,string> inst_pin=make_pair(name1,name2);
      _ceff_pincap[inst_pin]=max(riseCeff,fallCeff);
      
    } else {
      // timing of a port
      // name1: port name
      string net=name1;
      _ceff_netcap[net]=max(riseCeff,fallCeff);
    }
  }
  
}


void violation_ctrl::read_sizes(){

  std::ifstream sizes_file(_sizes.c_str());
  string instance;
  string type;
  while(sizes_file >> instance >> type){
    _type_map_new.insert(pair<string,string> (instance,type));
  }

}

void violation_ctrl::read_timing() {

  TimingParser tp (_timing) ;
  ofstream slack_ofs (_slack_violation_file.c_str()) ;
  ofstream slew_ofs (_slew_violation_file.c_str()) ;
  
  bool valid = false ;
  // For each pin check slew constraints
  do {
    
    string cellInst, pin ;
    double riseSlack, fallSlack, riseTransition, fallTransition, riseArrival, fallArrival ;

    valid = tp.read_timing_line (cellInst, pin, riseSlack, fallSlack,
				 riseTransition, fallTransition,
				 riseArrival, fallArrival) ;

    string cellName = "";

    if((valid)&&(pin!="")) {
      if(_type_map_merged.find(cellInst)!=_type_map_merged.end()){
	cellName = _type_map_merged[cellInst];
      } else {
        cerr << "Warning: Cell instance " << cellInst << " in the timing file could not be found!"
             << endl ;
      }

      // If cell is sequential check slacks?
      if(_cells[cellName].isSequential){
	bool isInput=true;
        bool pinFound=false;
	for( size_t i=0;i<_cells[cellName].pins.size();++i){
	  if(pin==_cells[cellName].pins[i].name){
	    isInput=_cells[cellName].pins[i].isInput;
            pinFound = true ;
	    break;
	  }
	}
        if (!pinFound) {
          cerr << "Warning: Pin " << pin << " of cell " << cellName << " not found in the library!"
               << endl ;
        }
        
	// If pin is an input of a sequential element check
	if(pinFound && isInput){
	  double riseSlackV = myRound(min((double)0,riseSlack),2);
	  double fallSlackV = myRound(min((double)0,fallSlack),2);

	  if(fallSlackV<0){
            slack_ofs << cellInst << "/" << pin << "_f " << fallSlackV << endl ;

	    _slack_violations+=fallSlackV;
	  }
	  if(riseSlackV<0){
            slack_ofs << cellInst << "/" << pin << "_r " << riseSlackV << endl ;

	    _slack_violations+=riseSlackV;
	  }
	} // pinFound && isInput
      } // sequential cell

      // Compute slew violations at all input pins
      // Search for pin to find if this is an output pin
      bool isInput=true;
      bool pinFound = false ;
      for( size_t i=0;i<_cells[cellName].pins.size();++i){
	if(pin==_cells[cellName].pins[i].name){
	  isInput=_cells[cellName].pins[i].isInput;
          pinFound = true ;
	  break;
	}
      }
      if (!pinFound) {
        cerr << "Warning: Pin " << pin << " of cell " << cellName << " not found in the library!"
             << endl ;
      }

      
      if(pinFound && isInput){
	double riseSlewV = myRound((double)min((double)0,(_max_transition-riseTransition)),2);
	double fallSlewV = myRound((double)min((double)0,(_max_transition-fallTransition)),2);
	if(riseSlewV<0){

          slew_ofs << cellInst << "/" << pin << "_r " << riseSlewV << endl ;
	  _slew_violations += riseSlewV;
	}
	if(fallSlewV<0){

          slew_ofs << cellInst << "/" << pin << "_f " << fallSlewV << endl ;
	  _slew_violations += fallSlewV;
	}
      } // pinFound && isInput
    } // (valid)&&(pin!="")

    // Check PO constraints
    if( (valid) && (_po_set.find(cellInst) != _po_set.end())) {

      // Makes sure pin is empty
      assert(pin=="");

      // Check slack violations
      double riseSlackV = myRound(min((double)0,riseSlack),2);
      double fallSlackV = myRound(min((double)0,fallSlack),2);

      if(fallSlackV<0){
        slack_ofs << cellInst << "_f " << fallSlackV << endl ;
	_slack_violations+=fallSlackV;
      }
      if(riseSlackV<0){
        slack_ofs << cellInst << "_r " << riseSlackV << endl ;
	_slack_violations+=riseSlackV;
      }

      // check slew violations
      double riseSlewV = myRound((double)min((double)0,(_max_transition-riseTransition)),2);
      double fallSlewV = myRound((double)min((double)0,(_max_transition-fallTransition)),2);
      if(riseSlewV<0){
        slew_ofs << cellInst << "_r " << riseSlewV << endl;
        _slew_violations += riseSlewV;
      }
      if(fallSlewV<0){
        slew_ofs << cellInst << "_f " << fallSlewV << endl;
        _slew_violations += fallSlewV;
      }
    }

  } while (valid) ;
}

  
void violation_ctrl::compute_power(){

  _total_leakage_power = 0;
  for(map<string,string>::iterator it=_type_map_merged.begin();
      it!=_type_map_merged.end();it++){    
    LibParserCellInfo c = _cells[it->second];
    assert(c.leakagePower>=0);
    _total_leakage_power += c.leakagePower;
  }
}

void violation_ctrl::check_max_cap(){

  _cap_violations = 0 ;
  ofstream cap_ofs (_cap_violation_file.c_str()) ;
  

  // Check max cap violations for all instances
  for(map<string,string>::iterator it=_type_map_merged.begin();
      it!=_type_map_merged.end();it++){

    // For each gate check the list of pins, 
    // for each pin check for max cap violations
    const vector< pair<string,string> >& pin_list = _pin_map_orig[it->first];

    // Make sure that it->first is a valid gate that has more than 1 pin
    assert(pin_list.size()>1);
    
    // get cell from library
    assert (_cells.find(it->second) != _cells.end()) ;
    LibParserCellInfo c = _cells[it->second];

    // Make sure the number of pins in the library cell 
    // is the same as in the verilog file
    assert(c.pins.size()==pin_list.size());

    // for each output pin check max_cap violations
    for(size_t i=0;i<pin_list.size();++i){

      string pin_name = pin_list[i].first;
      string net_name = pin_list[i].second;
      string inst_name = it->first;

      // Find max capacitance for pin and input/output attribute
      double gate_max_cap=0;
      bool isInput=false;
      bool pinFound = false ;
      for(size_t j=0;j<c.pins.size();++j){
	if(c.pins[j].name == pin_name){
	  gate_max_cap=c.pins[j].maxCapacitance;
	  isInput=c.pins[j].isInput;
          pinFound = true ;
	  break;
	}
      }
      assert (pinFound) ;
      
      // max capacitance violation are not checked for input nodes
      if(!isInput){

	// get ceff cap for output pin
	pair<string,string> inst_pin=make_pair(inst_name,pin_name);
	assert (_ceff_pincap.find(inst_pin) != _ceff_pincap.end()) ;
	double ceff_cap = _ceff_pincap[inst_pin];
	assert(ceff_cap>=0);

	double violation = myRound((double)min((double)0, gate_max_cap - ceff_cap), 2);
	if(violation < 0){
          cap_ofs << it->first << "/" << pin_name << " " << violation << endl ;
	}
	assert(violation<=0);
	_cap_violations += violation;
      }
    } // end for each pin
  } // end for each instance


  // Check each input driver
  for(map<string,pair<string,string> >::iterator it=_drv_cells.begin();
      it!=_drv_cells.end();it++){
    
    string net_name=it->first;
    string cell=(it->second).first;
    string pin_name=(it->second).second;
    
    // Total cap for this net
    assert (_ceff_netcap.find(net_name) != _ceff_netcap.end()) ;
    double ceff_cap=_ceff_netcap[net_name];
    assert (ceff_cap >= 0) ;

    // Cell capacitance limit
    assert (_cells.find(cell) != _cells.end()) ;
    LibParserCellInfo c = _cells[cell];

    double gate_max_cap=0;
    bool isInput=false;
    bool pinFound = false ;
    //      string pin_name;
    for(size_t j=0;j<c.pins.size();++j){
      if(c.pins[j].name == pin_name){
	gate_max_cap=c.pins[j].maxCapacitance;
	isInput=c.pins[j].isInput;
        pinFound=true ;
	break;
      }
    }
    assert (pinFound) ;
    assert(!isInput); // pin of the driving_cell should always be an output pin

    if(!isInput){
      double violation = myRound((double) min((double)0, gate_max_cap-ceff_cap), 2);
      if(violation < 0){
        cap_ofs << it->first << "/" << pin_name << " " << violation << endl ;
      }
      assert(violation<=0);
      _cap_violations += violation;
    }     
  } // end for each input
}

void violation_ctrl::merge_sizes(){
  // Populate merged map with original sizes
  _type_map_merged=_type_map_orig;

  // traverse all the new sizes to update original sizes
  for(map<string,string>::iterator it=_type_map_new.begin();
      it!=_type_map_new.end();it++){
    // get original footprint
    string instance=it->first;
    string newcell_name=it->second;

    assert (_type_map_orig.find(instance) != _type_map_orig.end()) ;
    string originalcell_name=_type_map_orig[instance];
    
    string newfootprint;
    if(_cells.find(newcell_name) != _cells.end()){
      newfootprint=_cells[newcell_name].footprint;
      assert (!newfootprint.empty()) ;
    }
    else {
      cerr << "Warning: Cell " << newcell_name << " is not in the library!"
           << endl ;

      continue ;
    }

    assert (_cells.find(originalcell_name) != _cells.end()) ;
    string originalfootprint=_cells[originalcell_name].footprint;
    assert (!originalfootprint.empty()) ;
    
    // If footprints are the same update cell else print warning
    if(newfootprint == originalfootprint){
      _type_map_merged[instance]=newcell_name;
    } else {
      cerr << "Warning: invalid swapping: " << originalcell_name << " with " << newcell_name << endl;
    }
  }
}
