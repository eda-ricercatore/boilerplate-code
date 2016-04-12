/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * Printer class:
 * Class to print messages to standard output/error, while allowing
 *	such print statements to be switched on/off.
 * The functions provided in this class for printing messages shall
 *	be used for all print statements in this C++ program, so that
 *	these print statements can be switched off outside of debugging
 *	mode (rather than commented out) in the optimized version.
 *
 *
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
 *
 *
 *
 *
 *
 *
 *
 * This Class printer is used to enable software developers to determine
 *	the verbosity from standard output and standard error.
 * There are functions that prints the input string in standard output
 *	and standard error.
 * There are also functions that do these based on a variable flag,
 *	which is used to determine if the input strings shall be printed.
 *
 * All the functions in this class are static.
 * This is because I do not want to instantiate any instances of this
 *	class.
 * If I need an instance of this class in each other class to print a
 *	string to standard output, standard error, or an output file, I
 *	would probably leave a lot of objects lying around that are not
 *	being subjected to any garbage collection.
 * Hence, to minimize dynamic memory usage, I would prevent the
 *	instantiation of objects of this class.
 * Enable the debugging and logging modes to be set independently.
 * This enables me to keep a log of messages in the log files, while
 *	still enabling me to read messages from the terminal's shell.
 *
 *
 *
 * Definition:
 * Debugging mode: Mode when messages are printed to standard output
 *	and standard error, instead of being suppressed.
 *
 * Logging mode: Mode when messages are printed to separate files,
 *	instead of standard output and standard error. A file would contain
 *	messages that were intended for standard output, while another file
 *	would contain messages that were intended for standard error.
 */

// Import packages from the software
#include "printer.hpp"

// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// ==================================================================

// Define the static variables of the class printer.
bool printer::is_debugging = false;
int printer::num_test_cases = 0;
int printer::num_passed_test_cases = 0;

// ==================================================================

// Default constructor
printer::printer() {
	string err_msg = "==u	printers shouldn't be instantiated!";
	throw new violated_assertion(err_msg);
}


// -----------------------------------------------------

// Accessor functions.

/**
 * Function to determine if mode is debugging or otherwise.
 * @param - None
 * @return - boolean TRUE, if in debugging mode; else, return FALSE.
 */
bool printer::is_debugging_mode() {
	if(is_debugging) {
		return true;
	}else{
		return false;
	}
}


// -----------------------------------------------------

// Mutator functions.


/**
 * Function to enter/exit debugging mode.
 * @param debug_mode:	Indicator for entering the debugging mode
 *		(when true); false, otherwise.
 * @return - Nothing.
 */
void printer::set_debugging_mode(const bool &debug_mode) {
	// Enter the debugging mode
	is_debugging = debug_mode;
	
	if(is_debugging_mode()) {
		cout << "==u	In the debugging mode." << endl;
	}else{
		cout << "==u	Not in the debugging mode." << endl;
	}
	
	return;
}


// -----------------------------------------------------

// Output functions

/**
 * Function to print message in standard output while
 * in debugging mode and creating a new line.
 * @param msg:	Message to be printed to standard output
 * @return - Nothing.
 */
void printer::debug_std_op_ln(const string &msg) {
	if(is_debugging_mode()) {
		cout << msg << endl;
	}
	
	return;
}



/**
 * Function to print message in standard output while
 * in debugging mode, without creating a new line.
 * @param msg:	Message to be printed to standard output
 * @return - Nothing.
 */
void printer::debug_std_op(const string &msg) {
	if(is_debugging_mode()) {
		cout << msg;
	}
	
	return;
}



/**
 * Function to print error message in standard error while
 * in debugging mode
 * @param msg:	Error message to be printed to standard error
 * @return - Nothing.
 */
void printer::debug_std_err(const string &err_msg) {
	if(is_debugging_mode()) {
		cerr << err_msg << endl;
	}

	return;
}



/**
 * Function to update the number of test cases.
 * @param - None.
 * @return - Nothing.
 */
void printer::num_test_cases_eval() {
	num_test_cases = num_test_cases + 1;
}


/**
 * Function to update the number of passed test cases.
 * @param - None.
 * @return - Nothing.
 */
void printer::num_passed_test_cases_eval() {
	num_passed_test_cases = num_passed_test_cases + 1;
}



/**
 * Function to get the number of test cases.
 * @param - None.
 * @return - Nothing.
 */
int printer::get_num_test_cases() {
	return num_test_cases;
}




/**
 * Function to get the number of passed test cases.
 * @param - None.
 * @return - Nothing.
 */
int printer::get_num_passed_test_cases() {
	return num_passed_test_cases;
}