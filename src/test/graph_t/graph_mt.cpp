/**
 * Test/Graph_t package:
 * Submodule of Test package to test classes in the Graph package.
 *
 * graph_mt class:
 * Class that tests the graph package.
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
#include "graph_mt.hpp"


//#include "../../utilities/printer.hpp"


// Import appropriate header files from the C++ STL



/**
 * Default constructor.
 *
 * Do NOT allow people to use it.
 */
graph_mt::graph_mt() {
	cerr << "==tm	Don't instantiate graph_mt!";
	cerr << endl;
}




/**
 * Function to test different classes in the Graph package.
 * @param None
 * @return Nothing
 */
void graph_mt::test_graph() {
	// Testing the Graph package
	cout << "--------------------------------------------------------" << endl;
	cout << "		TESTING the Graph package" << endl << endl << endl;
	// Test the class directed_graph_node
	directed_graph_node_ut::test_directed_graph_node();
	// Test the class directed_graph
//	directed_graph_ut::test_directed_graph();
	// Test the class aig_node
//	aig_node_ut::test_aig_node();
	// Test the class aig_graph
//	aig_graph_ut::test_aig_graph();
}
