/**
 * This is written by Zhiyang Ong to test ideas about data types.
 * Reference:
 *	http://www.cplusplus.com/doc/tutorial/variables/
 *	http://www.cplusplus.com/reference/climits/
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



using namespace std;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	unsigned long long a = 123456789;
	unsigned long long int b = 123456789;
	cout << "a is::" << a << "==" << endl;
	cout << "b is::" << b << "==" << endl;

	if (a == b) {
		cout << "a == b." << endl;
	}else{
		cout << "a and b are different." << endl;
	}
	
	/**
	 * The following will cause a compiler warning/error.
	 *
	 * unsigned long long c = 123456789.9178;
	 */

	/**
	 * Be careful with assigning negative numbers to the
	 *	data type "unsigned long long".
	 * It will result in a subtraction from ULLONG_MAX.
	 *
	 * E.g., unsigned long long my_number = -100;
	 *		my_number = ULLONG_MAX - 100;
	 */
	unsigned long long c = -123456789;
	cout << "c is		::" << c << "==" << endl;
	c = -100;
	cout << "modified c is	::" << c << "==" << endl;
	cout << "ULLONG_MAX is	::" << ULLONG_MAX << "==" << endl;
	
	// For computation with large real numbers.
	long double d = 123456789.9178;
	cout << "d is		::" << d << "==" << endl;
	
	// End of main function...
	return 0;
}
