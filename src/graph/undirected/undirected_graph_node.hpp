/**
 * Graph package:
 * Module to implement graphs and networks in AggieMC.
 *
 * directed_graph_node class:
 * Class to represent basic directed graph operations/functions.
 *
 * IMPORTANT NOTES:
 * Assume that the ID of each node is unique for all the nodes in
 *	the graph.
 * The terms "node" and "vertex", of a graph, are used synonymously
 *	in our software AggieMC.
 * Enable support of multigraphs and hypergraphs.
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
#include <set>

#ifndef __DIRECTED_GRAPH_NODE_H
#define __DIRECTED_GRAPH_NODE_H
using namespace std;

// =========================================================

// Shortcut to container of directed edges in directed graphs.
//typedef vector<pair<directed_graph_node,bool>> node_vec;
// Shortcut to represent a pointer to the container of strings.
//typedef vector<pair<directed_graph_node,bool>>::iterator node_vec_p;
// Shortcut to container of node IDs.
//typedef vector<unsigned long long> set_of_node_IDs;

// =========================================================

// Class definition of the directed_graph_node class
class directed_graph_node {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor.
		directed_graph_node();
		// Standard constructors.
		directed_graph_node(unsigned long long node_id_num);
		// Default destructor.
		~directed_graph_node();

		// -----------------------------------------------------
		
		// Define enums for the AggieMC.
		
		/**
		 * Type of the logic cell (i.e., logic gate) that is used
		 *	in the AIG.
		 */
/*
		enum cell_type {
			AND_CONJUNCTION,
			INVERTER
		};
*/
		
		// -----------------------------------------------------
		
		// Define headers for functions...
	
		// Accessor functions.
		
		/**
		 * Function to get the incoming edges from this node.
		 */
//		set<pair<unsigned long long,bool> > get_incoming_edges();
		set<unsigned long long> get_incoming_edges();
		/**
		 * Function to get the outgoing edges from this node.
		 */
//		set<pair<unsigned long long,bool> > get_outgoing_edges();
		set<unsigned long long> get_outgoing_edges();		
		// Function to get the ID of the node.
		unsigned long long get_node_ID();

		// -----------------------------------------------------

		// Mutator functions.
		
		// Function to set the ID of the node.
		void set_node_ID(const unsigned long long &temp_ID);
		
		/**
		 * Function to add a set of incoming edges to the current
		 *	set of incoming edges.
		 */
//		void add_set_of_incoming_edges(const set<pair<unsigned long long,bool> > &set_incoming_links);
		void add_set_of_incoming_edges(const set<unsigned long long> &set_incoming_links);
		/**
		 * Function to add a set of outgoing edges to the current
		 *	set of outgoing edges.
		 */
//		void add_set_of_outgoing_edges(const set<pair<unsigned long long,bool> > &set_outgoing_links);
		void add_set_of_outgoing_edges(const set<unsigned long long> &set_outgoing_links);
		/**
		 * Function to add an incoming edge to the current set of
		 *	incoming edges.
		 */
		void add_incoming_edge(const unsigned long long &src_node_ID);
		/**
		 * Function to add an outgoing edge to the current set of
		 *	outgoing edges.
		 */
		void add_outgoing_edge(const unsigned long long &destn_node_ID);
		/**
		 * Function to remove an incoming edge to the current set of
		 *	incoming edges.
		 */
		void remove_incoming_edge(const unsigned long long &node_ID_removal);
		/**
		 * Function to remove an outgoing edge to the current set of
		 *	outgoing edges.
		 */
		void remove_outgoing_edge(const unsigned long long &node_ID_removal);
		

	// =========================================================
	
	// Privately accessible data members and functions.
	
	private:
		// Declare (and initialize) constants.
		
		// Types of file formats.
/*
		static const string VERILOG;
		static const string SPEF_IP;
		static const string SDC_IP;
		static const string IP_CELL_LIB;
		static const string TIMING;
		static const string SIZES;
		static const string INT_SIZES;
		static const string INTGR;
		static const string PERIOD;
		static const string SLASH;
		static const string TEXT;
*/
		// -----------------------------------------------------
	
		// Declaration of static variables...

		// Flag to indicate that the software is in logging mode
//		static bool is_logging;
		
		// -----------------------------------------------------
	
		// Declaration of instance variables...
		
		// Boolean function of the node
//		bool logic_function;
		// Index (as an integer) of the node.
		unsigned long long node_ID;
		// Vector of outgoing edges: pair(destination node, inverter flag).
//		set<pair<unsigned long long,bool> > outgoing_edges;
		set<unsigned long long> outgoing_edges;
		// Vector of incoming edges: pair(source node, inverter flag).
//		set<pair<unsigned long long,bool> > incoming_edges;
		set<unsigned long long> incoming_edges;
		
		
		// -------------------------------------------------------
		
		// Define headers for private functions...
		
};
#endif
