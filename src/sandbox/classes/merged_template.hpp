// Implement solution from \cite{Benoit2009}. It works.

#ifndef __MERGED_TEMPLATE_H
#define __MERGED_TEMPLATE_H

#include <string>
#include <cstring>
#include <stdio.h>
#include <utility>
#include <limits.h>			// For std::LONG_MIN


using namespace std;

template <typename T>
class merged_template {
	public:
		merged_template() {
		}
		~merged_template() {
		}
		static bool is_non_negative(T a_num) {
			return (0 <= a_num);
		}
		T square_given_number(T a_num) {
			return (a_num*a_num);
		}
};
#endif

