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
 * References:
 * [Tang2001]	Hannah C. Tang, "C++ Templates," University of Washington, Seattle, WA, October 9, 2001. Available online from the course web page of CSE 326 Data Structures (Autumn 2001): Computing Information: Templates -- About C++ templates, Computer Science & Engineering Department, UW College of Engineering, University of Washington} at: https://courses.cs.washington.edu/courses/cse326/01au/computing/c++-templates.html; March 16, 2016 was the last accessed date.


 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
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
#include "./simple_template.hpp"

// ==================================================================

// Default constructor.
template <typename T>
simple_template<T>::simple_template() {
	//	Do nothing.
}


template <typename T>
simple_template<T>::~simple_template() {
	// Delete instances of instance variables;
}

// ==================================================================

// Accessor functions.

/**
 * Function to convert a number to a string.
 * @param anum	A number to be converted to a string.
 * @return - The string representing the number a_num.
 */
/*
template<typename T>
string simple_template::number_to_string(T a_num) {
	return to_string(a_num);
}

template<typename T>
T simple_template::number_to_string(T a_num) {
	return a_num;
}
*/




/**
 * Function to convert a number to a string.
 * @param anum	A number to be converted to a string.
 * @return - The string representing the number a_num.
 */
template<typename T>
bool simple_template<T>::is_non_negative(T a_num) {
	return (0 <= a_num);
}



/**
 * Function to square a number.
 * A number can be squared by multiplying it by itself.
 * @param anum	A number to be squared.
 * @return - The square of the number a_num.
 */
/*
template<typename T>
int simple_template<T>::square_given_number(T a_num) {
	return (a_num*a_num);
}
*/
template<typename T>
T simple_template<T>::square_given_number(T a_num) {
	return (a_num*a_num);
}









// Testing a simple template function.