/**
 * Test/Graph_t package:
 * Submodule of Test package to test classes in the Graph package.
 *
 * directed_graph_node_ut class:
 * Class that tests the directed_graph_node class in the graph package.
 * The constructors and functions of the directed_graph_node class shall be tested.
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

// Import Header files from the other modules of AggieMC.
#include "../../../graph/directed/directed_graph_node.hpp"


// Import appropriate header files from the C++ STL



#ifndef __DIRECTED_GRAPH_UT_H
#define __DIRECTED_GRAPH_UT_H


// ==================================================================

// Shortcut to a set of node_IDs, representing nodes connected to current node.
typedef set<unsigned long long> node_ID_set;
// Shortcut to represent a pointer to the set of node_IDs.
typedef set<unsigned long long>::iterator node_ID_set_p;
/**
 * Shortcut to a pair representing an iterator to the set of
 *	node_IDs and a boolean flag representing the success of a set
 *	operation.
 */
typedef pair<node_ID_set_p, bool> pair_nodeIDsetp_bool;

// ==================================================================

class directed_graph_node_ut {
//	private:
//		string err_msg;

	// --------------------------------------------------------------

	public:
		// Default constructor.
		directed_graph_node_ut();
				
		// ----------------------------------------------------------

		/**
		 * Function to test the constructor and functions of
		 *	directed_graph_node.
		 */
		static void test_directed_graph_node();

		/**
		 * Function to test the constructors of the class
		 *	directed_graph_node.
		 */
		static void test_directed_graph_node_constructor();

		/**
		 * Function to test the accessor and mutator functions regarding
		 *	the node_ID of the class directed_graph_node.
		 */
		static void test_directed_graph_node_node_ID();

		/**
		 * Function to test the accessor and mutator functions regarding
		 *	the outgoing edge list of the class directed_graph_node.
		 */
		static void test_directed_graph_node_outgoing_edges();

		/**
		 * Function to test the accessor and mutator functions regarding
		 *	the incoming edge list of the class directed_graph_node.
		 */
		static void test_directed_graph_node_incoming_edges();

};
#endif
