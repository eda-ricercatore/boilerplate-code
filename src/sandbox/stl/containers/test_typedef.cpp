/**
 * Test the element object.
 *
 * To determine if typedef statements in the header file need
 *	to be redefined in the C++ implementation file.
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



// set_emplace.cpp
// Import Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <math.h>
#include <climits>
#include <cfloat>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

//#include <set>
#include <utility>

// Import packages from the software
#include "../../classes/element.hpp"


using namespace std;

// =======================================================================

// Shortcut to a pair representing an integer and a boolean flag.
//typedef pair<int, bool> pair_int_bool;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	cout << "==>	Test if typedef statements need to be replicated." << endl;

	pair_int_bool one_pair = make_pair(192,false);
	pair_int_bool another_pair = make_pair(837,true);
	
	if(one_pair.second) {
		cout << "		Something Is Wrong!!!" << endl;
	}else{
		cout << "		(192,false) is the pair." << endl;
		cout << "		First==" << one_pair.first << "==" << endl;
		cout << "		Second==" << one_pair.second << "==" << endl;
	}

	if(another_pair.second) {
		cout << "		(837,true) is the pair." << endl;
		cout << "		First==" << another_pair.first << "==" << endl;
		cout << "		Second==" << another_pair.second << "==" << endl;
	}else{
		cout << "		Something Is Really, Really Wrong!!!" << endl;
		
	}



	cout << "==>	End Test." << endl;
	
	// End of main function...
	return 0;
}
