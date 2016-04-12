/**
 * This is written by Zhiyang Ong to test ideas about null pointers.
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

#include <vector>


using namespace std;

// =======================================================================

// Shortcut to container of int.
typedef vector<int> int_vec;
// Shortcut to represent a pointer to the container of int.
typedef vector<int>::iterator int_vec_p;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	unsigned long long temp_int;
	temp_int = NULL;
	cout << "temp_int is::" << temp_int << "==" << endl;

	if (NULL == temp_int) {
		cout << "temp_int is NULL." << endl;
	}else{
		cout << "temp_int is not NULL." << endl;
	}
	
	
	// Create two vectors of integers.
	int_vec a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	a.push_back(7);
	a.push_back(8);
	a.push_back(9);
	a.push_back(21);
	a.push_back(22);
	a.push_back(23);
	a.push_back(24);
	a.push_back(25);
	a.push_back(26);
	a.push_back(15);
	a.push_back(25);
	a.push_back(35);
	a.push_back(45);
	int_vec b;
	b.push_back(68);
	b.push_back(57);
	b.push_back(46);
	b.push_back(35);
	
	// Iterator for enumerating elements of a container.
	int_vec_p vp;
	
	// Create a vector by merging the two aforementioned vectors.
	//a.insert(a.end(),b);
	a.insert(a.end(),b.begin(), b.end());
	
	// Iterate the vectors to display its contents.
	for(vp = a.begin(); vp<a.end(); vp++) {
		cout << (*vp) << "=";
	}
	cout << endl;
	
	for(vp = b.begin(); vp<b.end(); vp++) {
		cout << (*vp) << "=";
	}
	cout << endl;
	
	
	// End of main function...
	return 0;
}
