/**
 * Define the element object.
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


#ifndef __ELEMENT_H
#define __ELEMENT_H
using namespace std;


// =========================================================

// Shortcut to a pair representing an integer and a boolean flag.
typedef pair<int, bool> pair_int_bool;

// =========================================================

// Class definition of the element class
class element {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor.
		element();
		// Standard constructors.
		element(const unsigned long long int &e_ID);
		// Default destructor.
		~element();

		// -----------------------------------------------------
		
		// Define headers for functions...

		// Accessor functions.

		// Function to get the ID of this element.
		unsigned long long int get_element_ID() const;
		
		// -----------------------------------------------------

		// Mutator functions.
		
		// Function to set the ID of this element.
		void set_element_ID(const unsigned long long int &temp_ID);
		
		// -----------------------------------------------------
		
		// Operator overloading.
		
		// Overload the "<" operator for 1 input element.
		bool operator<(const element &cmp) const;
		// Overload the "<" operator for 2 input elements.
		bool operator() (const element& e1, const element& n2) const;

	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		// Declare (and initialize) constants.

		// -----------------------------------------------------
	
		// Declaration of static variables...
		
		// -----------------------------------------------------
	
		// Declaration of instance variables...

		// Index (as an integer) of the element.
		unsigned long long int element_ID;
		
		// -------------------------------------------------------
		
		// Define headers for private functions...
};
#endif

