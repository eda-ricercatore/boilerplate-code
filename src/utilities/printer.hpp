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
#include "violated_assertion.hpp"
#include "violated_precondition.hpp"


// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>

#ifndef __PRINTER_H
#define __PRINTER_H
using namespace std;

// =========================================================

// Class definition of the printer class
class printer {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor
		printer();

		// -----------------------------------------------------
		
		// Define headers for functions...
	
		// Accessor functions.
		
		// Function to determine if mode is debugging or otherwise
		static bool is_debugging_mode();
	
		// Function to get the number of test cases.
		static int get_num_test_cases();
		
		// Function to get the number of passed test cases.
		static int get_num_passed_test_cases();
				
		// -----------------------------------------------------

		// Mutator functions.
		
		// Function to enter/exit debugging mode
		static void set_debugging_mode(const bool &debug_mode);
	
		// Function to update the number of test cases.
		static void num_test_cases_eval();
		
		// Function to update the number of passed test cases.
		static void num_passed_test_cases_eval();
	
		// -----------------------------------------------------
	
		// Output functions

		/**
		 * Function to print message in standard output, while
		 * in debugging mode and creating a new line.
		 */
		static void debug_std_op_ln(const string &msg);
		/**
		 * Function to print message in standard output while
		 * in debugging mode, without creating a new line.
		 */
		static void debug_std_op(const string &msg);
		
		/**
		 * Function to print error message in standard error
		 * while in debugging mode
		 */
		static void debug_std_err(const string &err_msg);

	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		// Declaration of static variables...
		
		// Flag to indicate that the software is in debugging mode
		static bool is_debugging;
		// Number of test cases.
		static int num_test_cases;
		// Number of passed test cases.
		static int num_passed_test_cases;
	
		// -------------------------------------------------------
		
		// Define headers for private functions...

};
#endif