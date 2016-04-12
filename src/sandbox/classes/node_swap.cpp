/**
 * Implement the node_swap object.
 *
 * ### IMPORTANT ASSUMPTION:
 * Assume that the ID of the node_swap is unique.
 *	Hence, for a set of node_swaps, the ID of each node_swap in the set is unique.
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
#include "./node_swap.hpp"

// ==================================================================

// Default constructor.
node_swap::node_swap() {
	// Assign private instance variables to NULL.
	node_swap_ID = ULLONG_MAX;
	node_swap_label = "UNKNOWN-LABEL";
}

// Standard constructors.

/**
 * Standard constructor.
 * @param n_ID:		The ID number of the node_swap.
 * @param n_label:	The label of the node_swap.
 */
node_swap::node_swap(const string &n_label, const unsigned long long &n_ID) {
	// Assign the node_swap ID to be n_ID.
	//node_swap_ID = new int(n_ID);
	node_swap_ID = n_ID;
	// Assign the node_swap label to n_label.
	node_swap_label = n_label;
	// Assign the random numbers.
	random_int = 0;
	random_real = 0.0;
}

/**
 * Standard constructor.
 * @param n_ID:		The ID number of the node_swap.
 * @param n_label:	The label of the node_swap.
 * @param n_real:	A random real number.
 * @param n_int:	A random integer.
 */
node_swap::node_swap(const string &n_label, const long double &n_real, const unsigned long long int &n_ID, const unsigned long long int &n_int) {
	// Assign the node_swap ID to be n_ID.
	//node_swap_ID = new int(n_ID);
	node_swap_ID = n_ID;
	// Assign the node_swap label to n_label.
	node_swap_label = n_label;
	// Assign the random numbers.
	random_int = n_int;
	random_real = n_real;
}



// Default destructor.
node_swap::~node_swap() {
	//delete node_swap_ID;
	//delete node_swap_label;
}

// ==================================================================

// Accessor functions.

/**
 * Function to get the ID of the node_swap.
 * @param - None.
 * @return - The ID of this node_swap.
 */
unsigned long long int node_swap::get_node_swap_ID() const {
	return node_swap_ID;
}


/**
 * Function to get the label of the node_swap.
 * @param - None.
 * @return - The label of this node_swap.
 */
string node_swap::get_node_swap_label() const {
	return node_swap_label;
}

/**
 * Function to get the random integer of the node_swap.
 * @param - None.
 * @return - The random integer of this node_swap.
 */
unsigned long long int node_swap::get_node_swap_rand_int() const {
	return random_int;
}

/**
 * Function to get the random real number of the node_swap.
 * @param - None.
 * @return - The random real number of this node_swap.
 */
long double node_swap::get_node_swap_rand_real() const {
	return random_real;
}


/**
 * Function to print details of the object.
 * Call accessor functions to obtain private details of the object
 *	and print their content/values.
 * @param - None.
 * @return - Nothing.
 */
void node_swap::print_node_swap() const {
/*
	cout << "node_swap ID:::" << (*this->get_node_swap_ID()) << "==" << endl;
	cout << "node_swap Label:::" << (*this->get_node_swap_label()) << "==" << endl;
*/
//	cout << "node_swap ID:::" << get_node_swap_ID() << "==" << endl;
	cout << "node_swap ID:::" << get_node_swap_ID() << "==" << endl;
	cout << "node_swap Label:::" << get_node_swap_label() << "==" << endl;
	cout << "node_swap random integer:::" << get_node_swap_rand_int() << "==" << endl;
	cout << "node_swap random real number:::" << get_node_swap_rand_real() << "==" << endl;
}

// ==================================================================

// Mutator functions.

/**
 * Function to set the ID of the node_swap.
 * @param temp_ID:	The ID of the node_swap.
 * @return - Nothing.
 */
void node_swap::set_node_swap_ID(const unsigned long long int &temp_ID) {
//void node_swap::set_node_swap_ID(unsigned long long &temp_ID) {
//	*node_swap_ID = temp_ID;
//	node_swap_ID = new int(temp_ID);
	node_swap_ID = temp_ID;
}
		

/**
 * Function to set the label of the node_swap.
 * @param temp_label:	The label of the node_swap.
 * @return - Nothing.
 */
void node_swap::set_node_swap_label(const string &temp_label) {
//	*node_swap_label = temp_label;
//	node_swap_label = new string(temp_label);
	node_swap_label = temp_label;
}






/**
 * Function to set the random integer of node_swap.
 * @param temp_label:	The random integer of node_swap.
 * @return - Nothing.
 */
void node_swap::set_node_swap_rand_int(const unsigned long long int &r_int) {
	random_int = r_int;
}

/**
 * Function to set the random real number of node_swap.
 * @param temp_label:	The random real number of node_swap.
 * @return - Nothing.
 */
void node_swap::set_node_swap_rand_real(const long double &r_real) {
	random_real = r_real;
}

// ==================================================================
		
// Operator overloading.

/**
 * Overload the "<" operator for node_swap comparison.
 *
 * When containers of node_swaps need to compare a pair of node_swaps, the IDs
 *	of the node_swaps are compared.
 * This is because the ID of a node_swap is unique in a set/container of
 *	node_swaps.
 */
bool node_swap::operator<(const node_swap &cmp) const {
//bool node_swap::operator<(const node_swap &cmp) {
/*
	if(cmp.node_swap_ID < node_swap_ID) {
		return true;
	}else{
		return false;
	}
*/
//	return (this->node_swap_ID < cmp.node_swap_ID);
//	return (this.node_swap_ID < cmp.node_swap_ID);
	return (node_swap_ID < cmp.node_swap_ID);

	// return (*(cmp->get_node_swap_ID()) == *(get_node_swap_ID()));
}



/**
 * Overload the "<" operator for 2 input node_swaps.
 *
 * When containers of node_swaps need to compare a pair of node_swaps, the IDs
 *	of the node_swaps are compared.
 * This is because the ID of a node_swap is unique in a set/container of
 *	node_swaps.
 */
bool node_swap::operator() (const node_swap& n1, const node_swap& n2) const {
//bool node_swap::operator() (const node_swap& n1, const node_swap& n2) {
	return (n1.get_node_swap_ID()) < (n2.get_node_swap_ID());
}
