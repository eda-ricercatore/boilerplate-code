/**
 * Graph package:
 * Module to implement graphs and networks.
 *
 * directed_graph_node class:
 * Class to represent node of basic directed graph.
 *
 * IMPORTANT NOTES:
 * This is for an adjacency list implementation of a graph.
 * Assume that the ID of each node is unique for all the nodes in
 *	the graph.
 * Hence, the node ID can be used to identify a given node.
 * The terms "node" and "vertex", of a graph, are used synonymously
 *	in our software AggieMC.
 * Enable support of multigraphs and hypergraphs.
 * Other boolean comparisons can be implemented by overloading the
 *	operator child class.
 * Definition of the class directed_graph_node depends on the
 *	definition of the class directed_graph_edge.
 * The C++ STL set container is used to prevent duplicates of a
 *	given edge, while allowing multiple edges to connect any pair
 *	of nodes as long as each edge has a unique edge ID.
 * Therefore, for multiple edges connecting a pair of edges, they
 *	must each have a unique edge ID. Each edge connecting a given
 *	pair of nodes, *v_1* and *v_2*, must have a unique edge ID.
 * An immediate neighbor is a node that is connected to this node
 *	by an incident edge (i.e., outgoing/incoming edge).
 * Note that the node ID of this node is constant.
 * Once a node ID has been set, it cannot be modified.
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

// Import packages from the C++ STL
#include <string>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <map>
#include <utility>
#include <limits.h>			// For std::LONG_MIN
#include <set>

// Import packages from the software
//	Importing from the Utility module.
/*
#include "../../utilities/printer.hpp"
#include "../../utilities/violated_assertion.hpp"
#include "../../utilities/violated_precondition.hpp"
#include "../../utilities/violated_postcondition.hpp"
*/
#include "/Applications/apps/others/comune/lamiera-per-caldaie/src/utilities/printer.hpp"
#include "/Applications/apps/others/comune/lamiera-per-caldaie/src/utilities/violated_assertion.hpp"
#include "/Applications/apps/others/comune/lamiera-per-caldaie/src/utilities/violated_precondition.hpp"
#include "/Applications/apps/others/comune/lamiera-per-caldaie/src/utilities/violated_postcondition.hpp"

/*
#include "./utilities/printer.hpp"
#include "./utilities/violated_assertion.hpp"
#include "./utilities/violated_precondition.hpp"
#include "./utilities/violated_postcondition.hpp"
*/
/*
#include "printer.hpp"
#include "violated_assertion.hpp"
#include "violated_precondition.hpp"
#include "violated_postcondition.hpp"
*/

//	Importing from the Graph/Directed module
//#include "directed_graph_edge.hpp"

#ifndef __DIRECTED_GRAPH_NODE_H
#define __DIRECTED_GRAPH_NODE_H
using namespace std;

// =========================================================

// Shortcut to container of directed_graph_edge pointers.
//typedef set<directed_graph_edge*> dg_edge_set;
/**
 * Shortcut to represent an iterator to the container of
 *	directed_graph_edge pointers.
 */
//typedef set<directed_graph_edge*>::iterator dg_edge_set_p;
/**
 * Shortcut to a pair representing an iterator to the
 *	container of directed_graph_edge pointers and a boolean
 *	flag representing the success of a set operation.
 */
//typedef pair<dg_edge_set, bool> pair_dgedgesetp_bool;



// Shortcut to container of directed_graph_node pointers.
typedef set<directed_graph_node*> dg_node_set;
/**
 * Shortcut to represent an iterator to the container of
 *	directed_graph_node pointers.
 */
typedef set<directed_graph_node*>::iterator dg_node_set_p;
/**
 * Shortcut to a pair representing an iterator to the
 *	container of directed_graph_node pointers and a boolean
 *	flag representing the success of a set operation.
 */
typedef pair<dg_node_set, bool> pair_dgnodesetp_bool;


// =========================================================

// Class definition of the directed_graph_node class
class directed_graph_node {
	// Publicly accessible data members, constructors, and functions
	public:
		// Default constructor.
		directed_graph_node();
		// Standard constructors.
		directed_graph_node(unsigned long long int node_id_num);
		// Default destructor.
		~directed_graph_node();

		// -----------------------------------------------------
		
		// Define enums for the software.
		
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
		
		// Function to get the destination nodes from this node.
		dg_node_set get_destination_nodes();
		// Function to get source nodes for this node.
		dg_node_set get_source_nodes();
		/**
		 * Function to get neighboring nodes (or "incident nodes").
		 * This effectively determines the incident edges of this
		 *	node, by performing a union operation on the set of
		 *	destination and source nodes.
		 */
		dg_node_set get_neighboring_nodes();
		// Function to determine if node v is a neighbor of this node.
		bool is_adjacent_to(const directed_graph_node &v);
		// Function to get the ID of the node.
		unsigned long long int get_node_ID();

		// -----------------------------------------------------

		// Mutator functions.
		
		// Function to set the ID of the node.
		void set_node_ID(const unsigned long long int &temp_ID);
		
		/**
		 * Function to add a set of source nodes to the current
		 *	set of source nodes.
		 * Effectively, I am adding an incoming edge.
		 */
		void add_set_of_incoming_edges(const dg_node_set &set_incoming_edges);
		/**
		 * Function to add a set of destination nodes to the current
		 *	set of destination nodes.
		 * Effectively, I am adding an outgoing edge.
		 */
		void add_set_of_destination_nodes(const dg_node_set &set_destination_nodes);
		/**
		 * Function to add an incoming edge to the current set of
		 *	incoming edges.
		 */
		void add_incoming_edge(const directed_graph_edge &incoming_link);
		/**
		 * Function to add an outgoing edge to the current set of
		 *	outgoing edges.
		 */
		void add_outgoing_edge(const directed_graph_edge &outgoing_link);
		/**
		 * Functions to remove an incoming edge to the current set of
		 *	incoming edges.
		 */
		void remove_incoming_edge(const unsigned long long int &node_ID_removal);
		void remove_incoming_edge(const directed_graph_edge &directed_graph_edge_rm);
		/**
		 * Functions to remove an outgoing edge to the current set of
		 *	outgoing edges.
		 */
		void remove_outgoing_edge(const unsigned long long int &node_ID_removal);
		void remove_outgoing_edge(const directed_graph_edge &directed_graph_edge_rm);
		

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
		unsigned long long int node_ID;
		// Set of destination nodes.
		dg_node_set destination_nodes;
		// Set of source nodes.
		dg_node_set source_nodes;
		
		
		// -------------------------------------------------------
		
		// Define headers for private functions...
		
};
#endif
