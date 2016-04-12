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

// Import packages from the software
#include "directed_graph_node.hpp"

// ==================================================================

/**
 * Default constructor.
 *
 * Values for private variables are set to invalid values.
 * @throws violated_assertion exception: If the default constructor for
 *	this class on directed graph nodes is used, throw an
 *	exception to avoid usage of the default constructor.
 */
directed_graph_node::directed_graph_node() {
	/**
	 * Assign node ID to the maxium unsigned long long int value,
	 *	so that it represents an INVALID node ID; the symbolic
	 *	value is defined by the C++ Standard as: ULLONG_MAX.
	 *
	 * That is, the number of nodes in a graph is less than
	 *	ULLONG_MAX (or 2^{64} - 1).
	 * If a graph has at least ULLONG_MAX number of nodes,
	 *	a new class has to be defined to represent huge
	 *	integers that cannot be represented by any C++ data
	 *	type.
	 *
	 * Assumption:
	 * Assume that the graph will not have more than ULLONG_MAX
	 *	nodes.
	 * Since the number of transistors in an integrated circuit
	 *	is in the order of 2^{30}, or 10^9, this assumption seems
	 *	valid.
	 */
	node_ID = ULLONG_MAX;
	// Assign pointer-based private instance variables to NULL.

	// Assertion violated; default constructor shouldn't be used.
	string err_msg = "Default constructor should not be used!!!";
	throw new violated_assertion(err_msg);
}

// -----------------------------------------------------------------
// Standard constructors.

/**
 * Standard constructor.
 * @param node_id_num:	The ID number of the node.
 * @throws violated_assertion exception: If the node ID has
 *	been set (i.e., not ULLONG_MAX), throw the violated_assertion
 *	exception to indicate that instantiating a new instance of
 *	a node should not have the node ID been preset to ULLONG_MAX.
 */
directed_graph_node::directed_graph_node(unsigned long long int node_id_num) {
	// Has the node ID been preset to ULLONG_MAX?
	if(ULLONG_MAX == node_ID) {
		// Assign node ID to be: node_id_num.
		node_ID = node_id_num;
	}else{
		string err_msg = "The node ID has been incorrectly preset!!!";
		throw new violated_assertion(err_msg);
	}
	// Assign pointer-based private instance variables to NULL.
}


// -----------------------------------------------------------------

/**
 * Default destructor.
 *	Carry out dynamic memory management.
 */
directed_graph_node::~directed_graph_node() {
	// Assign pointer-based private instance variables to NULL.
}

// ==================================================================

// Accessor functions.

/**
 * Function to get the incoming edges of this node.
 * @param - None.
 * @return - The set of incoming edges of this node.
 */
dg_edge_set directed_graph_node::get_incoming_edges() {
	return incoming_edges;
}


/**
 * Function to get the outgoing edges from this node.
 * @param - None.
 * @return - The set of outgoing edges from this node.
 */
dg_edge_set directed_graph_node::get_outgoing_edges() {
	return outgoing_edges;
}


/**
 * Function to get the incident edges of this node.
 * @param - None.
 * @return - The set of incident edges of this node.
 * @post - Size of the set of incident edges must be
 *	the sum of the size of the set of incoming edges and the
 *	size of the set of outgoing edges.
 * @throws violated_postcondition: Thrown when the size
 *	of the set of incident edges is not equal to the (size
 *	of the set of incoming edges + size of the set of
 *	outgoing edges).
 */
dg_edge_set directed_graph_node::get_incident_edges() {
	/**
	 * set of incident edges
	 *	= (set of incoming edges) Union (set of outgoing edges)
	 *
	 * Set of incident edges = copy of set of incoming edges.
	 */
	dg_edge_set incident_edges(incoming_edges);
	// Include set of outgoing edges in set of incident edges.
	incident_edges.insert(outgoing_edges.begin(),outgoing_edges.end());
	/**
	 * set of incident edges
	 *	= (set of incoming edges) Union (set of outgoing edges)
	 */


	// Check postcondition; get size of the set of incoming edges
	unsigned long long int num_incident_edges = incoming_edges.size();
	/**
	 * size of the set of incident edges
	 *	= 	size of the set of incoming edges
	 *		+ size of the set of outgoing edges
	 */
	num_incident_edges = num_incident_edges + outgoing_edges.size();
	if (incident_edges.size() != num_incident_edges) {
		string err_msg = "Size of incident edges doesn't match";
		err_msg = err_msg + "#outgoing edges + #incoming edges!!!";
		throw new violated_postcondition(err_msg);		
	}

	return incident_edges;
}


/**
 * Function to determine if node v is adjacent to this node.
 *
 * Note that the node ID of a node is constant.
 * Hence, I can traverse the sets of incoming and outgoing edges
 *	for this node to determine if the node ID of v is found in
 *	the source and destination nodes, for the respective
 *	aforementioned sets.
 * If there is >=1 match, return TRUE. Else, return FALSE.
 * This supports the implementation of directed multigraphs.
 *
 * @param v:	A node that this function shall determine if it
 *				is an immediate neighbor of this node.
 *				That is, is there an incident edge connecting v
 *				and this node?
 *
 */
bool directed_graph_node::is_adjacent_to(const directed_graph_node &v) {
	// Get the node ID of v.
	unsigned long long int v_node_ID = v.get_node_ID();

	// Node ID of enumerate node.
	unsigned long long int enum_node_ID;
	// Pointer for a set of directed (graph) edges.
	dg_edge_set_p des_ptr;
	// Enumerate the set of incoming edges.
	for(des_ptr = incoming_edges.begin(); des_ptr != incoming_edges.end(); des_ptr++) {

		// Get the node ID of enumerated node.
		enum_node_ID = (*des_ptr).get_node_ID();
		// Is the node ID of this node equal to node ID of v?
		if(v_node_ID == enum_node_ID) {
			// Yes. v is an immediate neighbor.
			return true;
		}
	}

	// Enumerate the set of outgoing edges.
	for(des_ptr = outgoing_edges.begin(); des_ptr != outgoing_edges.end(); des_ptr++) {

		// Get the node ID of enumerated node.
		enum_node_ID = (*des_ptr).get_node_ID();
		// Is the node ID of this node equal to node ID of v?
		if(v_node_ID == enum_node_ID) {
			// Yes. v is an immediate neighbor.
			return true;
		}
	}

	// There is no incident edge connecting this ndoe and v.
	return false;
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
 * @post			Ensure that the ID has been replaced with temp_ID.
 * @throws violated_postcondition exception: Thrown when node_ID
 *	is not updated properly.
 * @return - Nothing.
 */
void directed_graph_node::set_node_ID(const unsigned long long int &temp_ID) {
	// Modify the node ID to temp_ID.
	node_ID = temp_ID;
	
	// Postcondition. Node ID should be replaced and equal to temp_ID.
	if(temp_ID != node_ID) {
		throw new violated_postcondition("=	Node ID is not modified !!!!");
	}
}


/**
 * Function to add a set of incoming edges to the initial/current
 *	set of incoming edges.
 * @param set_incoming_links: A set of incoming edges to be added to
 *		the current set of incoming edges.
 * @post		Ensure that the difference in the size of
 *					incoming links is the size of the set of
 *					desired incoming links to be added.
 *					#actually added unique links = #desired added links
 * @return - Nothing.
 * @throws violated_postcondition exception: Thrown when the
 *	difference in the size of incoming edges due to the addition
 *	is not equal to the size of the added set.
 */
void directed_graph_node::add_set_of_incoming_edges(const dg_edge_set &set_incoming_links) {

	// Set up checkers for testing postconditions.
	// Initial number of incoming edges.
	unsigned long long int initial_incoming_links_size = incoming_edges.size();
	
	// Add the incoming edges.
	incoming_edges.insert(set_incoming_links.begin(), set_incoming_links.end());
	
	// Final number of incoming edges.
	unsigned long long int final_incoming_links_size = incoming_edges.size();
	// Difference due to addition of set of incoming edges.
	final_incoming_links_size = final_incoming_links_size - initial_incoming_links_size;
	
	/**
	 * Postcondition:
	 * Is (difference due to addition) = size of added set?
	 */
	if(final_incoming_links_size == set_incoming_links.size()) {
		// No.
		throw new violated_postcondition("=	Error in adding incoming links !!!!");
	}
}


/**
 * Function to add a set of outgoing edges to the initial/current
 *	set of outgoing edges.
 * @param set_outgoing_links: A set of outgoing edges to be added to
 *		the current set of outgoing edges.
 * @post		Ensure that the difference in the size of
 *					outgoing links is the size of the set of
 *					desired outgoing links to be added.
 *					#actually added unique links = #desired added links
 * @return - Nothing.
 * @throws violated_postcondition exception: Thrown when the
 *	difference in the size of outgoing edges due to the addition
 *	is not equal to the size of the added set.
 */
void directed_graph_node::add_set_of_outgoing_edges(const dg_edge_set &set_outgoing_links) {

	// Set up checkers for testing postconditions.
	// Initial number of outgoing edges.
	unsigned long long int initial_outgoing_links_size = outgoing_edges.size();
	
	// Add the outgoing edges.
	outgoing_edges.insert(set_outgoing_links.begin(), set_outgoing_links.end());
	
	// Final number of outgoing edges.
	unsigned long long int final_outgoing_links_size = outgoing_edges.size();
	// Difference due to addition of set of outgoing edges.
	final_outgoing_links_size = final_outgoing_links_size - initial_outgoing_links_size;
	
	/**
	 * Postcondition:
	 * Is (difference due to addition) = size of added set?
	 */
	if(final_outgoing_links_size = set_outgoing_links.size()) {
		// No.
		throw new violated_postcondition("=	Error in adding outgoing links !!!!");
	}
}


/**
 * Function to add an incoming edge to the current set of
 *	incoming edges.
 * If an incoming edge is added, the size should increase by 1.
 * @param incoming_link:	An incoming edge to be added to the
 *								set of incoming links.
 * @post	If the edge is in the set of incoming edges, ignore it.
 *				Else, add it to the set of incoming edges.
 *				Require: change_in_num_incoming_edges <= 1
 * @return - Nothing.
 * @throws violated_postcondition exception: Thrown when more
 *	than one incoming edge is added to the set of incoming edges.
 */
void directed_graph_node::add_incoming_edge(const directed_graph_edge &incoming_link) {
	// Intial number of incoming edges.
	unsigned long long int initial_num_incoming_edges = incoming_edges.size();
	
	// Add the incoming edge.
	incoming_edges.insert(incoming_link);

	// Final number of incoming edges.
	unsigned long long int final_num_incoming_edges = incoming_edges.size();
	// Difference due to addition of incoming edge.
	final_num_incoming_edges = final_num_incoming_edges - initial_num_incoming_edges;
	// Has number of incoming edges for this node increased by >1 ?
	if(1 < final_num_incoming_edges) {
		// Yes.
		throw new violated_postcondition("=	Extra incoming edge(s) is/are added!!!!");
	}
}


/**
 * Function to add an outgoing edge to the current set of
 *	outgoing edges.
 * If an outgoing edge is added, the size should increase by 1.
 * @param outgoing_link:	An outgoing edge to be added to the
 *								set of outgoing links.
 * @post	If the edge is in the set of outgoing edges, ignore it.
 *				Else, add it to the set of outgoing edges.
 *				Require: change_in_num_outgoing_edges <= 1
 * @return - Nothing.
 * @throws violated_postcondition exception: Thrown when more
 *	than one outgoing edge is added to the set of outgoing edges.
 */
void directed_graph_node::add_outgoing_edge(const directed_graph_edge &outgoing_link) {
	// Intial number of outgoing edges.
	unsigned long long int initial_num_outgoing_edges = outgoing_edges.size();
	
	// Add the outgoing edge.
	outgoing_edges.insert(outgoing_link);

	// Final number of outgoing edges.
	unsigned long long int final_num_outgoing_edges = outgoing_edges.size();
	// Difference due to addition of outgoing edge.
	final_num_outgoing_edges = final_num_outgoing_edges - initial_num_outgoing_edges;
	// Has number of outgoing edges for this node increased by >1 ?
	if(1 < final_num_outgoing_edges) {
		// Yes.
		throw new violated_postcondition("=	Extra outgoing edge(s) is/are added!!!!");
	}
}

//	See code for hacking/refactoring with set of string-based nodes.
/**
 * Function to remove an incoming edge from the current set of
 *	incoming edges.
 * @param node_ID_removal:	The node ID of a node to be removed
 * @return - Nothing.
 */
void directed_graph_node::remove_incoming_edge(const
	unsigned long long int &node_ID_r]
	// Enumerate all source nodes in the set of incoming edges.
//	dg_edge_set_p desp = outgoing_edges.find(temp_node);
	for(dg_edge_set_p desp = outgoing_edges.begin(); desp != outgoing_edges.end(); ++desp) {
		// Check if its source node has the ID node_ID_r.
		// Call function from the edge class.
	}

	/**
	 * Remove node with the ID, node_ID_removal, if it is in
	 *	the aforementioned set (set of incoming edges).
	 */
	pair_dgedgesetp_bool = outgoing_edges.erase();
}


/**
 * Function to remove an incoming edge from the current set of
 *	incoming edges.
 * @param incoming_edge_rm:		Incoming edge to be removed.
 * @return - Nothing.
 */
void directed_graph_node::remove_incoming_edge(const directed_graph_edge &incoming_edge_rm) {
}


/**
 * Function to remove an outgoing edge from the current set of
 *	outgoing edges.
 * @param
 * @return - Nothing.
 */
void directed_graph_node::remove_outgoing_edge(const unsigned long long int &node_ID_removal) {
}


/**
 * Function to remove an outgoing edge from the current set of
 *	outgoing edges.
 * @param outgoing_edge_rm:		Outgoing edge to be removed.
 * @return - Nothing.
 */
void directed_graph_node::remove_outgoing_edge(const directed_graph_edge &outgoing_edge_rm) {
}


