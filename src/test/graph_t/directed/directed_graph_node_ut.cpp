/**
 * Test/Graph_t package:
 * Submodule of Test package to test classes in the Graph package.
 *
 * directed_graph_node_ut class:
 * Class that tests the directed_graph_node class in the graph package.
 * The constructors and functions of the directed_graph_node class shall be tested.
 *
 * 
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since March 1, 2015
 *
 
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2015>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
 */


// Import Header files from the current/other module(s) of AggieMC.
#include "directed_graph_node_ut.hpp"

// Import appropriate header files from the C++ STL

// ===========================================================

/**
 * Default constructor of the unit test for the class
 *	directed_graph_node
 */
directed_graph_node_ut::directed_graph_node_ut() {
	cerr << "==tu	Don't instantiate the tester for directed_graph_node";
	cerr << endl;
	string err_msg = "==tu	Don't use directed_graph_node's default constructor";
	throw new violated_assertion(err_msg);
}

// ===========================================================


/**
 * Function to test the constructor and functions of
 *	directed_graph_node.
 * @param - None.
 * @return - Nothing.
 */
void directed_graph_node_ut::test_directed_graph_node() {
	cout << "==tu	Testing: directed_graph_node..." << endl;
	// Test the constructor.
	test_directed_graph_node_constructor();
	// Test the functions regarding the node_ID.
	test_directed_graph_node_node_ID();
	// Test the functions regarding the outgoing edge list.
	test_directed_graph_node_outgoing_edges();
	// Test the functions regarding the incoming edge list.
	test_directed_graph_node_incoming_edges();
	
	cout << endl;
}


/**
 * Function to test the constructors of the class directed_graph_node.
 * @param - None
 * @return - Nothing
 */
void directed_graph_node_ut::test_directed_graph_node_constructor() {
	// Check if directed_graph_node is instantiated correctly.
	directed_graph_node *dg_node = new directed_graph_node();
	cout << "==tu	>>	Default constructor's node_ID = ULLONG_MAX?";
	printer::num_test_cases_eval();
	
	if(ULLONG_MAX == dg_node->get_node_ID() &&
		dg_node->get_outgoing_edges().empty() &&
		dg_node->get_incoming_edges().empty()) {
		cout << "	Yes." << endl;
		cout << "==tu	>>	Default constructor's incoming_links empty?";
		cout << "	Yes." << endl;
		cout << "==tu	>>	Default constructor's outgoing_links empty?";
		cout << "	Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "	NO!!!" << endl;
	}
	
	int temp_node_ID = 12345001;
	dg_node = new directed_graph_node(temp_node_ID);
	cout << "==tu	>>	Standard constructor's node_ID = 12345001?";
	printer::num_test_cases_eval();
	if(temp_node_ID == dg_node->get_node_ID() &&
		dg_node->get_outgoing_edges().empty() &&
		dg_node->get_incoming_edges().empty()) {
		cout << "	Yes." << endl;
		cout << "==tu	>>	Standard constructor's incoming_links empty?";
		cout << "	Yes." << endl;
		cout << "==tu	>>	Standard constructor's outgoing_links empty?";
		cout << "	Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "	NO!!!" << endl;
	}
}


/**
 * Function to test the accessor and mutator functions regarding
 *	the node_ID of the class directed_graph_node.
 * @param - None
 * @return - Nothing
 */
void directed_graph_node_ut::test_directed_graph_node_node_ID() {
	// Use default constructor to instantiate directed_graph_node.
	directed_graph_node *dg_node = new directed_graph_node();
	// Modify its node_ID to 23460011.
	unsigned long long temp_node_ID = 23460011;
	dg_node->set_node_ID(temp_node_ID);
	cout << "==tu	>>	Is modified node_ID = 23460011?";
	printer::num_test_cases_eval();
	
	if(temp_node_ID == dg_node->get_node_ID()) {
		cout << "			Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "			NO!!!" << endl;
	}
	
	/**
	 * Use standard constructor to instantiate directed_graph_node.
	 * Its node_ID is set to 3728191001.
	 */
	temp_node_ID = 3728191001;
	dg_node = new directed_graph_node(temp_node_ID);
	// Modify its node_ID to 4372819001.
	temp_node_ID = 4372819001;
	dg_node->set_node_ID(temp_node_ID);
	cout << "==tu	>>	Is new modified node_ID = 4372819001?";
	printer::num_test_cases_eval();
	
	if(temp_node_ID == dg_node->get_node_ID()) {
		cout << "		Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "		NO!!!" << endl;
	}
}


/**
 * Function to test the accessor and mutator functions regarding
 *	the outgoing edge list of the class directed_graph_node.
 *
 * Since the standard constructor does not differ from the default
 *	constructor, the functions will only be tested on the default
 *	constructor.
 *
 * @param - None
 * @return - Nothing
 */
void directed_graph_node_ut::test_directed_graph_node_outgoing_edges() {
	// Use default constructor to instantiate directed_graph_node.
	directed_graph_node *dg_node = new directed_graph_node();
	// Modify its node_ID to 23460011.
	unsigned long long temp_node_ID = 23460011;
	dg_node->set_node_ID(temp_node_ID);
	cout << "==tu	>>	Is modified node_ID = 23460011?";
	printer::num_test_cases_eval();
	
	if(temp_node_ID == dg_node->get_node_ID()) {
		cout << "			Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
		cout << "			NO!!!" << endl;
	}
}


/**
 * Function to test the accessor and mutator functions regarding
 *	the incoming edge list of the class directed_graph_node.
 *
 * Since the standard constructor does not differ from the default
 *	constructor, the functions will only be tested on the default
 *	constructor.
 *
 * @param - None
 * @return - Nothing
 */
void directed_graph_node_ut::test_directed_graph_node_incoming_edges() {
}




