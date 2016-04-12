/**
 * lamiera-per-caldaie: A library of common data structures and
 *	algorithms, including common data structures and algorithms for
 *	electronic design automation (such as AND-Inverter Graphs and
 *	binary decision diagrams).
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
 * This is a template for elements that would be stored in containers,
 *	or data structures.
 *
 * Since this is a class template of a Type that will be defined,
 *	for functions with arguments of the defined Type or default data
 *	types, do not use function templates.
 * However, functions that have other generic data types, use a
 *	function template.
 * Avoid the use of variadic arguments in my function templates,
 *	so that my code is easier to understand.
 * Inline functions shall be judiciously, since I am trading off
 *	speed for space. Using line functions avoids function calls
 *	by replacing the function call with the actual function.
 *	However, inline functions increase code size significantly.
 * Guidelines for inline functions:
 *	#	Do not use inline function for large functions that are
 *		used frequently.
 *	#	For large functions that are only called a small number
 *		of times, inline functions can be used.
 *	#	For small functions that are called frequently, inline
 *		functions can be used to save time from context switching.
 *	#	Always use inline functions over macros
 *	#	Use inline functions for recursive function calls
 *
 * #### IMPORTANT NOTES:
 * To be completed...
 *
 *
 * Reference:
 *	[Cline 2014] Marshall Cline, "[9.3] Do inline functions improve performance?," in {\it C++ FAQ: Not Just How -- also When and Why!}, July 4, 2012. Available from Section 9.3: http://www.parashift.com/c++-faq/inline-and-perf.html; last accessed on November 6, 2014.
 *	[Cline 2014a] Marshall Cline, "[9.9] With inline member functions that are defined outside the class, is it best to put the inline keyword next to the declaration within the class body, next to the definition outside the class body, or both?," in {\it C++ FAQ: Not Just How -- also When and Why!}, July 4, 2012. Available from Section 9.3: http://www.parashift.com/c++-faq/where-to-put-inline-keyword.html; last accessed on November 6, 2014.
 *
 *
 *
 */


// Import class definitions from different packages in this software.
#include "node.h"

// Use the standard namespace.
using namespace std;

// =========================================================

// Shortcut to container of nodes.
//typedef vector<T> t_vec;
// Shortcut to represent a pointer to the container of strings.
//typedef vector<T>::iterator t_vec_p;

// =========================================================

// Default constructor.
template <class T>
node<T>::node() {
	outgoing_nodes = NULL;
	incoming_nodes = NULL;
}


// --------------------------------------------------------

// Accessor methods.

/**
 * Function to get the list of nodes connected to this node.
 * That is, get the list of incoming nodes.
 * @param - None
 * @return - The list of incoming nodes.
 */
template <class T>
vector<T> node<T>::get_incoming_nodes() {
	return incoming_nodes;
}

/**
 * Function to get the list of nodes connected from this node.
 * That is, get the list of outgoing nodes.
 * @param - None
 * @return - The list of outging nodes.
 */
template <class T>
vector<T> node<T>::get_outgoing_nodes() {
	return outgoing_nodes;
}




// --------------------------------------------------------

// Mutator methods.

/**
 * Function to set the list of nodes connected to this node.
 * That is, set the list of incoming nodes.
 * @param incoming_t_list - The list of incoming nodes.
 * @return - Nothing.
 */
template <class T>
void node<T>::set_incoming_nodes(vector<T> &incoming_t_list) {
	incoming_nodes = incoming_t_list;
}

/**
 * Function to add a node connected to this node.
 * That is, add an incoming node.
 * @param incoming_t_elem - An incoming node.
 * @return - Nothing.
 */
template <class T>
void node<T>::add_incoming_node(T &incoming_t_elem) {
	incoming_nodes.push_back(incoming_t_elem);
}

/**
 * Function to set the list of nodes connected from this node.
 * That is, set the list of outgoing nodes.
 * @param outgoing_t_list - The list of outgoing nodes.
 * @return - Nothing.
 */
template <class T>
void node<T>::set_outgoing_nodes(vector<T> &outgoing_t_list) {
	outgoing_nodes = outgoing_t_list;
}

/**
 * Function to add a node connected from this node.
 * That is, add an outgoing node.
 * @param outgoing_t_elem - An outgoing node.
 * @return - Nothing.
 */
template <class T>
void node<T>::add_outgoing_node(T &outgoing_t_elem) {
	outgoing_nodes.push_back(outgoing_t_elem);
}

