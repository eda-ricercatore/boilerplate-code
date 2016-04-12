/**
 * Implement the node object.
 *
 * ### IMPORTANT ASSUMPTION:
 * Assume that the ID of the node is unique.
 *	Hence, for a set of nodes, the ID of each node in the set is unique.
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
#include "./node.hpp"

// ==================================================================

// Default constructor.
node::node() {
	// Assign private instance variables to NULL.
	node_ID = ULLONG_MAX;
	node_label = "UNKNOWN-LABEL";
}

// Standard constructors.

/**
 * Standard constructor.
 * @param n_ID:		The ID number of the node.
 * @param n_label:	The label of the node.
 */
node::node(const unsigned long long &n_ID, const string &n_label) {
	// Assign the node ID to be n_ID.
	//node_ID = new int(n_ID);
	node_ID = n_ID;
	// Assign the node label to n_label.
	node_label = n_label;
}

// Default destructor.
node::~node() {
	//delete node_ID;
	//delete node_label;
}

// ==================================================================

// Accessor functions.

/**
 * Function to get the ID of the node.
 * @param - None.
 * @return - The ID of this node.
 */
unsigned long long node::get_node_ID() const {
	return node_ID;
}


/**
 * Function to get the label of the node.
 * @param - None.
 * @return - The label of this node.
 */
string node::get_node_label() const {
	return node_label;
}


/**
 * Function to print details of the object.
 * Call accessor functions to obtain private details of the object
 *	and print their content/values.
 * @param - None.
 * @return - Nothing.
 */
void node::print_node() const {
/*
	cout << "Node ID:::" << (*this->get_node_ID()) << "==" << endl;
	cout << "Node Label:::" << (*this->get_node_label()) << "==" << endl;
*/
//	cout << "Node ID:::" << get_node_ID() << "==" << endl;
	cout << "Node ID:::" << get_node_ID() << "==" << endl;
	cout << "Node Label:::" << get_node_label() << "==" << endl;

}

// ==================================================================

// Mutator functions.

/**
 * Function to set the ID of the node.
 * @param temp_ID:	The ID of the node.
 * @return - Nothing.
 */
void node::set_node_ID(const unsigned long long int &temp_ID) {
//void node::set_node_ID(unsigned long long &temp_ID) {
//	*node_ID = temp_ID;
//	node_ID = new int(temp_ID);
	node_ID = temp_ID;
}
		

/**
 * Function to set the label of the node.
 * @param temp_label:	The label of the node.
 * @return - Nothing.
 */
void node::set_node_label(const string &temp_label) {
//	*node_label = temp_label;
//	node_label = new string(temp_label);
	node_label = temp_label;
}


// ==================================================================
		
// Operator overloading.

/**
 * Overload the "<" operator for node comparison.
 *
 * When containers of nodes need to compare a pair of nodes, the IDs
 *	of the nodes are compared.
 * This is because the ID of a node is unique in a set/container of
 *	nodes.
 */
bool node::operator<(const node &cmp) const {
//bool node::operator<(const node &cmp) {
/*
	if(cmp.node_ID < node_ID) {
		return true;
	}else{
		return false;
	}
*/
//	return (this->node_ID < cmp.node_ID);
//	return (this.node_ID < cmp.node_ID);
	return (node_ID < cmp.node_ID);

	// return (*(cmp->get_node_ID()) == *(get_node_ID()));
}



/**
 * Overload the "<" operator for 2 input nodes.
 *
 * When containers of nodes need to compare a pair of nodes, the IDs
 *	of the nodes are compared.
 * This is because the ID of a node is unique in a set/container of
 *	nodes.
 */
bool node::operator() (const node& n1, const node& n2) const {
//bool node::operator() (const node& n1, const node& n2) {
	return (n1.get_node_ID()) < (n2.get_node_ID());
}
