// Get the header from its corresponding .hpp file.

// Import packages from the software
#include "conversion_alphanumeric.hpp"

// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>

using namespace std;


// ==================================================================

// Define the static variables of the class conversion_alphanumeric.
//bool conversion_alphanumeric::flag = false;

// ==================================================================

// Default constructor.
template<typename T>
conversion_alphanumeric<T>::conversion_alphanumeric() {
	string err_msg = "==u	conversion_alphanumeric shouldn't be instantiated!";
	throw new violated_assertion(err_msg);
}


// Default destructor.
template<typename T>
conversion_alphanumeric<T>::~conversion_alphanumeric() {
	string err_msg = "==u	conversion_alphanumeric destructor is faulty!";
	throw new violated_assertion(err_msg);
}


// -----------------------------------------------------

/**
 * Functions to convert numbers to strings.
 *
 * Categories of numbers are:
 *	=>	integers:
 *		>>	signed integers:
 *				> int
 *				> long long int
 *		>>	unsigned integers:
 *				> unsigned int
 *				> unsigned long long int
 *	=>	floating-point numbers:
 *		>>	double
 *		>>	long double
 */


/**
 * For C++11 (and other C++1y) compliant compilers.
 *
 * The following functions can be used:
 *	string to_string (int val);
 *	string to_string (long val);
 *	string to_string (long long val);
 *	string to_string (unsigned val);
 *	string to_string (unsigned long val);
 *	string to_string (unsigned long long val);
 *	string to_string (float val);
 *	string to_string (double val);
 *	string to_string (long double val);
 *
 * Reference:
 *	\cite[string: to_string]{CplusplusCom2015}
 *	\cite[C library: cfloat]{CplusplusCom2015}
 *
 *
 *
 */


/**
 * Function templates (or template functions) for converting numbers
 *	to strings.
 * This allows a smaller number of functions to be implemented, and
 *	operate on generic types.
 *
 * I am using the terms, "function templates" or "template
 *	functions", synonymously.
 */
 /*
	template<typename T>
	string conversion_alphanumeric<T>::number_to_string_cpp_stl_to_string(T &a_num) {
		return to_string(a_num);
	}
*/
template<typename T>
string conversion_alphanumeric<T>::number_to_string_cpp_stl_to_string(T a_num) {
	return to_string(a_num);
}

// === Signed integers

/**
 * Function to convert a signed integer to a string.
 * @param an_int:	A signed integer to be converted to a string.
 * @return string representation of an_int, the signed integer.
 */
//string conversion_alphanumeric::num_to_str(int an_int) {
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str(int an_int) {
	return to_string(an_int);
}
*/

/**
 * Function to convert a signed integer to a string, using
 *	the stringstream approach.
 * @param an_int:	A signed integer to be converted to a string.
 * @return string representation of an_int, the signed integer.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str_ss(int an_int) {
	return to_string(an_int);
}
*/

/**
 * Function to convert a large signed integer to a string.
 * @param an_int:	A large signed integer to be converted to a
 *					string.
 * @return string representation of an_int, the large signed integer.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str(long long int an_int) {
	return to_string(an_int);
}
*/

/**
 * Function to convert a large signed integer to a string,
 *	using the stringstream approach.
 * @param an_int:	A large signed integer to be converted to a
 *					string.
 * @return string representation of an_int, the large signed integer.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str_ss(long long int an_int) {
	return to_string(an_int);
}
*/

// -------------------------------------------------------------
// === Unsigned integers
/**
 * Function to convert an unsigned integer to a string.
 * @param an_int:	An unsigned integer to be converted to a string.
 * @return string representation of an_int, the unsigned integer.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str(unsigned int an_int) {
	return to_string(an_int);
}
*/

/**
 * Function to convert an unsigned integer to a string, using
 *	the stringstream approach.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str_ss(unsigned int an_int) {
	return to_string(an_int);
}
*/

/**
 * Function to convert a large unsigned integer to a string.
 * @param an_int:	A large unsigned integer to be converted to a
 *					string.
 * @return string representation of an_int, the large unsigned
 *		integer.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::int_to_str(unsigned long long int an_int) {
	return to_string(an_int);
}
*/

// -------------------------------------------------------------
// === Floating-point numbers.
/**
 * Function to convert a floating-point number to a string.
 * @param a_fp_num:	A floating-point number to be converted to a
 *					string.
 * @return string representation of a_fp_num, the floating-point
 *		number.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::floating_pt_to_str(double a_fp_num) {
	return to_string(a_fp_num);
}
*/

		
/**
 * Function to convert a large floating-point number to a
 *	string.
 * @param a_fp_num:	A large floating-point number to be converted
 *					to a string.
 * @return string representation of a_fp_num, the large
 *		floating-point number.
 */
/*
template<typename T>
string conversion_alphanumeric<T>::floating_pt_to_str(long double a_fp_num) {
	return to_string(a_fp_num);
}
*/