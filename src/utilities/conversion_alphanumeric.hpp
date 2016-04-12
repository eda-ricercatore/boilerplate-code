/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * conversion_alphanumeric class:
 * Class to convert numbers to strings.
 * The C++ STL provides 2 functions to convert strings to numbers.
 * However, the functions for converting numbers to strings are not
 *	provided by the C++ STL prior to the C++11/C++14 standard.
 * Hence, this class provides some functions for converting numbers
 *	to strings.
 * 
 *
 *
 *
 *
 *
 *
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since January 1, 2016
 *
 *
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2010-2016>	<Zhiyang Ong>
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
 *
 *
 *
 *
 *
 *
 *
 *
 * This Class conversion_alphanumeric allows numbers to be converted
 *	to strings.
 *
 * All the functions in this class are static.
 * This is because I do not want to instantiate any instances of this
 *	class.
 * If I need an instance of this class in another class to convert a
 *	number to a string, I would probably leave a lot of objects
 *	lying around that are not being subjected to any garbage
 *	collection.
 * Hence, to minimize dynamic memory usage, I would prevent the
 *	instantiation of objects of this class.
 *
 *
 * References:
 *	CplusplusCom2015. cplusplus.com, "Reference: C++ Reference," Version 3.1, cplusplus.com, 2015. Available online at: \url{http://www.cplusplus.com/reference/}; November 2, 2015 was the last accessed date.
 *
 * ---------------------------------------------------------------
 *
 * From \cite[C library: cfloat]{CplusplusCom2015}, C++ does not have
 *	fixed-point numbers.
 *
 * Reference:
 *	\cite[C library: cfloat]{CplusplusCom2015}
 *
 * Comments:
 *	For processors without a floating-point unit, fixed-point
 *		computation can be faster and use less memory than
 *		floating-point computation.
 *	While fixed-point computation can be faster and use less memory
 *		than floating-point computation, I would have to implement
 *		fixed-point computation using integers.
 *	My implementation for fixed-point computation may not be that
 *		efficient.
 *	Hence, any theoretical gains of fixed-point computation over
 *		floating-point computation may not be realized in my
 *		implementation.
 *
 *	In C++, I can change the format in which floating-point
 *		numbers are represented.
 *
 *	--------------------------------------------------------------
 *
 *	From \cite[pp. 444-445]{Stephens2006},
 *		Fixed-point numbers (and floating-point) numbers are
 *			approximate representations of real numbers. [pp. 444]
 *		
 *		Floating-point representation/format:
 *			# mantissa (m),
 *			# exponent (e),
 *			# base (b) - constant,
 *			# m^(b)^e. [pp. 444]
 *
 *		Fixed-point representation/format:
 *			# mantissa (m),
 *			# exponent (e) - constant,
 *			# base (b) - constant,
 *			# m^(b)^e. [pp. 444]
 *
 *		When integer representations of fixed-point numbers is
 *			used for arithmetic operations, the performance of
 *			fixed-point arithmetic computation (especially
 *			addition/subtraction) is better than floating-point
 *			computation. [pp. 444]
 *		Comparing fixed-point computation with floating-point
 *			computation, fixed-point computation can only represent
 *			a small range of values. [pp. 444]
 *
 *		To implement the addition/subtraction of fixed-point numbers,
 *			add/subtract the underlying representations.
 *		To implement the multiplication/division of fixed-point
 *			numbers, add/subtract the underlying representations
 *			and shift the mantissa left/right to adjust for the
 *			binary point. [pp. 444]
 *
 *	--------------------------------------------------------------
 *
 *	From [Condron, 2016]
 *		The decimal point for the fixed-point number can be chosen
 *			such that less digits can represent the integer part of
 *			the number and more digits can represent the fractional
 *			part of the number.
 *			This allows the fixed-point number to be highly precise.
 *		The addition, subtraction, and comparison of fixed-point
 *			numbers is simple, due to the alignment of the decimal
 *			points of the fixed-point numbers.
 *		However, the range of numbers that can be represented by
 *			fixed-point numbers is (much) smaller than the range
 *			of numbers that can be represented by floating-point
 *			numbers.
 *		Under division, the fixed-point number system "is not
 *			necessarily closed."
 *			Given two fixed-point numbers a and b, c = a/b is not
 *			a valid fixed-point number.
 *			Consequences of this are overflow and underflow
 *			conditions.
 *
 *	Reference:
 *		Michael Condron, "Floating Point Arithmetic," in {\it High-Precision Deep Zoom -- Fractal Animations and Images: Technical Info}. Available online at: \url{http://www.hpdz.net/TechInfo/FloatingPoint.htm}; last accessed on February 2, 2016.
 *
 *	--------------------------------------------------------------
 *
 *	From [Alamia, 20XY]
 *		Algorithms for fixed-point computation are provided, along
 *			with the advantage and disadvantage of fixed-point
 *			numbers are discussed.
 *		An advantage of fixed-point numbers is: high-precision
 *			numbers for a given position for the decimal point.
 *		A disadvantage is the small range of numbers that can be
 *			represented as a fixed-point number compared to the
 *			large range of numbers that can be represented as a
 *			floating-point number.
 *
 *	Reference:
 *		Marco Alamia, "Floating Point -- Theory and Practice," from the web page of {\it Coding Labs: Articles}. Available online at: \url{http://www.codinglabs.net/article_floating_point_numbers.aspx}; last accessed on February 2, 2016. The date/year of publication is unknown.
 *
 *	--------------------------------------------------------------
 *
 *	From \cite{DSPRelated.comContributors2016}
 *		See \cite[in Free Books: Mathematics of the DFT: Binary Integer Fixed-Point Numbers]{DSPRelated.comContributors2016} and \cite[in Free Books: Mathematics of the DFT: Fractional Binary Fixed-Point Numbers]{DSPRelated.comContributors2016}.
 *		It describes how fixed-point numbers are represented.
 *
 *	--------------------------------------------------------------
 *
 *	From [Guntheroth, 2005]
 *		Floating-point arithmetic is (much) slower than
 *			integer-based arithmetic.
 *		However, fixed-point arithmetic is faster than floating-point
 *			arithmetic.
 *		This reference provides a description of template design
 *			of C++ -based fixed-point arithmetic (including the
 *			fixed-point data type).
 *
 *	Reference:
 *		Kurt Guntheroth, "Fixed-Point Arithmetic Types for C++," from {\it Dr. Dobb's: {C/C++}: {C/C++} Feature Articles}, UBM Tech, San Francisco, CA, August 1, 2005. Available online at: \url{http://www.drdobbs.com/cpp/fixed-point-arithmetic-types-for-c/184401992}; February 3, 2016 was the last accessed date.
 *
 *	--------------------------------------------------------------
 *
 *	From [Crowl, 2015]
 *		"C++ supports integer arithmetic and floating-point
 *			arithmetic, but it does not support fixed-point
 *			arithmetic."
 *		"We propose support for fixed-point arithmetic via standard
 *			library facilities."
 *
 *
 *	References:
 *		Lawrence Crowl, "{C++} Binary Fixed-Point Arithmetic," from {\it Open Standards (International Organization for Standardization, ISO, and International Electrotechnical Commission, IEC): Joint {ISO/IEC} Technical Committee 1 ({JTC 1}): {JTC 1} Subcommittee 22 -- ``The Portability Subcommittee'' ({ISO/ IEC JTC1/SC22}): {JTC1/SC22/WG21 -- The C++ Standards Committee -- {ISOCPP}} working group: {C++} Standards Committee Papers}, Number P0106R0, International Organization for Standardization and International Electrotechnical Commission, Gen{\`{e}}va, Switzerland, September 27, 2015. Available online at: \url{http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0106r0.html}; hosted by Technical University of Denmark, Lyngby, Denmark; and February 5, 2016 was the last accessed date.
 *
 *		Lawrence Crowl, "{C++} Binary Fixed-Point Arithmetic," from {\it Open Standards (International Organization for Standardization, ISO, and International Electrotechnical Commission, IEC): Joint {ISO/IEC} Technical Committee 1 ({JTC 1}): {JTC 1} Subcommittee 22 -- ``The Portability Subcommittee'' ({ISO/ IEC JTC1/SC22}): {JTC1/SC22/WG21 -- The C++ Standards Committee -- {ISOCPP}} working group: {C++} Standards Committee Papers}, Number N3352, International Organization for Standardization and International Electrotechnical Commission, Gen{\`{e}}va, Switzerland, January 15, 2012. Available online at: \url{http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3352.html}; hosted by Technical University of Denmark, Lyngby, Denmark; and February 5, 2016 was the last accessed date.
 *
 *	--------------------------------------------------------------
 *
 * Notes:
 * #	I am using the terms, "function templates" or "template 
 *			functions", synonymously.
 *
 * #	[Mar 25, 2015]
 *			I am refactoring the class to enable each technique for
 *			implementing the conversion from numbers to strings to
 *			accept parameters of the following types: int,
 *			long long int, unsigned int, unsigned long long int,
 *			double, and long double.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */


// Import packages from the software
#include "violated_assertion.hpp"
#include "violated_precondition.hpp"


// Import packages from the C++ STL
#include <iostream>
#include <string>
#include <cstring>

#ifndef __CONVERSION_ALPHANUMERIC_H
#define __CONVERSION_ALPHANUMERIC_H
using namespace std;

// =========================================================


// Class definition of the conversion_alphanumeric class
//template<class T>
template<typename T>
class conversion_alphanumeric {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor
		conversion_alphanumeric();
		// Default destructor.
		~conversion_alphanumeric();

		// -----------------------------------------------------
		
		// Define headers for functions to convert numbers to strings.

		/**
		 * Function templates (or template functions) for converting
		 *	numbers to strings.
		 * This allows a smaller number of functions to be
		 *	implemented, and operate on generic types.
		 *
		 * I am using the terms, "function templates" or "template
		 *	functions", synonymously.
		 */
		
		/**
		 * Function to use the to_string() function from the C++11
		 *	STL to convert numbers to strings, for the specified,
		 *	or aforementioned, data types.
		 */
		static string number_to_string_cpp_stl_to_string(T a_num);


		// -----------------------------------------------------
	
		// === Signed integers.
		
		// Function to convert a signed integer to a string.
//		static string int_to_str(int an_int);
		/**
		 * Function to convert a signed integer to a string, using
		 *	the stringstream approach.
		 */
//		static string int_to_str_ss(int an_int);
		
		// Function to convert a large signed integer to a string.
//		static string int_to_str(long long int an_int);
		/**
		 * Function to convert a large signed integer to a string,
		 *	using the stringstream approach.
		 */
//		static string int_to_str_ss(long long int an_int);
		
		// -----------------------------------------------------
		// === Unsigned integers.
		
		// Function to convert an unsigned integer to a string.
//		static string int_to_str(unsigned int an_int);
		/**
		 * Function to convert an unsigned integer to a string, using
		 *	the stringstream approach.
		 */
//		static string int_to_str_ss(unsigned int an_int);
		
		// Function to convert a large unsigned integer to a string.
//		static string int_to_str(unsigned long long int an_int);
		/**
		 * Function to convert a large unsigned integer to a string,
		 *	using the stringstream approach.
		 */
//		static string int_to_str_ss(unsigned long long int an_int);

		// -----------------------------------------------------
		// === Floating-point numbers.
		
		// Function to convert a floating-point number to a string.
//		static string floating_pt_to_str(double a_fp_num);
		/**
		 * Function to convert a floating-point number to a string,
		 *	using the stringstream approach.
		 */
//		static string floating_pt_to_str_ss(double a_fp_num);
		
		/**
		 * Function to convert a large floating-point number to a
		 *	string.
		 */
//		static string floating_pt_to_str(long double a_fp_num);
		/**
		 * Function to convert a large floating-point number to a
		 *	string, using the stringstream approach.
		 */
//		static string floating_pt_to_str_ss(long double a_fp_num);

	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		// Declaration of static variables...
		
		// Boolean FLAG.
//		static bool flag;
	
		// -------------------------------------------------------
		
		// Define headers for private functions...

};
#endif