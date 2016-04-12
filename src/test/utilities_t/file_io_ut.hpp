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
#include "../../utilities/file_io.hpp"
#include "../../utilities/violated_assertion.hpp"

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>

#ifndef __FILE_IO_UT_H
#define __FILE_IO_UT_H
using namespace std;

// ==================================================================

class file_io_ut {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		file_io_ut();

		// ----------------------------------------------------------

		// Function to test the constructor and functions of file_io.
		static void test_file_io();
	
		/**
		 * Function to test the default constructor of the class
		 *	file_io.
		 */
		static void test_file_io_constructor();
	
		// Function to test the logging mode
		static void test_logging_mode();

		/**
		 * Function to test functions to get/set filenames for
		 *	log files.
		 */
		static void test_log_filenames();

		// Function to test the opening of I/O file streams
		static void test_open_io_fs();

		// Functions to test the output write functions.
//		static void test_file_io_std_op_fn();
//		static void test_file_io_std_err_fn();

		// Function to test the closing of I/O file streams
//		static void test_close_io_fs();
};
#endif
