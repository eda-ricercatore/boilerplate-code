/**
 * Test/Utilities_t package:
 * Submodule of Test package to test classes in the Utilities package.
 *
 * conversion_alphanumeric_ut class:
 * Class that tests the conversion_alphanumeric class.
 * The constructors and functions of the conversion_alphanumeric class
 *	shall be tested.
 * 
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since January 1, 2016
 *
 *
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2010-2016>	<Zhiyang Ong>
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
 *
 */


// Import Header files from the other modules of lamiera-per-caldaie.
#include "conversion_alphanumeric_ut.hpp"
//#include "../../utilities/conversion_alphanumeric.hpp"

// Import packages from the C++ STL
/*
#include <iostream>
#include <string>
#include <cstring>
*/

//using namespace std;

// ==================================================================

// Define the static variables of the class conversion_alphanumeric.
//bool conversion_alphanumeric::flag = false;

// ==================================================================

/**
 * Default constructor of the unit test for the class
 *	conversion_alphanumeric_ut.
 */
conversion_alphanumeric_ut::conversion_alphanumeric_ut() {
	printer::debug_std_err("==tu	Don't instantiate the tester for conversion_alphanumeric.");
	printer::debug_std_err("");
	printer::debug_std_err("==tu	conversion_alphanumeric_ut shouldn't be instantiated!");
	string err_msg = "==tu	Don't use conversion_alphanumeric_ut's default constructor.";
	throw new violated_assertion(err_msg);
}

// ==================================================================

/**
 * Functions to test the default constructor and functions to
 *	convert numbers to strings.
 */
void conversion_alphanumeric_ut::test_numbers_to_strings() {
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("==tu	Testing: conversion_alphanumeric ...");
	
	// Test the default constructor of conversion_alphanumeric.
	test_conversion_alphanumeric_constructor();
	
	/**
	 * Test function to convert numbers to strings, using a function
	 *	template, via the C++11 STL to_string() function.
	 */
	test_numbers_to_strings_fn_template();

/**
	// Test if I can use "simple_template". 
	cout << "	###" << simple_template<int>::is_non_negative(493) << "===" << endl;
	simple_template<int> *a_ptr;
	cout << "	###" << a_ptr->square_given_number(5) << "===" << endl;
	// 0.25^2 = 0.0625
	simple_template<long double> *b_ptr;
	cout << "	###" << b_ptr->square_given_number(-0.25) << "===" << endl;
	// 16.25^2 = 164.0625
	cout << "	###" << b_ptr->square_given_number(-16.25) << "===" << endl;
**/






	// Test functions to convert integers to strings.
//	test_integers_to_strings();
	
	// Test functions to convert floating-point numbers to strings.
//	test_floating_point_numbers_to_strings();
	
//	printer::debug_std_op_ln("");
	printer::set_debugging_mode(false);
}

// -----------------------------------------------------

/**
 * Function to test the default constructor of the class
 *	conversion_alphanumeric.
 * @param - None.
 * @return - Nothing.
 */
void conversion_alphanumeric_ut::test_conversion_alphanumeric_constructor() {
	// Check if printer should not be instantiated.
	try {
		printer::num_test_cases_eval();
		printer::debug_std_op_ln("==tu	>>	Testing: default constructor.");
		conversion_alphanumeric<int> *num_conv = new conversion_alphanumeric<int>();
	}
	catch (violated_assertion *va_ex) {
		printer::debug_std_op_ln("==tu	==>	default constructor works.");
		printer::num_passed_test_cases_eval();
	}
}


/**
 * Function to test the template functions (or function templates)
 *	for converting numbers to strings.
 */
void conversion_alphanumeric_ut::test_numbers_to_strings_fn_template() {
	/**
	 * Test the to_string() functions from the C++1y STL, for signed
	 *	and unsigned integers.
	 *
	 * Assume that the compiler being used is C++11 (and other C++1y)
	 *	compliant.
	 */

	/**
	 * Flag to indicate if set of test cases is successfully passed.
	 * If flag is false, at least one test case failed.
	 * If flag is true, all the test case passed.
	 */
	bool int_to_str_flag = true;
// Temporary stoprage for the converted string.
	
	// For signed integers.
	int initial_int					= -1000;
	long long int initial_ll_int	= -100000;
	int final_int					= 10000;
	long long int final_ll_int		= 1000000;
	printer::debug_std_op_ln("==tu	Test conversion from signed integers to strings.");
	printer::debug_std_op("==tu	>> number_to_string_cpp_stl_to_string(int x)?");
	printer::num_test_cases_eval();
	for(int i=initial_int; i<final_int; i++) {
		/**
		 * Check if the function
		 *	number_to_string_cpp_stl_to_string(int x) returns the
		 *	same output as the to_string(int x) function from the
		 *	C++ STL.
		 */
//		if(0 != to_string(i).compare(conversion_alphanumeric::number_to_string_cpp_stl_to_string(<int>i))) {
		if(0 != to_string(i).compare(conversion_alphanumeric<int>::number_to_string_cpp_stl_to_string(i))) {
			// Test case failed for integer "i".
			printer::debug_std_err("		NO!!!");
			int_to_str_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_int, final_int], the testing of the function
	 *	number_to_string_cpp_stl_to_string(int x) works for the
	 *	specified range.
	 */
	if(int_to_str_flag) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}
	// Reset the boolean flag.
	int_to_str_flag = true;

	printer::debug_std_op("==tu	>> number_to_string_cpp_stl_to_string(long long int x)?");
	printer::num_test_cases_eval();
	for(long long int j=initial_ll_int; j<final_ll_int; j++) {
		/**
		 * Check if the function
		 *	number_to_string_cpp_stl_to_string(long long int x)
		 *	returns the same output as the to_string(long long int x)
		 *	function from the C++ STL.
		 */
//		if(0 != to_string(j).compare(conversion_alphanumeric::number_to_string_cpp_stl_to_string(<long long int>j))) {
		if(0 != to_string(j).compare(conversion_alphanumeric<long long int>::number_to_string_cpp_stl_to_string(j))) {
			// Test case failed for integer "j".
			printer::debug_std_err("	NO!!!");
			int_to_str_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_ll_int, final_ll_int], the testing of the function
	 *	number_to_string_cpp_stl_to_string(long long int x) works
	 *	for the specified range.
	 */
	if(int_to_str_flag) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}

	// ------------------------------------------------------------
}


