/**
 * Define the node object.
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since March 1, 2015
 *
 *
 *
 *
 *
 *
 * References:
 * programmersmind, "An Introduction For How to Insert your Own Custom Objects Inside a std:::set", in CodeProject: Articles: Languages: C/C++ Language: General, Toronto, Ontario, Canada, May 6, 2009. Available at: http://www.codeproject.com/Articles/36232/An-Introduction-For-How-to-Insert-your-Own-Custom; last viewed on April 24, 2015.
 *
 *
 *
 *
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

// Import packages from the software
#include "../utilities/printer.hpp"
#include "../utilities/violated_assertion.hpp"
#include "../utilities/violated_precondition.hpp"
#include "../utilities/violated_postcondition.hpp"

// Import packages from the C++ STL
#include <string>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <map>
#include <utility>
#include <limits.h>			// For std::LONG_MIN


#ifndef __NODE_H
#define __NODE_H
using namespace std;

// =========================================================

// Class definition of the node class
class node {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor.
		node();
		// Standard constructors.
		node(const unsigned long long &n_ID, const string &n_label);
		// Default destructor.
		~node();

		// -----------------------------------------------------
		
		// Define headers for functions...

		// Accessor functions.

		// Function to get the ID of this node.
		unsigned long long get_node_ID() const;
		
		// Function to get the label of this node.
		string get_node_label() const;
		
		// Function to print details of the object.
		void print_node() const;

		// -----------------------------------------------------

		// Mutator functions.
		
		// Function to set the ID of the node.
		void set_node_ID(const unsigned long long &temp_ID);
//		void set_node_ID(unsigned long long &temp_ID);
		
		// Function to set the label of the node
		void set_node_label(const string &temp_label);
		
		// -----------------------------------------------------
		
		// Operator overloading.
		
		// Overload the "<" operator for 1 input node.
		bool operator<(const node &cmp) const;
//		bool operator<(const node &cmp);
		// Overload the "<" operator for 2 input nodes.
		bool operator() (const node& n1, const node& n2) const;
//		bool operator() (const node& n1, const node& n2);

	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		// Declare (and initialize) constants.

		// -----------------------------------------------------
	
		// Declaration of static variables...
		
		// -----------------------------------------------------
	
		// Declaration of instance variables...

		// Index (as an integer) of the node.
		unsigned long long node_ID;
		
		// Label (as a string) of the node.
		string node_label;

		// -------------------------------------------------------
		
		// Define headers for private functions...
};
#endif

