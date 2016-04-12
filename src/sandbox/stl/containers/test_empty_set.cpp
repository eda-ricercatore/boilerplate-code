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
// Testing operations with the C++ STL set container.
#include <set>

// Import packages from the software
#include "../../classes/node.hpp"


using namespace std;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	unsigned long long *temp_int;
	temp_int = NULL;
	cout << "temp_int is::" << temp_int << "==" << endl;

	if (NULL == temp_int) {
		cout << "temp_int is NULL." << endl;
	}
	
	// --------------------------------------------------------------
	
	// Test the size of empty set
	set<node> nset1;
	cout << "	Size of nset1:::" << nset1.size() << "===" << endl;
	
	/**
	 * nset1 = NULL;
	 *
	 * The above statement would cause compilation of this program
	 *	to fail.
	 * I cannot assign an empty set to NULL.
	 */
	
	node temp_node;
	temp_node.set_node_ID(109);
	temp_node.set_node_label("america");
	pair<set<node>::iterator, bool> set_op_flag = nset1.insert(temp_node);
	if(set_op_flag.second) {
		cout << "	= Insertion operation passed." << endl;
	}else{
		cout << "	= Insertion operation failed." << endl;
	}
	
	
	// End of main function...
	return 0;
}
