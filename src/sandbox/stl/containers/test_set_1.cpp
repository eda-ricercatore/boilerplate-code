/**
 * This is written by Zhiyang Ong to test ideas about the C++ STL set
 *	container.
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
#include <set>
#include <utility>

// Import packages from the software
//#include "../../classes/node.hpp"


using namespace std;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	// --------------------------------------------------------------
	
	// Iterator for a set of integers.
	set<int>::iterator it;
		
	// Create sets of integers.
//	set<int> nset1;

	// Set #1
	set<int> nset1 = {10, 29, 38, 47, 56, 64, 73, 82, 91};
	cout << "	Size of nset1:::" << nset1.size() << "===" << endl;
	
	// Set #2
	set<int> nset2 = {11, 22, 33, 44, 55, 66, 77, 88, 99, 191, 282, 373, 464, 595, 616, 727, 838, 949};
	cout << "	Size of nset2:::" << nset2.size() << "===" << endl;
	
	// Copy set#2 to set#3.
	set<int> nset3(nset2);
	// Add set#1 to set#3.
	pair<set<int>::iterator, bool> result;
// This statement does not work. It causes compilation errors.
//	pair<set<int>::iterator, bool> result = nset3.insert(nset1,nset1.size());

// These statements do not work. They cause compilation errors.
//nset3.insert(nset1,nset1.size());
//nset3.insert(nset1);
//result = nset3.insert(nset1.begin(),nset1.end());






	// --------------------------------------------------------------
	
	// Testing set operations...
	
	/**
	 * Merge Set#1 with Set#3.
	 * Perform a union operation on set#1 and set#3.
	 */
	nset3.insert(nset1.begin(),nset1.end());
/*
	if(result.second) {
		cout << "	Set#3 has been added to Set#1." << endl;
	}
*/
	cout << "	Size of nset3:::" << nset3.size() << "===" << endl;
	
	// --------------------------------------------------------------
	
	// Iterate each of the sets.
	
	// Enumerate set #1
	for(it=nset1.begin(); it != nset1.end(); it++) {
		cout << *it << "-";
	}
	cout << endl;
	
	// Enumerate set #2
	for(it=nset2.begin(); it != nset2.end(); it++) {
		cout << *it << "-";
	}
	cout << endl;
	
	// Enumerate set #3
	for(it=nset3.begin(); it != nset3.end(); it++) {
		cout << *it << "-";
	}
	cout << endl;
	
	// End of main function...
	return 0;
}
