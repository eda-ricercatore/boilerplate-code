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

/*
	The following list of include statements test different
		implementations of a C++ template.
		Implemented with C++ template definition and implementation
			in one file, where the definition and implementation are
			clearly separated/distinguished/demarcated.
			The implementation is appended to the end of the
			definition, with some white space to separate them.
		Implemented with merged C++ template definition and
			implementation in one file.
		Implemented with C++ template definition and implementation
			separately in different files: a C++ header file and a
			C++ implementation file. Any file that uses this C++
			template will have to import the C++ implementation file,
			instead of the C++ header file.
*/
#include "../classes/trivial_template.hpp"
//#include "../classes/merged_template.hpp"
//#include "../classes/double_template.cpp"

using namespace std;

int main(int argc, char *argv[]) {
	cout << "	###" << trivial_template<int>::is_non_negative(493) << "===" << endl;
	trivial_template<int> *a_ptr;
	cout << "	###" << a_ptr->square_given_number(5) << "===" << endl;
	// 0.25^2 = 0.0625
	trivial_template<long double> *b_ptr;
	cout << "	###" << b_ptr->square_given_number(-0.25) << "===" << endl;
	// 16.25^2 = 164.0625
	cout << "	###" << b_ptr->square_given_number(-16.25) << "===" << endl;
	return 0;
}
