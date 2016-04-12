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


using namespace std;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	/**
	 * Sequence of "i" values:
	 *	12.98634
	 *	16.1099859
	 *	19.2336318
	 *	22.3572777
	 */
	for (double i=12.98634; i<23.4567; i=i+3.1236459) {
		cout << "	Value of i:::" << i << endl;
	}
	
	cout << "===========================================" << endl;
	
	/**
	 * Playing with "compound assignments".
	 * Operators for compound assignments: +=, -=, *=, /=, %=, >>=,
	 *	<<=, &=, ^=, |=
	 * Examples:
	 *	value += increase; "is equivalent to" value = value + increase;
	 *	a -= 5; "is equivalent to" a = a - 5;
	 *	a /= b; "is equivalent to" a = a / b;
	 *	price *= units + 1; "is equivalent to" price = price * (units + 1);
	 *
	 *
	 * References:
	 *	\cite[pp. 22-23]{Soulie2007}.
	 */
	int test_int = 23;
	cout << "	test_int is		:::" << test_int << "===" << endl;
	test_int += 7;		// test_int = test_int + 7;
	cout << "	test_int += 7 is	:::" << test_int << "===" << endl;
	/**
	 * "=+" is not an operator used for compound assignment.
	 * "=+ number_i" refers to an assignment, via "=", or a positive
	 *	number named "number_i".
	 */ 
	test_int =+ 4;		// test_int = test_int + 4;
	cout << "	test_int =+ 4 is	:::" << test_int << "===" << endl;
	/**
	 * "=-" is not an operator used for compound assignment.
	 * "=- number_i" refers to an assignment, via "=", or a negative
	 *	number denoted by "-number_i".
	 */ 
	test_int =- 9;		// test_int = test_int - 9;
	cout << "	test_int =- 9 is	:::" << test_int << "===" << endl;
	test_int -= 43;		// test_int = test_int - 43;
	cout << "	test_int -= 43 is	:::" << test_int << "===" << endl;
	
	test_int += 20;
	cout << "	test_int += 20 is	:::" << test_int << "===" << endl;
	test_int =+ -14;	// test_int = -14;
	cout << "	test_int =+ -14 is	:::" << test_int << "===" << endl;
	test_int = +97;		// test_int = 97;
	cout << "	test_int = +97 is	:::" << test_int << "===" << endl;
	
	cout << "===========================================" << endl;
	
	int incre_decre_operations = 47;
	incre_decre_operations++;
	cout << "	incre_decre_operations++:::" << incre_decre_operations;
	cout << "===" << endl;
	++incre_decre_operations;
	cout << "	++incre_decre_operations:::" << incre_decre_operations;
	cout << "===" << endl;
	int temp_num =++incre_decre_operations;
	cout << "	temp_num = ++incre_decre_operations:::" << temp_num;
	cout << "===" << endl;
	cout << "	incre_decre_operations:::" << incre_decre_operations;
	cout << "===" << endl;
	temp_num =incre_decre_operations++;
	cout << "	temp_num = incre_decre_operations++:::" << temp_num;
	cout << "===" << endl;
	cout << "	incre_decre_operations:::" << incre_decre_operations;
	cout << "===" << endl;
	
	
	
	
	
	// End of main function...
	return 0;
}
