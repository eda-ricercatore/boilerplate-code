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
#include "./element.hpp"

// ==================================================================

// Shortcut to a pair representing an integer and a boolean flag.
//typedef pair<int, bool> pair_int_bool;

// ==================================================================

// Default constructor.
element::element() {
	// Assign private instance variables to NULL.
	element_ID = ULLONG_MAX;
}

// Standard constructors.

/**
 * Standard constructor.
 * @param n_ID:		The ID number of the element.
 * @param n_label:	The label of the element.
 */
element::element(const unsigned long long int &e_ID) {
	// Assign the element ID to be e_ID.
	element_ID = e_ID;
}

// Default destructor.
element::~element() {
	//delete element_ID;
	//delete element_label;
}

// ==================================================================

// Accessor functions.

/**
 * Function to get the ID of the element.
 * @param - None.
 * @return - The ID of this element.
 */
unsigned long long element::get_element_ID() const {
	return element_ID;
	
	//pair_int_bool
}


// ==================================================================

// Mutator functions.

/**
 * Function to set the ID of the element.
 * @param temp_ID:	The ID of the element.
 * @return - Nothing.
 */
void element::set_element_ID(const unsigned long long int &temp_ID) {
	element_ID = temp_ID;
}




















