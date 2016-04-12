/**
 * This is written by Zhiyang Ong to test ideas about "for loops".
 *
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2014>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person
 *	obtaining a copy of this software and associated documentation
 *	files (the "Software"), to deal in the Software without
 *	restriction, including without limitation the rights to use, copy,
 *	modify, merge, publish, distribute, sublicense, and/or sell copies
 *	of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 *	included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *	DEALINGS IN THE SOFTWARE.
 * 
 * 
 *
 * @author Zhiyang Ong
 *
 */

// Import Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <math.h>
#include <climits>
#include <cfloat>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
// Testing operations with the C++ STL set container.
//#include <set>

// Import packages from the software
//#include "../classes/node.hpp"
//#include "../classes/simple_template.cpp"
#include "../../sandbox/classes/simple_template.hpp"

using namespace std;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed


	/**
	 * Testing a simple temnplate.
	 */
//	cout << "	###" << simple_template::number_to_string<int>(493) << "===" << endl;
//	cout << "	###" << simple_template::is_non_negative<int>(493) << "===" << endl;
//	cout << "	###" << simple_template<int>::is_non_negative<int>(493) << "===" << endl;
//	cout << "	###" << simple_template<int>::is_non_negative<int>(493) << "===" << endl;


	cout << "	###" << simple_template<int>::is_non_negative(493) << "===" << endl;
	simple_template<int> *a_ptr;
	cout << "	###" << a_ptr->square_given_number(5) << "===" << endl;
	// 0.25^2 = 0.0625
	simple_template<long double> *b_ptr;
	cout << "	###" << b_ptr->square_given_number(-0.25) << "===" << endl;
	// 16.25^2 = 164.0625
	cout << "	###" << b_ptr->square_given_number(-16.25) << "===" << endl;

	// Answers are rounded to six significant figures.
	
	// End of main function...
	return 0;
}
