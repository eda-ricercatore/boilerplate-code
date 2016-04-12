/*
	Try solution from \cite{Moses2016} for including the
		implementation file instead of the header file.
*/
#ifndef __DOUBLE_TEMPLATE_H
#define __DOUBLE_TEMPLATE_H

#include <string>
#include <cstring>
#include <stdio.h>
#include <utility>
#include <limits.h>			// For std::LONG_MIN


using namespace std;

template <typename T>
class merged_template {
	public:
		merged_template();
		~merged_template();
		static bool is_non_negative(T a_num);
		T square_given_number(T a_num);
};
#endif



