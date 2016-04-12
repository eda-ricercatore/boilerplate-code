/**
 * This is written by Zhiyang Ong to test how to return a
 *	function call.
 *
 * This is to experiment with returning a function call using
 *	different control structures.
 *
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since September 15, 2015
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




// Import Header files from the C++ STL.
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
#include <utility>

// Import packages from the software.



// Use the standard C++ namespace.
using namespace std;

// ===============================================================

// Declaring function prototypes.
bool how_to_return(int i);

// ===============================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	cout<<"============================================="<<endl;

	cout << "==>	Test how a function can return a value.";
	cout << endl;

	if(!how_to_return(-35)) {
		cout << "-35 returns false" << endl;
	}
	
	if(!how_to_return(2)) {
		cout << "2 returns false" << endl;
	}
	
	if(!how_to_return(798)) {
		cout << "798 returns false" << endl;
	}
	
	if(how_to_return(49)) {
		cout << "49 returns true" << endl;
	}
	
	
	
	
	
	

	
	
	
	cout<<"============================================="<<endl;
	// End of main function...
	return 0;
}

// ===============================================================

/**
 * Function to 
 * @param i		Input to determine which function call return is
 *					used.
 * @return true, if . Else, return false.
 */
bool how_to_return(int i) {
	if(i > 5) {
		if (i > 50) {
			return false;
		}else{
			return true;
		}
	}else{
		return false;
	}
}