/**
 * Test/Utilities_t package:
 * Submodule of Test package to test classes in the Utilities package.
 *
 * conversion_alphanumeric_ut class:
 * Class that tests the conversion_alphanumeric class.
 * The constructors and functions of the conversion_alphanumeric class shall be tested.
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


// Import packages from the software
#include "../../utilities/conversion_alphanumeric.hpp"
// Import Header files from the other modules of lamiera-per-caldaie.
#include "../../utilities/printer.hpp"
#include "../../utilities/violated_assertion.hpp"
#include "../../utilities/violated_precondition.hpp"

// Import "test" classes from the "sandbox".
#include "../../sandbox/classes/simple_template.hpp"

// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>

#ifndef __CONVERSION_ALPHANUMERIC__UT_H
#define __CONVERSION_ALPHANUMERIC_UT_H


using namespace std;

// =========================================================

// Class definition of the conversion_alphanumeric_ut class
class conversion_alphanumeric_ut {
	// Privately accessible data members and functions.
//	private:
		// Declaration of static variables...
		
		// Boolean FLAG.
//		static bool flag;
	
		// -------------------------------------------------------
		
		// Define headers for private functions...

	// =========================================================

	// Publicly accessible data members, constructors, and functions

	public:
		// Default constructor
		conversion_alphanumeric_ut();

		// -----------------------------------------------------
		
		/**
		 * Define headers for functions to test the conversion of
		 *	numbers to strings.
		 */
		
		/**
		 * Function to test the default constructor and functions
		 *	to convert numbers to strings.
		 */
		static void test_numbers_to_strings();
		
		/**
		 * Function to test the default constructor of the class
		 *	conversion_alphanumeric.
		 */
		static void test_conversion_alphanumeric_constructor();
		
		/**
		 * Function to test the template functions (or function
		 *	templates) for converting numbers to strings.
		 */
		static void test_numbers_to_strings_fn_template();
		
		// Function to test functions to convert integers to strings.
//		static void test_integers_to_strings();
		
		/**
		 * Function to test functions to convert floating-point
		 *	numbers to strings.
		 */
//		static void test_floating_point_numbers_to_strings();
};
#endif