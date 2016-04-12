/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * File_IO class:
 * Class to handle input and output (I/O) file streams and their
 *	operations; i.e., file I/O manager.
 * Call the function "set_up_file_io()" before any other functions
 *	to ensure that default filenames are set up properly.
 * It is not required to call the function "set_up_file_io()".
 *
 * IMPORTANT NOTES:
 * Input and output file streams cannot be assigned, copied, nor
 *	instantiated.
 * Hence, I shall provide a list of I/O functions for each file stream,
 *	and use a switch statement to call the appropriate file stream
 *	for file I/O operations.
 * Therefore, this File_IO class can no longer be generic for all my
 *	software projects. It shall be project dependent.
 * For file streams with input and output operations, they shall be
 *	opened separately due to the requirement for specifying input and
 *	output operations.
 * However, when it comes to closing file streams or performing read
 *	and write operations on file streams, they can be classified
 *	under input or output streams. This will reduce the number of
 *	functions that need to be implemented.
 * That is, I shall define and implement functions either for file
 *	input or output operations, but not for both.
 *
 * This parent class shall handle File I/O for log files only.
 * Child classes that inherit from this will handle file I/O for
 *	specific file types (using typical file extensions).
 *
 *
 * How to use the File_IO class.
 *	set up file I/O.
 *	if file I/O operations (other than those for logging) are needed,
 *		set the filenames for file I/O.
 *		get file extensions for each filename.
 *		check file extensions for each filename.
 *	if filenames for logging need to be changed,
 *		customize those filenames.
 *	open I/O filestreams.
 *
 *	find corresponding file stream for valid file extension:
 *		check if the file extension is valid.
 *
 *	...
 *
 *	to enter/exit logging mode.
 *	to determine if logging mode is enabled.
 *	to print (normal) text and error messages to log files.
 *
 *	generate output files -- do this at the end of the program.
 *	close I/O filestreams -- do this at the end of the program.
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
 */


// Import packages from the software
#include "file_io.hpp"

// Import packages from the C++ STL
/*
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <map>
#include <utility>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <climits>
*/

/*
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem/config.hpp>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem/convenience.hpp>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem/exception.hpp>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem/fstream.hpp>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem/operations.hpp>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem/path.hpp>
#include </Applications/apps/sw_dev_tools-not_gnu/boost_1_48_0/boost/filesystem.hpp>
*/

//using namespace std;

// =========================================================

// Shortcut to container of strings.
typedef vector<string> str_vec;
// Shortcut to represent a pointer to the container of strings.
typedef vector<string>::iterator str_vec_p;

// ==================================================================

// Initialization of (string) constants.
/*
const string file_io::PERIOD = string(".");
const string file_io::SLASH = string("/");
const string file_io::TEXT = string("txt");
*/

// ==================================================================

// Define the static variables of the class file_io.

// Initialize the logging mode to FALSE.
bool file_io::is_logging = false;
// Initialize the containers of output filenames to NULL.
str_vec file_io::output_filenames;
/*
str_vec file_io::input_filenames;
str_vec file_io::io_filenames;
*/

// Initialize the filenames of the standard output/error filenames.
string file_io::standard_logfile = "normal_output.txt";
string file_io::error_logfile = "error_output.txt";
ofstream file_io::std_op_ofs;
ofstream file_io::err_op_ofs;

// ==================================================================

// Default constructor. Deprecated, but required.
file_io::file_io() {
	string err_msg = "==u	file_io shouldn't be instantiated!";
	throw new violated_assertion(err_msg);
}

// -----------------------------------------------------

// Accessor functions.

/**
 * Function to get the filename of the standard output
 *	log file.
 * @param - None
 * @return - The filename of the standard output log file
 */
string file_io::get_std_log_filename() {
	return standard_logfile;
}



/**
 * Function to get the filename of the error output
 *	log file.
 * @param - None
 * @return - The filename of the error output log file
 */
string file_io::get_err_log_filename() {
	return error_logfile;
}





/**
 * Function to determine if mode is logging or otherwise.
 * @param - None.
 * @return - boolean TRUE, if in logging mode; else, return FALSE.
 */
bool file_io::is_logging_mode() {
	if(is_logging) {
		return true;
	}else{
		return false;
	}
}



/**
 * Function to determine if file stream for standard
 *	output is open.
 * @param - None.
 * @return - boolean TRUE, if in std_op_ofs is open;
 *				else, return FALSE.
 */
bool file_io::std_op_ofs_is_open() {
	if(std_op_ofs.is_open()) {
		return true;
	}else{
		return false;
	}
}
/**
 * Function to determine if file stream for standard
 *	error is open.
 * @param - None.
 * @return - boolean TRUE, if in err_op_ofs is open;
 *				else, return FALSE.
 */
bool file_io::err_op_ofs_is_open() {
	if(err_op_ofs.is_open()) {
		return true;
	}else{
		return false;
	}
}

// -----------------------------------------------------

// Mutator functions.


/**
 * Function to enter/exit logging mode.
 * @param logging_mode:	Indicator for entering the logging mode
 *		(when true); false, otherwise.
 * @return - Nothing.
 *
 *
 * ### IMPORTANT ASSUMPTIONS:
 * If the filenames of the standard and error output log files are
 * empty, they shall be set to default values.
 * Else, if these filenames are empty, output file streams cannot
 * be created for these files. This would prevent logging of the
 * standard and error output messages.
 */
void file_io::set_logging_mode(const bool &logging_mode) {
	// Enter the logging mode
	is_logging = logging_mode;
	
	if(is_logging_mode()) {
		cout << "==u	In the logging mode" << endl;

		if(get_std_log_filename().empty()) {
			standard_logfile = "normal_output.txt";
		}

		if(get_err_log_filename().empty()) {
			error_logfile = "error_output.txt";
		}
	}else{
		cout << "==u	Not in the logging mode" << endl;
	}
	
	return;
}



/**
 * Function to set the filenames of the standard and error output
 * log files.
 * @param op_log_filename:	The filename of the log file for messages
 *		sent to the standard output stream.
 * @param err_log_filename:	The filename of the log file for messages
 *		sent to the standard error stream.
 * @return - Nothing.
 */
void file_io::set_log_filenames(const string &op_log_filename,
						   const string &err_log_filename) {
	
	// Assign the filenames of the log files
	if(!op_log_filename.empty()) {
		standard_logfile = op_log_filename;
	}
	if(!err_log_filename.empty()) {
		error_logfile = err_log_filename;
	}
}



// -----------------------------------------------------

// Output functions

/**
 * Function to print message in standard output while
 * in logging mode
 * @param msg:	Message to be printed to standard output
 * @return - Nothing.
 */
void file_io::fileIO_std_op(const string &op_message) {
	/**
	 * Conditions for printing standard output message to a file:
	 *	#	in logging mode
	 *	#	file stream for standard output is open
	 *	#	message is not empty
	 */
	if(is_logging_mode() && std_op_ofs.is_open() && (!op_message.empty())) {
//cout<<"==u			In logging mode and std_ofs is open."<<endl;
		std_op_ofs << op_message << endl;
	}
	
//	return;
}



/**
 * Function to print error message in standard error while
 * in logging mode
 * @param msg:	Error message to be printed to standard error
 * @return - Nothing.
 */
void file_io::fileIO_std_err(const string &err_message) {
	/**
	 * Conditions for printing standard error message to a file:
	 *	#	in logging mode
	 *	#	file stream for standard error is open
	 *	#	message is not empty
	 */
	if(is_logging_mode() && err_op_ofs.is_open() && (!err_message.empty())) {
//cout<<"==u			In logging mode and err_ofs is open."<<endl;
		err_op_ofs << err_message << endl;
	}

//	return;
}



// -----------------------------------------------------

// Other functions.


/**
 * Function to open the input and output filestreams.
 * @param - None.
 * @return - Nothing.
 */
void file_io::open_io_streams() {
	// Open output file streams for the log files.

	// Is the filename for standard output not empty?
	if(!get_std_log_filename().empty()) {
		// Yes. Open output file stream.
		std_op_ofs.open(get_std_log_filename().c_str(),ofstream::out);
	}else{
		// No. Set up the default filenames for standard output/error.
		file_io::set_up_file_io();
		// Open output file stream for standard output.
		std_op_ofs.open(get_std_log_filename().c_str(),ofstream::out);
	}
	// Is the filename for standard error not empty?
	if(!get_err_log_filename().empty()) {
		// Yes. Open output file stream.
		err_op_ofs.open(get_err_log_filename().c_str(),ofstream::out);
	}else{
		// No. Set up the default filenames for standard output/error.
		file_io::set_up_file_io();
		// Open output file stream for standard error.
		err_op_ofs.open(get_err_log_filename().c_str(),ofstream::out);
	}
}




/**
 * Function to close the input and output filestreams.
 * @param - None.
 * @return - Nothing.
 */
void file_io::close_io_streams() {
//cout << "==fio		Close opened file streams." << endl;
	// For each available/open I/O file stream, close it.
	if(std_op_ofs.is_open()) {
		std_op_ofs.close();
	}
	if(err_op_ofs.is_open()) {
		err_op_ofs.close();
	}

	// Else, if file streams are close, I don't need to close them.
//cout << "==fio		Close OPENed file streams." << endl;
}




/**
 * Function to set up the file I/O operations.
 * @param - None.
 * @return - Nothing.
 */
void file_io::set_up_file_io() {
	/**
	 * Define the default filenames for the standard output and
	 *	standard error log files.
	 */
	if(get_std_log_filename().empty()) {
		standard_logfile = "normal_output.txt";
	}
	if(get_err_log_filename().empty()) {
		error_logfile = "error_output.txt";
	}
}

