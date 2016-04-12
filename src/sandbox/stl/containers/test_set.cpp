/**
 * Test the node object using sets.
 *
 * To use the "set" container from the C++ STL, it is required
 *	to overload the "<" operator.
 * To simplify the software design, the "set" implementation in
 *	the C++ STL is a binary search tree.
 * Binary search trees are ordered/sorted data structures.
 * The implementation of "<" operator overloading will determine
 *	how the elements in the binary search tree will be ordered.
 * The comparison of two numbers is easiest to create the
 *	ordering of elements in the binary search tree.
 * If a conjunction of multiple comparisons are used, a precedence
 *	of these comparisons should be provided. However, this can
 *	complicate the software design.
 *
 *
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



// set_emplace.cpp
// Import Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <math.h>
#include <climits>
#include <cfloat>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include <set>
#include <utility>

// Import packages from the software
#include "../../classes/node.hpp"
#include "../../classes/node_swap.hpp"


using namespace std;

// =======================================================================

// Shortcut to container of int.
typedef set<int> int_set;
// Shortcut to represent a pointer to the container of int.
typedef set<int>::iterator int_set_p;
/**
 * Shortcut to a pair representing an iterator pointer to the
 *	set of integers and a boolean flag representing the success of
 *	a set operation.
 */
typedef pair<int_set_p, bool> pair_intboolp_bool;


// Shortcut to container of node.
typedef set<node> node_set;
// Shortcut to represent an iterator to the container of nodes.
typedef set<node>::iterator node_set_p;
/**
 * Shortcut to a pair representing an iterator to the container of
 *	nodes and a boolean flag representing the success of a set
 *	operation.
 */
typedef pair<node_set_p, bool> pair_nodesetp_bool;



// Shortcut to container of node_swap.
typedef set<node_swap> node_swap_set;
// Shortcut to represent an iterator to the container of node_swaps.
typedef set<node_swap>::iterator node_swap_set_p;
/**
 * Shortcut to a pair representing an iterator to the container of
 *	node_swaps and a boolean flag representing the success of a set
 *	operation.
 */
typedef pair<node_swap_set_p, bool> pair_node_swap_setp_bool;


// Unused shortcuts...

// Shortcut to a pair construct, integer and boolean value.
typedef pair<int, bool> pair_int_bool;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	cout << "==>	Test a set of integers." << endl;
	/**
	 * Create a set of integers: 17, 8, 9, [9, 9], 12, [12, 12, 12], 30, 24
	 * Sorted set: 8, 9, 12, 17, 24, 30
	 */
	int_set my_set;
	//auto a_pair_int_bool = my_set.emplace(17);

	pair_intboolp_bool p_flag = my_set.insert(17);
	if(p_flag.second) {
		cout << "==>		Add 17 to the set" << endl;
	}else{
		cout << "<<<	17 already exists in the set." << endl;
	}

	p_flag = my_set.insert(8);
	if(p_flag.second) {
		cout << "==>		Add 8 to the set" << endl;
	}else{
		cout << "<<<	8 already exists in the set." << endl;
	}
	p_flag = my_set.insert(9);
	if(p_flag.second) {
		cout << "==>		Add 9 to the set" << endl;
	}else{
		cout << "<<<	9 already exists in the set." << endl;
	}
	p_flag = my_set.insert(9);
	if(p_flag.second) {
		cout << "==>		Add 9 to the set" << endl;
	}else{
		cout << "<<<	9 already exists in the set (1)." << endl;
	}
	p_flag = my_set.insert(9);
	if(p_flag.second) {
		cout << "==>		Add 9 to the set" << endl;
	}else{
		cout << "<<<	9 already exists in the set (2)." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set (1)." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set (2)." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set (3)." << endl;
	}
	p_flag = my_set.insert(30);
	if(p_flag.second) {
		cout << "==>		Add 30 to the set" << endl;
	}else{
		cout << "<<<	30 already exists in the set." << endl;
	}
	p_flag = my_set.insert(24);
	if(p_flag.second) {
		cout << "==>		Add 24 to the set" << endl;
	}else{
		cout << "<<<	24 already exists in the set." << endl;
	}



//	===========================================================
	// Dummy variables and pointer references for key information of a node.
//	int *n_ID;
/*
	int temp_ID;
	int *n_ID = &temp_ID;
*/
//cout << "Halfway through playing (1)." << endl;
/*
	*n_ID = 109;
	string temp_label;
	string *n_label = &temp_label;
	*n_label = "america";
*/
//cout << "Halfway through playing (2)." << endl;

//	n_label = temp_label;
//	===========================================================



	// Create an empty set of nodes.
	node_set n_set;
	cout << "==>	Test a set of integer/string nodes." << endl;
	/**
	 * Create a set of nodes.
	 * # (109, "america")
	 * # (218, "bangalore")
	 * # (327, "china")
	 * # (436, "denmark")
	 * # (545, "ethiopia")
	 */
//	node temp_node(109, "america");
	node temp_node;
	unsigned long long temp_ID = 109;
//cout << "Halfway through playing (3)." << endl;
	temp_node.set_node_ID(temp_ID);
//cout << "Halfway through playing (4)." << endl;
	temp_node.set_node_label("america");
//cout << "Halfway through playing (5)." << endl;
//	node temp_node{109, "america"};
	pair_nodesetp_bool nspb_outcome;
	nspb_outcome = (pair_nodesetp_bool) n_set.insert(temp_node);
//cout << "Halfway through playing (6)." << endl;

	temp_ID = 218;
//	temp_node.set_node_ID(218);
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("bangalore");
	nspb_outcome = n_set.insert(temp_node);
	temp_ID = 327;
//	temp_node.set_node_ID(327);
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("china");
	nspb_outcome = n_set.insert(temp_node);
//	temp_node.set_node_ID(436);
	temp_ID = 436;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("denmark");
	nspb_outcome = n_set.insert(temp_node);
//	temp_node.set_node_ID(545);
	temp_ID = 545;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("ethiopia");
	nspb_outcome = n_set.insert(temp_node);

	/**
	 * Some functions to test from the STL set are:
	 *	# iterator begin/end
	 *	# capacity size/max_size/empty
	 *	# modifiers erase/clear/swap
	 *	# operations count/find/equal_range/lower_bound/upper_bound
	 *	# observers get_allocators/key_comp/value_comp
	 */

	
	// Iterate the sequence of nodes in the set.
	for(node_set_p it=n_set.begin(); it != n_set.end(); ++it) {
		//(*it).print_node();
		//it->print_node();
		//(*it)->print_node();
		//(&it)->print_node();
		//(&it).print_node();
		// it.print_node();
		//it->print_node();
		
//cout<< "=" << it->get_node_label() << "-" << endl;
		temp_ID = 5;
		//it->set_node_ID(temp_ID);
		//(*it).set_node_ID(temp_ID);
		//(*it)->set_node_ID(temp_ID);
		//it.set_node_ID(temp_ID);
		cout << "		==ID of the node is:::" << it->get_node_ID() << "==" << endl;
		cout << "		Label of the node is:::" << it->get_node_label() << "==" << endl;
		//it->set_node_ID(temp_ID);
		/**
		 * Don't use the pointer to set the attributes of the
		 *	node object.
		 */
	}





//	node a_node = new node();
//	a_node->set_node_ID(23);


	cout << "==>	Verify the find() function of set, in the C++ STL.";
	cout << endl;
	// Verify the find function for a set.
	node_set_p nsp = n_set.begin();
	
	// Create clone of a node in the set.
	temp_ID = 327;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("china");
	nsp = n_set.find(temp_node);
	
	// Check if clone has equivalent node in the set.
	if(nsp == n_set.end()) {
		cout << "	Node 327/china is NOT found!" << endl;
	}else{
		cout << "	Node 327/china is found." << endl;
	}

	if(nsp->get_node_ID() == temp_node.get_node_ID()) {
		cout << "		Node ID is correct." << endl;
	}else{
		cout << "		Node ID is WRONG!!!" << endl;
	}

	if(nsp->get_node_label() == temp_node.get_node_label()) {
		cout << "		Node label is correct." << endl;
	}else{
		cout << "		Node label is WRONG!!!" << endl;
	}
	// Yes, it does.

	// Create a node that is not in the set.
	temp_ID = 545;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("bad-NaMe");
	nsp = n_set.find(temp_node);

	// Check if this node has equivalent node in the set.
	if(nsp == n_set.end()) {
		cout << "	Node 545/bad-NaMe is NOT found!" << endl;
	}else{
		cout << "	Node 545/bad-NaMe is found." << endl;
	}

	if(nsp->get_node_ID() == temp_node.get_node_ID()) {
		cout << "		Node ID is correct." << endl;
	}else{
		cout << "		Node ID is WRONG!!!" << endl;
	}
	
	if(nsp->get_node_label() == temp_node.get_node_label()) {
		cout << "		Node label is correct." << endl;
	}else{
		cout << "		Node label is WRONG!!!" << endl;
		cout << "		nsp->get_node_label():::";
		cout << nsp->get_node_label() << ":::" << endl;
		cout << "		temp_node.get_node_label()+++";
		cout << temp_node.get_node_label() << "+++" << endl;
	}
	// Yes, it does... Error!!!
	
	// Create another node that is not in the set.
	temp_ID = 10239;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("america");
	nsp = n_set.find(temp_node);

	// Check if this node has equivalent node in the set.
	if(nsp == n_set.end()) {
		cout << "	Node 10239/america is NOT found!" << endl;
	}else{
		cout << "	Node 10239/america is found." << endl;
		
		if(nsp->get_node_ID() == temp_node.get_node_ID()) {
			cout << "		Node ID is correct." << endl;
		}else{
			cout << "		Node ID is WRONG!!!" << endl;
		}

		if(nsp->get_node_label() == temp_node.get_node_label()) {
			cout << "		Node label is correct." << endl;
		}else{
			cout << "		Node label is WRONG!!!" << endl;
			cout << "		nsp->get_node_label():::";
			cout << nsp->get_node_label() << ":::" << endl;
			cout << "		temp_node.get_node_label()+++";
			cout << temp_node.get_node_label() << "+++" << endl;
		}
	}

	
	// Create yet another node that is not in the set.
	temp_ID = 390101;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("Aussies-in-australia");
	nsp = n_set.find(temp_node);

	// Check if this node has equivalent node in the set.
	if(nsp == n_set.end()) {
		cout << "	Node 390101/Aussies-in-australia is NOT found!" << endl;
	}else{
		cout << "	Node 390101/Aussies-in-australia is found." << endl;
		
		if(nsp->get_node_ID() == temp_node.get_node_ID()) {
			cout << "		Node ID is correct." << endl;
		}else{
			cout << "		Node ID is WRONG!!!" << endl;
		}

		if(nsp->get_node_label() == temp_node.get_node_label()) {
			cout << "		Node label is correct." << endl;
		}else{
			cout << "		Node label is WRONG!!!" << endl;
			cout << "		nsp->get_node_label():::";
			cout << nsp->get_node_label() << ":::" << endl;
			cout << "		temp_node.get_node_label()+++";
			cout << temp_node.get_node_label() << "+++" << endl;
		}
	}


	/**
	 * Check if swapping the node's fields will change the order
	 *	of the results for testing the find() function.
	 */

	// Create an empty set of node_swaps.
	node_swap_set ns_set;
	// Default instantiation of node_swap.
	node_swap temp_ns;
	// Output of inserting node_swaps into a set of node_swaps.
	pair_node_swap_setp_bool nssb_op;
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID = 600019;
	temp_ns.set_node_swap_ID(temp_ID);
	// Setting node_swap label.
	temp_ns.set_node_swap_label("chicago");
	nssb_op = ns_set.insert(temp_ns);
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID = 600046;
	temp_ns.set_node_swap_ID(temp_ID);
	// Setting node_swap label.
	temp_ns.set_node_swap_label("austin");
	nssb_op = ns_set.insert(temp_ns);
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID = 600037;
	temp_ns.set_node_swap_ID(temp_ID);
	// Setting node_swap label.
	temp_ns.set_node_swap_label("houston");
	nssb_op = ns_set.insert(temp_ns);
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID = 600028;
	temp_ns.set_node_swap_ID(temp_ID);
	// Setting node_swap label.
	temp_ns.set_node_swap_label("seattle");
	nssb_op = ns_set.insert(temp_ns);


	// Iterate the sequence of nodes in the set.
	for(node_swap_set_p itsw=ns_set.begin(); itsw != ns_set.end(); ++itsw) {
		cout << "		>==ID of the node is:::" << itsw->get_node_swap_ID() << "==" << endl;
		cout << "		Label of the node is:::" << itsw->get_node_swap_label() << "==" << endl;
	}
	
	// Verify the find function for a set.
	node_swap_set_p nssp = ns_set.begin();
	// Create a clone of an existing node.
	temp_ID = 600028;
	temp_ns.set_node_swap_ID(temp_ID);
	temp_ns.set_node_swap_label("seattle");
	
	// Find the clone's original in the set.
	nssp = ns_set.find(temp_ns);	
	// Is the clone in the set?
	if(nssp != ns_set.end()) {
		// Yes.
		cout << "	Clone is in the set." << endl;
	}else{
		// No.
		cout << "	Clone is NOT in the set." << endl;
	}
	// Are the IDs the same?
	if(nssp->get_node_swap_ID() == temp_ns.get_node_swap_ID()) {
		cout << "		Yes. IDs are the same." << endl;
	}else{
		cout << "		Yes. IDs are NOT the same." << endl;
	}
	// Are the labels the same?
	if(nssp->get_node_swap_label() == temp_ns.get_node_swap_label()) {
		cout << "		Yes. labels are the same." << endl;
	}else{
		cout << "		Yes. labels are NOT the same." << endl;
	}
	
	
	
	
	// Create a node that does not exists in the set.
	temp_ID = 7928;
	temp_ns.set_node_swap_ID(temp_ID);
	temp_ns.set_node_swap_label("Trento");
	
	// Find the temp_ns in the set.
	nssp = ns_set.find(temp_ns);	
	// Is the temp_ns in the set?
	if(nssp == ns_set.end()) {
		// Yes.
		cout << "	temp_ns is NOT in the set." << endl;
	}else{
		// No.
		cout << "	temp_ns is in the set." << endl;
	}
	// Are the IDs the same?
	if(nssp->get_node_swap_ID() != temp_ns.get_node_swap_ID()) {
		cout << "		No. IDs are NOT the same:::";
		cout << temp_ns.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}else{
		cout << "		Yes. IDs are the same:::";
		cout << temp_ns.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}
	// Are the labels the same?
	if(nssp->get_node_swap_label() != temp_ns.get_node_swap_label()) {
		cout << "		No. labels are NOT the same:::";
		cout << temp_ns.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}else{
		cout << "		Yes. labels are the same:::";
		cout << temp_ns.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}
	
	
	
	
	
	// Create a node that does not exists in the set.
	temp_ID = 3489234829;
	temp_ns.set_node_swap_ID(temp_ID);
	temp_ns.set_node_swap_label("chicago");
	
	// Find the temp_ns in the set.
	nssp = ns_set.find(temp_ns);	
	// Is the temp_ns in the set?
	if(nssp == ns_set.end()) {
		// Yes.
		cout << "	temp_ns is NOT in the set." << endl;
	}else{
		// No.
		cout << "	temp_ns is in the set." << endl;
	}
	// Are the IDs the same?
	if(nssp->get_node_swap_ID() != temp_ns.get_node_swap_ID()) {
		cout << "		No. IDs are NOT the same:::";
		cout << temp_ns.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}else{
		cout << "		Yes. IDs are the same:::";
		cout << temp_ns.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}
	// Are the labels the same?
	if(nssp->get_node_swap_label() != temp_ns.get_node_swap_label()) {
		cout << "		No. labels are NOT the same:::";
		cout << temp_ns.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}else{
		cout << "		Yes. labels are the same:::";
		cout << temp_ns.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}
	
	
	
	
	
	
	
	// Create a node that does not exists in the set.
	temp_ID = 600037;
	temp_ns.set_node_swap_ID(temp_ID);
	temp_ns.set_node_swap_label("chicago");
	
	// Find the temp_ns in the set.
	nssp = ns_set.find(temp_ns);	
	// Is the temp_ns in the set?
	if(nssp == ns_set.end()) {
		// Yes.
		cout << "	temp_ns is NOT in the set." << endl;
	}else{
		// No.
		cout << "	temp_ns is in the set." << endl;
	}
	// Are the IDs the same?
	if(nssp->get_node_swap_ID() != temp_ns.get_node_swap_ID()) {
		cout << "		No. IDs are NOT the same:::";
		cout << temp_ns.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}else{
		cout << "		Yes. IDs are the same:::";
		cout << temp_ns.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}
	// Are the labels the same?
	if(nssp->get_node_swap_label() != temp_ns.get_node_swap_label()) {
		cout << "		No. labels are NOT the same:::";
		cout << temp_ns.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}else{
		cout << "		Yes. labels are the same:::";
		cout << temp_ns.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}
	
	/**
	 * This is proof that the find() function for sets in the
	 *	C++ STL compares elements of the set by comparing a
	 *	field that is number based.
	 *
	 * Question: What happens if there exists multiple fields
	 *	that are number based?
	 * Solution: Add a number field to node_swap and re-test
	 *	the code calling the find() function.
	 *
	 * Modified the node_swap class to handle additional
	 *	number-based fields/properties.
	 *
	 * Check if the implementation of the boolean comparison
	 *	operator overloading would determine how the find()
	 *	function for "sets" (in the C++ STL) work.
	 */
	// Create an empty set of node_swaps.
	node_swap_set ns_set_ext;
	// Default instantiation of node_swap.
	node_swap temp_ns_ext;
	// Output of inserting node_swaps into a set of node_swaps.
//	pair_node_swap_setp_bool nssb_op;
	// -------------------------------------------------------
	// Setting node_swap ID.
	unsigned long long int temp_ID_ext = 9100019;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("sydney");
	temp_ID_ext = 1233;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	//unsigned long long temp_real = 12.3313;
	long double temp_real = 12.3313;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
cout << "==	Adding element:" << endl;
temp_ns_ext.print_node_swap();
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100015;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("melbourne");
	temp_ID_ext = 1234;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3314;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100091;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("brisbane");
	temp_ID_ext = 1235;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3315;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100018;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("cairns");
	temp_ID_ext = 1236;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3316;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100076;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("darwin");
	temp_ID_ext = 1237;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3317;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100014;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("perth");
	temp_ID_ext = 2910;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3318;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100032;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("adelaide");
	temp_ID_ext = 2911;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3313;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}
	// -------------------------------------------------------
	// Setting node_swap ID.
	temp_ID_ext = 9100010;
	temp_ns_ext.set_node_swap_ID(temp_ID_ext);
	// Setting node_swap label.
	temp_ns_ext.set_node_swap_label("newcastle");
	temp_ID_ext = 2912;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.39;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	nssb_op = ns_set_ext.insert(temp_ns_ext);
cout << ">> Size of node_swap_set is:::";
cout << ns_set_ext.size() << ":::" << endl;
if (nssb_op.second == false) {
	cout << "	Set insertion failed:::";
	cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
}


	// Iterate the sequence of nodes in the set.
	for(node_swap_set_p rand_ri_iter=ns_set_ext.begin(); rand_ri_iter != ns_set_ext.end(); ++rand_ri_iter) {
	
		cout << "==	Current element:" << endl;
		rand_ri_iter->print_node_swap();
/*
		cout << "	>==ID of the node is:::";
			cout << rand_ri_iter->get_node_swap_ID();
			cout << "==" << endl;
		cout << "		Label of the node is:::";
			cout << rand_ri_iter->get_node_swap_label();
			cout << "==" << endl;
		cout << "		Random real number:::";
			cout << rand_ri_iter->get_node_swap_rand_real();
			cout << "==" << endl;
		cout << "		Random integer:::";
			cout << rand_ri_iter->get_node_swap_rand_int();
			cout << "==" << endl;
*/
	}
	// Create a clone of a node_swap in the set
	temp_ID = 9100018;
	temp_ns_ext.set_node_swap_ID(temp_ID);
	temp_ns_ext.set_node_swap_label("cairns");
	temp_ID_ext = 1236;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3316;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	
	// Find the temp_ns in the set.
	nssp = ns_set_ext.find(temp_ns_ext);
	// Is the temp_ns in the set?
	if(nssp != ns_set_ext.end()) {
		// Yes.
		cout << "	temp_ns_ext is in the set." << endl;
	}else{
		// No.
		cout << "	temp_ns_ext is NOT in the set." << endl;
	}
	// Are the IDs the same?
	if(nssp->get_node_swap_ID() != temp_ns_ext.get_node_swap_ID()) {
		cout << "		No. IDs are NOT the same:::";
		cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}else{
		cout << "		Yes. IDs are the same:::";
		cout << temp_ns_ext.get_node_swap_ID() << ":::" << endl;
		cout << "		nssp->get_node_swap_ID():::";
		cout << nssp->get_node_swap_ID() << ":::" << endl;
	}
	// Are the labels the same?
	if(nssp->get_node_swap_label() != temp_ns_ext.get_node_swap_label()) {
		cout << "		No. labels are NOT the same:::";
		cout << temp_ns_ext.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}else{
		cout << "		Yes. labels are the same:::";
		cout << temp_ns_ext.get_node_swap_label() << ":::" << endl;
		cout << "		nssp->get_node_swap_label():::";
		cout << nssp->get_node_swap_label() << ":::" << endl;
	}
	
	
	
	
	
	// Create a clone of a node_swap in the set
	temp_ID = 1029384756;	//	9100014
	temp_ns_ext.set_node_swap_ID(temp_ID);
	temp_ns_ext.set_node_swap_label("perth");
	temp_ID_ext = 2910;
	temp_ns_ext.set_node_swap_rand_int(temp_ID_ext);
	temp_real = 12.3318;
	temp_ns_ext.set_node_swap_rand_real(temp_real);
	
	// Find the temp_ns in the set.
	nssp = ns_set_ext.find(temp_ns_ext);
	// Is the temp_ns in the set?
	if(nssp == ns_set_ext.end()) {
		// No.
		cout << "	temp_ns_ext is not in the set." << endl;
	}else{
		// Yes.
		cout << "	temp_ns_ext IS in the set." << endl;
	}
	
	
	/**
	 * ### IMPORTANT
	 *
	 * See the comments at the top of the file for my reflections
	 *	on this exercise.
	 */


cout << "Complete playing." << endl;

	
	// End of main function...
	return 0;
}
