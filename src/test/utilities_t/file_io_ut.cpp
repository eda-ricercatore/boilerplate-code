/**
 * Test/Utilities_t package:
 * Submodule of Test package to test classes in the Utilities package.
 *
 * file_io_ut class:
 * Class that tests the file_io class.
 * The constructors and functions of the file_io class shall be tested.
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
#include "file_io_ut.hpp"

// Import appropriate header files from the C++ STL

// ===========================================================

// Default constructor of the unit test for the class file_io
file_io_ut::file_io_ut() {
	printer::debug_std_err("==tu	Don't instantiate the tester for file_io");
	printer::debug_std_err("");
	string err_msg = "==tu	Don't use file_io's default constructor";
	throw new violated_assertion(err_msg);
}

// ===========================================================

/**
 * Function to test the constructor and functions of file_io
 * @param - None
 * @return - Nothing
 */
void file_io_ut::test_file_io() {
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("==tu	Testing: file_io...");
	/**
	 * Function to test the default constructor of the class
	 *	file_io.
	 */
	test_file_io_constructor();

	// Function to test the logging mode
	test_logging_mode();
	// Function to test functions to access/modify filenames.
	test_log_filenames();


	/**
	 * Function to test I/O file streams and output write
	 *	functions.
	 * This function test for the following:
	 *	#	Test if I/O file streams can be opened.
	 *	#	Test if I/O file streams can write messages.
	 *	#	Test if I/O file streams can be closed.
	 */
	test_open_io_fs();

//	printer::debug_std_op_ln("");
	printer::set_debugging_mode(false);
}




/**
 * Function to test the default constructor of the class file_io.
 * @param - None
 * @return - Nothing
 */
void file_io_ut::test_file_io_constructor() {
	// Check if file_io should not be instantiated.
	try {
		printer::num_test_cases_eval();
		printer::debug_std_op_ln("==tu	>>	Testing: default constructor.");
		file_io *my_file_io = new file_io();
	}catch (violated_assertion *va_ex) {
		printer::debug_std_op_ln("==tu	==>	default constructor works.");
		printer::num_passed_test_cases_eval();
	}
}




/**
 * Function to test the logging mode.
 * @param - None.
 * @return - Nothing.
 */
void file_io_ut::test_logging_mode() {
	// Check if the default debugging mode is FALSE.
	printer::debug_std_op("==tu	>>	Is the default debugging mode FALSE?");
	printer::num_test_cases_eval();
	if(!file_io::is_logging_mode()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Set the debugging mode to TRUE.
	file_io::set_logging_mode(true);
		// Check if the debugging mode is now set to TRUE.
	printer::debug_std_op("==tu	>>	Is program in debugging mode?");
	printer::num_test_cases_eval();
	if(file_io::is_logging_mode()) {
		printer::debug_std_op_ln("			Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("			NO!!!");
	}

	// Check if the logging mode is TRUE.
	if(file_io::is_logging_mode()) {
		// Yes. Set it to FALSE.
		file_io::set_logging_mode(false);
	}
	// Logging mode is FALSE.
	printer::debug_std_op("==tu	>>	Can logging mode be set to FALSE?");
	printer::num_test_cases_eval();
	if(!file_io::is_logging_mode()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("	NO!!!");
	}
	// Set the debugging mode to TRUE again.
	file_io::set_logging_mode(true);
}




/**
 * Function to test functions to get/set filenames for
 *	log files.
 * @param - None
 * @return - Nothing
 */
void file_io_ut::test_log_filenames() {
	// Check if default filename for standard output is empty.
	printer::debug_std_op("==tu	>>	Default filename for std o/p isn't empty?");
	printer::num_test_cases_eval();
	if(!file_io::get_std_log_filename().empty()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Check if default filename for standard error is empty.
	printer::debug_std_op("==tu	>>	Default filename for std err isn't empty?");
	printer::num_test_cases_eval();
	if(!file_io::get_err_log_filename().empty()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	string temp_std_op_fname = file_io::get_std_log_filename();
	string temp_std_err_fname = file_io::get_err_log_filename();


	// Set up the default filenames for standard output/error.
	file_io::set_up_file_io();
	// Check if default filename for standard output is acceptable.
	printer::debug_std_op("==tu	>>	Default filename for std o/p is ok?");
	printer::num_test_cases_eval();
	if(0 == file_io::get_std_log_filename().compare(temp_std_op_fname)) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Check if default filename for standard error is acceptable.
	printer::debug_std_op("==tu	>>	Default filename for std err is ok?");
	printer::num_test_cases_eval();
	if(0 == file_io::get_err_log_filename().compare(temp_std_err_fname)) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}


	// Check if the filenames can be sell to empty strings.
	file_io::set_log_filenames("","");
	// Check if filename for standard output is not empty.
	printer::debug_std_op("==tu	>>	Filename for std o/p cannot be empty?");
	printer::num_test_cases_eval();
	if(!file_io::get_std_log_filename().empty()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Check if filename for standard error is not empty.
	printer::debug_std_op("==tu	>>	Filename for std err cannot be empty?");
	printer::num_test_cases_eval();
	if(!file_io::get_err_log_filename().empty()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}


	// Check if the filenames can be set correctly.
	string good_fname = "good.text";
	string bad_fname = "bad.text";
	file_io::set_log_filenames(good_fname,bad_fname);
	// Check if filename for standard output is changed correctly.
	printer::debug_std_op("==tu	>>	Filename for std o/p is changed correctly?");
	printer::num_test_cases_eval();
	if(0 == file_io::get_std_log_filename().compare(good_fname)) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Check if filename for standard error is changed correctly.
	printer::debug_std_op("==tu	>>	Filename for std err is changed correctly?");
	printer::num_test_cases_eval();
	if(0 == file_io::get_err_log_filename().compare(bad_fname)) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}


	// Set up the default filenames for standard output/error again.
	file_io::set_log_filenames("normal_output.txt","error_output.txt");
}





/**
 * Function to test I/O file streams and output write
 *	functions.
 * This function test for the following:
 *	#	Test if I/O file streams can be opened.
 *	#	Test if I/O file streams can write messages.
 *	#	Test if I/O file streams can be closed.
 * @param - None
 * @return - Nothing
 */
void file_io_ut::test_open_io_fs() {
	// Is the output file stream for standard output open?
	printer::debug_std_op("==tu	>>	o/p file stream for std o/p closed by default?");
	printer::num_test_cases_eval();
	if(!file_io::std_op_ofs_is_open()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("	NO!!!");
	}
	// Is the output file stream for standard error open?
	printer::debug_std_op("==tu	>>	o/p file stream for std err closed by default?");
	printer::num_test_cases_eval();
	if(!file_io::err_op_ofs_is_open()) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("	NO!!!");
	}


	/**
	 * Open the output file streams for standard output and
	 *	standard error.
	 */
	file_io::open_io_streams();
	// Is the output file stream for standard output open?
	printer::debug_std_op("==tu	>>	o/p file stream for std o/p opened?");
	printer::num_test_cases_eval();
	if(file_io::std_op_ofs_is_open()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Is the output file stream for standard error open?
	printer::debug_std_op("==tu	>>	o/p file stream for std err opened?");
	printer::num_test_cases_eval();
	if(file_io::err_op_ofs_is_open()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}


	/**
	 * Write messages using I/O file streams for standard
	 *	output and standard error.
	 *
	 * Manually check the contents of the files to determine if
	 *	their contents are correct.
	 */
	file_io::fileIO_std_op("File I/O stream for standard output is OK.");
	file_io::fileIO_std_err("File I/O stream for standard error is OK.");


	/**
	 * Close the output file streams for standard output and
	 *	standard error.
	 */
	file_io::close_io_streams();
	// Is the output file stream for standard output open?
	printer::debug_std_op("==tu	>>	o/p file stream for std o/p closed?");
	printer::num_test_cases_eval();
	if(!file_io::std_op_ofs_is_open()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
	// Is the output file stream for standard error open?
	printer::debug_std_op("==tu	>>	o/p file stream for std err closed?");
	printer::num_test_cases_eval();
	if(!file_io::err_op_ofs_is_open()) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}else{
		printer::debug_std_op_ln("		NO!!!");
	}
}
