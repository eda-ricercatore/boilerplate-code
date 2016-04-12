/**
 * Graph package:
 * Module to implement graphs and networks.
 *
 * directed_graph_edge class:
 * Class to represent an edge of a basic directed graph.
 *
 * IMPORTANT NOTES:
 * This is for an adjacency list implementation of a graph.
 * Assume that the ID of each edge is unique for all the edges in
 *	the graph.
 * Hence, the edge ID can be used to identify a given edge.
 *	This enables the distinction between edges connecting the same
 *		pair/set of nodes.
 * The terms "node" and "vertex", of a graph, are used synonymously.
 * Enable support of multigraphs and hypergraphs.
 * Other boolean comparisons can be implemented by overloading the
 *	operator child class.
 * Definition of the class directed_graph_edge depends on the
 *	definition of the class directed_graph_node.
 *
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
#include "directed_graph_edge.hpp"


// ==================================================================

// Default constructor.
directed_graph_node::directed_graph_node() {
	// Assign private instance variables to NULL.
	node_ID = ULLONG_MAX;
/*
	outgoing_edges = NULL;
	incoming_edges = NULL;
*/

/*
	string err_msg = "Default constructor should not be used!!!";
	throw new violated_assertion(err_msg);
*/
}

// Standard constructors.

/**
 * Standard constructor.
 * @param node_id_num:	The ID number of the node.
 */
directed_graph_node::directed_graph_node(unsigned long long node_id_num) {
	// Assign the Node ID to be node_id_num.
	node_ID = node_id_num;
	// Assign other private instance variables to NULL.
/*	
	outgoing_edges = NULL;
	incoming_edges = NULL;
*/
}


/**
 * Default destructor.
 *	Carry out dynamic memory management.
 */
directed_graph_node::~directed_graph_node() {
}

// ==================================================================

// Accessor functions.

/**
 * Function to get the incoming edges from this node.
 * @param - None.
 * @return - The vector of incoming edges from this node.
 */
//set<pair<unsigned long long,bool> > directed_graph_node::get_incoming_edges() {
set<unsigned long long int> directed_graph_node::get_incoming_edges() {
	return incoming_edges;
}


/**
 * Function to get the outgoing edges from this node.
 * @param - None.
 * @return - The vector of outgoing edges from this node.
 */
//set<pair<unsigned long long,bool> > directed_graph_node::get_outgoing_edges() {
set<unsigned long long int> directed_graph_node::get_outgoing_edges() {
	return outgoing_edges;
}


/**
 * Function to get the ID of the node.
 * @param - None.
 * @return - The ID of this node.
 */
unsigned long long int directed_graph_node::get_node_ID() {
	return node_ID;
}

// ==================================================================

// Mutator functions.

/**
 * Function to set the ID of the node.
 * @param temp_ID:	The new ID to replace the current ID of the node.
 * @return - Nothing.
 */
void directed_graph_node::set_node_ID(const unsigned long long int &temp_ID) {
	node_ID = temp_ID;
}


/**
 * Function to add a set of incoming edges to the current
 *	set of incoming edges.
 * @param set_incoming_links: A set of incoming edges to be added to
 *		the current set of incoming edges.
 * @return - Nothing.
 */
//void directed_graph_node::add_set_of_incoming_edges(const set<pair<unsigned long long,bool> > &set_incoming_links) {
void directed_graph_node::add_set_of_incoming_edges(const dg_edge_set &set_incoming_links) {
	incoming_edges.insert(set_incoming_links.begin(), set_incoming_links.end());
}


/**
 * Function to add a set of outgoing edges to the current
 *	set of outgoing edges.
 * @return - Nothing.
 */
//void directed_graph_node::add_set_of_outgoing_edges(const set<pair<unsigned long long,bool> > &set_outgoing_links) {
void directed_graph_node::add_set_of_outgoing_edges(const dg_edge_set &set_outgoing_links) {
	outgoing_edges.insert(set_outgoing_links.begin(), set_outgoing_links.end());
}


/**
 * Function to add an incoming edge to the current set of
 *	incoming edges.
 * @return - Nothing.
 */
void directed_graph_node::add_incoming_edge(const unsigned long long &src_node_ID) {
	// Is there an edge in the set of incoming edges with given ID?
/*
	if() {
	}else{
	}
*/
}


/**
 * Function to add an outgoing edge to the current set of
 *	outgoing edges.
 * @return - Nothing.
 */
void directed_graph_node::add_outgoing_edge(const unsigned long long &destn_node_ID) {
}


/**
 * Function to remove an incoming edge to the current set of
 *	incoming edges.
 * @return - Nothing.
 */
void directed_graph_node::remove_incoming_edge(const unsigned long long &node_ID_removal) {
}


/**
 * Function to remove an outgoing edge to the current set of
 *	outgoing edges.
 * @return - Nothing.
 */
void directed_graph_node::remove_outgoing_edge(const unsigned long long &node_ID_removal) {
}




