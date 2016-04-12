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
#include "../../utilities/conversion_alphanumeric.hpp"

// Import packages from the C++ STL
/*
#include <iostream>
#include <string>
#include <cstring>
*/

using namespace std;

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
	printer::debug_std_op_ln("==tu	Testing: conversion_alphanumeric ...");
	
	// Test the default constructor of conversion_alphanumeric.
	test_conversion_alphanumeric_constructor();
	
	// Test functions to convert integers to strings.
	test_integers_to_strings();
	
	// Test functions to convert floating-point numbers to strings.
	test_floating_point_numbers_to_strings();
	
	printer::debug_std_op_ln("");
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
	
	// For signed integers.
	int initial_int					= -1000;
	long long int initial_ll_int	= -100000;
	int final_int					= 10000;
	long long int final_ll_int		= 1000000;
	printer::debug_std_op_ln("==tu	Test conversion from signed integers to strings.");
	printer::debug_std_op("==tu	>>	number_to_string_cpp_stl_to_string(int x) works?");
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
			printer::debug_std_err("			NO!!!");
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
		printer::debug_std_op_ln("			Yes.");
		printer::num_passed_test_cases_eval();
	}

	printer::debug_std_op("==tu	>>	number_to_string_cpp_stl_to_string(long long int x) works?");
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
			printer::debug_std_err("		NO!!!");
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
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}

	// ------------------------------------------------------------
}


// ================================================================


/**
 * Function to test functions to convert integers to strings.
 * @param - None.
 * @return - Nothing.
 */
void conversion_alphanumeric_ut::test_integers_to_strings() {
	/**
	 * Test the to_string() functions from the C++1y STL, for
	 *	signed and unsigned integers.
	 *
	 * Assume that the compiler being used is C++11 (and other
	 *	C++1y) compliant.
	 */

	/**
	 * Flag to indicate if set of test cases is successfully passed.
	 * If flag is false, at least one test case failed.
	 * If flag is true, all the test case passed.
	 */
	bool int_to_str_sgn_int_flag	= true;
	bool int_to_str_sgn_llint_flag	= true;
	bool int_to_str_uns_int_flag	= true;
	bool int_to_str_uns_llint_flag	= true;
	

	// For signed integers.
	int initial_int					= -1000;
	long long int initial_ll_int	= -100000;
	int final_int					= 10000;
	long long int final_ll_int		= 1000000;
	printer::debug_std_op_ln("==tu	Test conversion from signed integers to strings.");
	printer::debug_std_op("==tu	>>	int_to_str(int x) works?");
	printer::num_test_cases_eval();
	for(int i=initial_int; i<final_int; i++) {
		/**
		 * Check if the function int_to_str(int x) returns the same
		 *	output as the to_string(int x) function from the C++ STL.
		 */
		if(0 != to_string(i).compare(conversion_alphanumeric<int>::int_to_str(i))) {
			// Test case failed for integer "i".
			printer::debug_std_err("			NO!!!");
			int_to_str_sgn_int_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_int, final_int], the testing of the function
	 *	int_to_str(int x) works for the specified range.
	 */
	if(int_to_str_sgn_int_flag) {
		printer::debug_std_op_ln("			Yes.");
		printer::num_passed_test_cases_eval();
	}

	printer::debug_std_op("==tu	>>	int_to_str(long long int x) works?");
	printer::num_test_cases_eval();
	for(long long int j=initial_ll_int; j<final_ll_int; j++) {
		/**
		 * Check if the function int_to_str(long long int x) returns
		 *	the same output as the to_string(long long int x)
		 *	function from the C++ STL.
		 */
		if(0 != to_string(j).compare(conversion_alphanumeric<long long int>::int_to_str(j))) {
			// Test case failed for integer "j".
			printer::debug_std_err("		NO!!!");
			int_to_str_sgn_llint_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_ll_int, final_ll_int], the testing of the function
	 *	int_to_str(long long int x) works for the specified range.
	 */
	if(int_to_str_sgn_llint_flag) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}
	
	// -----------------------------------------------------------
	
	// For unsigned integers.
	unsigned int initial_u_int				= 1000;
	unsigned long long int initial_ull_int	= 1000;
	unsigned int final_u_int				= 10000;
	unsigned long long int final_ull_int	= 100000000;
/*
	unsigned int initial_u_int				= 1000;
	unsigned long long int initial_ull_int	= 1000;
	unsigned int final_u_int				= 1001;
	unsigned long long int final_ull_int	= 1001;
*/
	printer::debug_std_op_ln("==tu	Test conversion from unsigned integers to strings.");
	printer::debug_std_op("==tu	>>	int_to_str(unsigned int x) works?");
	printer::num_test_cases_eval();
	for(unsigned int k=initial_u_int; k<final_u_int; k++) {
		/**
		 * Check if the function int_to_str(unsigned int x) returns
		 *	the same output as the to_string(unsigned int x) function
		 *	from the C++ STL.
		 */
		if(0 != to_string(k).compare(conversion_alphanumeric<unsigned int>::int_to_str(k))) {
			// Test case failed for integer "k".
			printer::debug_std_err("		NO!!!");
			int_to_str_uns_int_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_u_int, final_u_int], the testing of the function
	 *	int_to_str(unsigned int x) works for the specified range.
	 */
	if(int_to_str_uns_int_flag) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}
	
	
	printer::debug_std_op("==tu	>>	int_to_str(unsigned long long int x) works?");
	printer::num_test_cases_eval();
	for(unsigned long long int m=initial_ull_int; m<final_ull_int; m++) {
		/**
		 * Check if the function int_to_str(unsigned long long int x)
		 *	returns the same output as the
		 *	to_string(unsigned long long int x) function from the
		 *	C++ STL.
		 */
		if(0 != to_string(m).compare(conversion_alphanumeric<unsigned long long int>::int_to_str(m))) {
			// Test case failed for integer "m".
			printer::debug_std_err("	NO!!!");
			int_to_str_uns_llint_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_ull_int, final_ull_int], the testing of the function
	 *	int_to_str(unsigned long long int x) works for the specified
	 *	range.
	 */
	if(int_to_str_uns_llint_flag) {
		printer::debug_std_op_ln("	Yes.");
		printer::num_passed_test_cases_eval();
	}
}

/**
 * Function to test functions to convert floating-point numbers
 *	to strings.
 * @param - None.
 * @return - Nothing.
 */
void conversion_alphanumeric_ut::test_floating_point_numbers_to_strings() {
	/**
	 * Test the to_string() functions from the C++1y STL, for
	 *	signed and unsigned integers.
	 *
	 * Assume that the compiler being used is C++11 (and other
	 *	C++1y) compliant.
	 */

	/**
	 * Flag to indicate if set of test cases is successfully passed.
	 * If flag is false, at least one test case failed.
	 * If flag is true, all the test case passed.
	 */
	bool dbl_to_str_flag		= true;
	bool long_dbl_to_str_flag	= true;
	/**
	 * Limits on the intervals for testing the floating-point
	 *	numbers.
	 */
	double initial_dbl				= -7.2345;
	long double initial_long_dbl	= -302.3435459;
	double final_dbl				= 34.4575;
	long double final_long_dbl		= 1704.21398654;
	
	// For floating-point numbers.
	printer::debug_std_op_ln("==tu	Test conversion from floating-point numbers to strings.");
	printer::debug_std_op("==tu	>>	floating_pt_to_str(double x) works?");
	printer::num_test_cases_eval();
	for(double i=initial_dbl; i<final_dbl; i=i+3.1236459) {
		/**
		 * Check if the function int_to_str(double x) returns the
		 *	same output as the to_string(double x) function from the
		 *	C++ STL.
		 */
		if(0 != to_string(i).compare(conversion_alphanumeric<double>::floating_pt_to_str(i))) {
			// Test case failed for integer "i".
			printer::debug_std_err("		NO!!!");
			dbl_to_str_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_dbl, final_dbl], the testing of the function
	 *	int_to_str(double x) works for the specified range.
	 */
	if(dbl_to_str_flag) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}
	
	
	// For large floating-point numbers.
	printer::debug_std_op_ln("==tu	Test conversion from large floating-point numbers to strings.");
	printer::debug_std_op("==tu	>>	int_to_str(long double x) works?");
	printer::num_test_cases_eval();
	for(long double j=initial_long_dbl; j<final_long_dbl; j=j+97.1236459) {
		/**
		 * Check if the function int_to_str(long double x) returns
		 *	the same output as the to_string(long double x) function
		 *	from the C++ STL.
		 */
		if(0 != to_string(j).compare(conversion_alphanumeric<long double>::floating_pt_to_str(j))) {
			// Test case failed for integer "j".
			printer::debug_std_err("		NO!!!");
			dbl_to_str_flag = false;
		}
	}
	/**
	 * If mini test cases passed for the range of integers used,
	 *	[initial_long_dbl, final_long_dbl], the testing of the function
	 *	int_to_str(long double x) works for the specified range.
	 */
	if(long_dbl_to_str_flag) {
		printer::debug_std_op_ln("		Yes.");
		printer::num_passed_test_cases_eval();
	}
}

