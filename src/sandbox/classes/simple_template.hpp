/**
 * Define the simple_template object.
 * It has two simple attributes: an integer and a string.
 *
 * It has a set of simple template functions.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since March 1, 2015
 *
 *
 *
 *
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

// Import packages from the software
#include "../utilities/printer.hpp"
#include "../utilities/violated_assertion.hpp"
#include "../utilities/violated_precondition.hpp"
#include "../utilities/violated_postcondition.hpp"

// Import packages from the C++ STL
#include <string>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <map>
#include <utility>
#include <limits.h>			// For std::LONG_MIN


#ifndef __SIMPLE_TEMPLATE_H
#define __SIMPLE_TEMPLATE_H
using namespace std;

// =========================================================

// Class definition of the simple_template class.
template <typename T>
class simple_template {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor.
		simple_template();
		// Default destructor.
		~simple_template();

		// -----------------------------------------------------
		
		// Define headers for functions...

		// Function to convert a number to a string.
/*
		template<typename T>
		static string number_to_string(T a_num);

		template<typename T>
		static T number_to_string(T a_num);
*/		
//		template<typename T>
		static bool is_non_negative(T a_num);
		
//		int square_given_number(T a_num);
		T square_given_number(T a_num);
		

	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		// Declare (and initialize) constants.

		// -----------------------------------------------------
	
		// Declaration of static variables...
		
		// -----------------------------------------------------
	
		// Declaration of instance variables...

		// Index (as an integer) of the node.
//		string node_ID;
		

		// -------------------------------------------------------
		
		// Define headers for private functions...
};
#endif

