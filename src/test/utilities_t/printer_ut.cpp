/**
 * Test/Utilities_t package:
 * Submodule of Test package to test classes in the Utilities package.
 *
 * printer_ut class:
 * Class that tests the printer class.
 * The constructors and functions of the printer class shall be tested.
 * 
 *
 *
 * Copyright	(C)	<2010-2011>	<Zhiyang Ong>
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since January 1, 2011
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Import Header files from the other modules of lamiera-per-caldaie.
#include "printer_ut.hpp"

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>
using namespace std;

// Default constructor of the unit test for the class printer
printer_ut::printer_ut() {
	printer::debug_std_err("==tu	Don't instantiate the tester for printer.");
	printer::debug_std_err("");
	string err_msg = "==tu	Don't use printer_ut's default constructor.";
	throw new violated_assertion(err_msg);
}



// Function to test the constructor and functions of printer
void printer_ut::test_printer() {
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("==tu	Testing: printer...");
	
	//	Test the default and standard constructors of printer.
	test_printer_constructor();
	
	// Test the debugging mode
	test_debugging_mode();
	
	// Test the output print functions
	test_print_fn();
	
//	printer::debug_std_op_ln("");
	printer::set_debugging_mode(false);
}




/**
 * Function to test the default constructor of the class printer.
 * @param - None
 * @return - Nothing
 */
void printer_ut::test_printer_constructor() {
	// Check if printer should not be instantiated.
	try {
		printer::num_test_cases_eval();
		printer::debug_std_op_ln("==tu	>>	Testing: default constructor.");
		printer *my_printer = new printer();
	}
	catch (violated_assertion *va_ex) {
		printer::debug_std_op_ln("==tu	==>	default constructor works.");
		printer::num_passed_test_cases_eval();
	}
}




/**
 * Function to test the debugging mode.
 * @param - None.
 * @return - Nothing.
 */
void printer_ut::test_debugging_mode() {
	printer::set_debugging_mode(false);
	// Check if the default debugging mode is FALSE.
//	printer::debug_std_op("==tu	>>	Is the default debugging mode FALSE?");
cout << "==tu	>>	Is the default debugging mode FALSE?";
	printer::num_test_cases_eval();
	if(!printer::is_debugging_mode()) {
//		printer::debug_std_op_ln("		Yes.");
cout << "		Yes." << endl;
		printer::num_passed_test_cases_eval();
	}else{
//		printer::debug_std_op_ln("		NO!!!");
cout << "		NO!!!" << endl;
	}
	// Set the debugging mode to TRUE.
	printer::set_debugging_mode(true);
	// Check if the debugging mode is now set to TRUE.
	printer::debug_std_op("==tu	>>	Is program in debugging mode?");
	printer::num_test_cases_eval();
	if(printer::is_debugging_mode()) {
		printer::debug_std_op_ln("			Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("			NO!!!");
	}
}




/**
 * Function to test the output print functions.
 * @param - None.
 * @return - Nothing.
 */
void printer_ut::test_print_fn() {
	printer::set_debugging_mode(false);
	printer::debug_std_op("==tu	>>	PRINT MESSAGE outside DEBUGGING mode FAIL?");
	printer::num_test_cases_eval();
	printer::debug_std_op("Message shall not be printed.");
	printer::debug_std_err("Error Message shall not be printed.");
	printer::debug_std_op_ln("	Yes.");
	printer::num_passed_test_cases_eval();
	printer::set_debugging_mode(true);
printer::debug_std_op_ln("==tu	>>	Print message outside debugging mode fail?	Yes.");
	printer::debug_std_op_ln("==tu		Message shall be printed.");
	printer::debug_std_err("==tu		Error Message shall be printed.");
	printer::debug_std_op("==tu	>>	Print a message in debugging mode?");
	printer::num_test_cases_eval();
	printer::debug_std_op_ln("		Yes.");
	printer::num_passed_test_cases_eval();
}
