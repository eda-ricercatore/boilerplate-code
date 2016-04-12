# Graph package

## Directed graph

### Data structures for directed graphs
+ AND-inverter graphs, AIGs
+ binary decision diagrams, BDDs
+ binary search trees
+ trees
+ directed acyclic graphs, DAGs




### Algorithms for directed graphs
+ topological sort
+ reverse topological sort
+ A*







## Undirected graph

### Data structures for undirected graphs


### Algorithms for undirected graphs
+ minimum spanning trees: Prim-Jarnik algorithm, and Kruskal's algorithm
+ longest increasing subsequence problem
+ shortest common subsequence problem; see common subexpression elimination











## From the sandbox, the following shortcuts are being used.
+ int_set
+ pair_intboolp_bool
+ node_set
+ pair_nodesetp_bool
+ node_set_p





## Data Structure Representations for Graphs

The adjacency list is recommended for representing sparse graphs, while the adjacency matrix is recommended for representing dense graphs. The former requires *\Theta(V + E)* memory space, while the latter requires *\Theta(V^{2})* memory space \\cite{Cormen2009}.

### Operations that I care about:
+ add()
+ remove()
+ search()
+ size()
+ empty()
+ begin()
+ end()

See Tables 14.1 of \\cite{Goodrich2013} (Python version) for the computational time complexities of these operations. This table also indicates the computational time complexity for other operations/functions/methods of graphs.





### Adjacency List

See \\cite[Figure 14.5, pp. 630]{Goodrich2013} (Python version) for a more intuitive representation/diagram of the adjacency list structure.

Compared to the edge list, the adjacency list adds extra information to enable edges incident on a given node to be found. Consequently, the neigboring nodes of the given node can also be found via the edges. This implies that functions that depending on finding edges incident on a node can be executed faster \\cite[pp. 603]{Goodrich2011}.

One way to store the extra information is: each node stores a collection of adjacent nodes, via its incident edges; and each node also stores a reference to each of its incident edges. Another way **to store the information is: each node stores a reference to each of its incident edges** \\cite[pp. 627]{Goodrich2013}. **These references can be used to determine the adjacent nodes of the given node** \\cite[pp. 603]{Goodrich2011} \\cite[pp. 627]{Goodrich2013}. Yet another way to store the extra information is: each node contains a set/container of outgoing edges. The set of all edges is the union of all these sets/containers \\cite[pp. 627]{Goodrich2013}.

The main advantage of the adjacency list is that it provides nodes (direct) access to its incident edges and it also provides edges (direct) access to its end nodes \\cite[pp. 603]{Goodrich2011}.

It enables operations to be performed faster on the adjacency list representation than on the edge list representation \\cite[pp. 603]{Goodrich2011}.

Computational space complexity: **O(|V| + |E|)** \\cite[pp. 604]{Goodrich2011} \\cite[pp. 600]{Goodrich2010}.











### Adjacency Matrix

See \\cite[Figure 14.7, pp. 633]{Goodrich2013} (Python version) for a more intuitive representation/diagram of the adjacency list structure.

Adjacency matrix: for sparse graphs, it takes up a lot of space. For undirected graphs, the upper and lower triangular matrices are symmetrical with respect to each other along the diagonal. For directed graphs, the upper and lower triangular matrices differ (i.e., not symmetrical about any axis).

With regards to implementation, if the edge weight can be treated as a number, and the nodes do not contain any unique/special element or set of elements, a 2-D matrix of numbers (e.g., int[][], double[][], or bool[][]) can be used to represent the 2-D array/matrix of nodes in the graph/network/circuit. Each entry in this 2-D array/matrix would be the weight of the edge connecting the row-indexed node with the column-indexed node. If a pair of nodes (i, j) (indicated as an entry array[i][j] in the 2-D array/matrix) is not connected by an edge, the entry shall be filled with the maximum value for the chosen number-based data type, such as ULLONG_MAX. Here, ULLONG_MAX is analogous to infinity, which means that no connections exists between node *i* and node *j*. This representation can be extended to multigraphs by adding another container to store multiple edges (or pointer references to edges).

Another implementation style: If the node does not contain specific information, but the edge contains various information, the node's ID needs to be uniquely mapped into [1, n]; uniquely map the node's ID into the range 1 to *n*, inclusive, without conflicts (i.e., mapping multiple nodes' IDs into the same integer between 1 and *n* is forbidden). This mapping, via the dictionary ADT, allows edges (or references to edge objects) to be stored in a **2-D matrix of edges (or references to edge objects)** \\cite[pp. 627]{Goodrich2013}. Here, **if no edge connects a given pair of nodes *i* and *j*, the entry array[i][j] shall point to *NULL*...** \\cite[pp. 627]{Goodrich2013}. This representation also can be extended to multigraphs by adding another container to store multiple edges (or pointer references to edges).

Yet another implementation style: If the node and edge contain various sets of information, a separate container of node objects is needed to augment information stored in a 2-D matrix of edge objects. Once again, if no edge connects a given pair of nodes *i* and *j*, the entry array[i][j] shall point to *NULL*. It is difficult to extend this representation to multigraphs.

Compared to the edge list, and just like the adjacency list, the adjacency matrix adds extra information to **enable adjacent nodes (connected by an edge, between pairs of nodes) to be found in constant time, worst-case O(1) access** \\cite[pp. 605]{Goodrich2011} \\cite[pp. 627]{Goodrich2013}.

Computational space complexity: **O(|V|^2)** \\cite[pp. 606]{Goodrich2011} \\cite[pp. 600]{Goodrich2010}.





### Adjacency Map

It is **very similar to the adjacency list representation, except that a map is used as a secondary container (instead of a list) to store incident edges for each node. For a given incident edge of a given node, the adjacent node is used as the key for that incident edge (value)**, in the (key,value) pair for maps. This **allows a given edge (u,v) to be accessed in O(1) time** \\cite[pp. 627]{Goodrich2013}.

Computational space complexity: **O(|V| + |E|)** \\cite[pp. 627]{Goodrich2013}.




### Edge List

+ **Keep an unordered list of all edges** \\cite[pp. 627]{Goodrich2013}.
+ **Difficult to find a given edge, *(u,v)*...** \\cite[pp. 627]{Goodrich2013}.
+ **Difficult to find a set of all edges incident to a node *v*...** \\cite[pp. 627]{Goodrich2013}, which is important for deletion or modification of the node *v*
+ *|E| \approx |V|^{2}*
+ Number of edges in a directed graph: *n(n - 1)*.
+ Number of edges in a undirected graph: *\frac{n(n - 1)}{2}*.
+ *|E| \subseteq V \times V \dots* list of lists 

See \\cite[Figure 14.4, pp. 628]{Goodrich2013} (Python version) for a more intuitive representation/diagram of the edge list structure.

It is simple to implement, but is not an efficient representation of graphs \\cite[pp. 600-601]{Goodrich2011}.

Computational space complexity: **O(|V| + |E|)** \\cite[pp. 602]{Goodrich2011} \\cite[pp. 600]{Goodrich2010}.

The container for nodes *V* can be implemented with a dictionary \\cite[pp. 601]{Goodrich2011}. The container for edges *E* can be implemented with a list or dictionary (or associative array, map, symbol table, or associative container) [https://en.wikipedia.org/wiki/Associative_array], using the element as the key and edge as the value \\cite[pp. 601]{Goodrich2011}. Here, a dictionary is a set/collection of (key,value) pairs; or rather, it is an abstract data type (ADT) that maps keys to values. Dictionary implementations of the containers for *V* and *E* allow searching for specific elements to be more convenient \\cite[pp. 601]{Goodrich2011}.

The main feature of this data structure is that a given edge allows direct access to vertices that it is incident on/upon \\cite[pp. 601]{Goodrich2011}. However, for a given node, it is difficult to determine which edges are incident upon it; this requires enumerating all the edges in *E*. This requires all other functions depending on this "function"/event to on in *O(|E|)*. This is because the container for storing edges is unordered \\cite[pp. 602]{Goodrich2011}.

Note that in *C++*, class templates in the *C++ STL* refer to a group of class templates for the ordered associative containers: set, map, multiset, and multimap [https://en.wikipedia.org/wiki/Associative_containers].


### Types Of Dictionaries For My Graphs

#### Edge map

List/vector of maps


#### Hash maps
+ unordered associative containers
+ associative containers (ordered by keys) tend to be ordered

Value and key comparison: in maps are complicated.

Accessing elements of a map is more complicated than that of a set. Go to key, then value.

## Additional Information About Data Structures

sets and maps in the C++ STL are typically implemented as binary search trees (BSTs)\...


## Design of Node class and Edge class for Directed Graph



#### Node class (Goodrich2011, pp. 599)
+ Fields
	+ int node_id
	+ elem store in the node (object???/class)
	+ set\<edge> outgoing_edges
	+ set\<edge> incoming_edges
	+ \<set> outgoing_edges and \<set> incoming_edges avoids duplicate copies of an edge with the set container. However, multigraphs are still supported since duplicates are determined solely by the edge ID. This is implies that parallel edges between *u* and *v* can exist.
		
		Enable implementation of hypergraphs, where an edge can connect any number of nodes (greater than one).
		
		Specifically, for directed graphs representing logic circuits, a directed hyperedge must have only one source node, and have at least one destination node. The number of destination nodes for a directed hyperedge must be a finite number. Directed hyperedges with multiple source edges are not allowed.
		
			position in *V*.
+ Functions
	+ set\<edge> get_incident_edges() [**defined/not implemented**]
		
		Return incoming_edges *\cup* outgoing_edges.
	+ set\<edge> get_incoming_edges() [**defined/not implemented**]
	+ void add_set_of_incoming_edges(set\<edge> se) [**defined/not implemented**]
	+ void add_incoming_edge(edge e) [**defined/not implemented**]
	+ void remove_incoming_edge(int nodeid) [**defined/not implemented**]
	+ void remove_incoming_edge(edge e) [**defined/not implemented**]
	+ set\<edge> get_outgoing_edges() [**defined/not implemented**]
	+ void add_set_of_outgoing_edges(set\<edge> se) [**defined/not implemented**]
	+ void add_outgoing_edge(edge e) [**defined/not implemented**]
	+ void remove_outgoing_edge(int nodeid) [**defined/not implemented**]
	+ void remove_outgoing_edge(edge e) [**defined/not implemented**]
	+ bool is_adjacent_to(node v) [**defined/not implemented**]
	
		Return true iff this node *u* and *v* are adjacent.
	+ elem get_element()
	+ void set_element(elem m)
	+ int get_node_ID() [**defined/not implemented**]
	+ void set_node_ID(int nid) [**defined/not implemented**]



#### Edge class (Goodrich2011, pp. 599)
+ Fields
	+ values stored in the interconnect, which can be an object or a set of fields.

			position in *E*.
			unsigned long long int weight
	+ set\<node> destination_nodes
	+ set\<node> source_nodes

+ Functions
	+ set\<node> get_destination_nodes()
	
		Return set of destination node(s)\.
	+ bool is_destination_node(node v)
	+ void set_destination_node(node v)
	+ set\<node> get_source_nodes()
	
		Return set of source node(s)\.
	+ bool is_source_node(node v)
	+ void set_source_node(node v)
	+ set\<node> get_opposite_nodes(node v)
	
			If (v = source node),
				return destination nodes.
			Else If (v = destination node),
				return source node.
			Else,
				node is neither a source nor destination node.
				throw an error/exception. Or, return empty set.
	+ bool is_adjacent_to(edge f)

			Return true if this/current edge *e* is adjacent to edge *f*.
			Check if a destination node of this edge is the source node of edge f.
			Or, check if a source node of this edge is the destination node of edge f.
	+ bool is_incident_on(node v)

			Return true if current edge is incident on *v*.
			Check if node v is a source/destination node of this edge.
	+ unsigned long long int get_edge_weight();

		Return the weight of the edge.
	+ void set_edge_weight(unsigned long long int wt);
	
		Set the weight of the edge to wt.
	+ int get_edge_id()

		Get the ID for the edge.
	+ void set_edge_id(int temp_id)
	
		Set the ID for the edge.

+ If I do not use an edge class, I cannot represent information about an edge without using a pair or a struct. Hence, I used a class for representing the edges.





#### Graph class
+ Fields
	+ set\<node> nodes
	+ set\<edge> edges
	+ bool hypergraph_flag
	
		Boolean flag to indicate if this graph is a hypergraph, which has hyperedges that can connect any number of nodes (greater than one).
	+ bool multigraph_flag
	
		Boolean flag to indicate if this graph is a multigraph, which allows multiple edges between any pair of nodes/vertices and self-loops.
		
	**hypergraph_flag** and **multigraph_flag** shall be kept as public static variables of the directed graph class. 
+ Functions
	+ set\<node> get_nodes()
	+ set\<edge> get_edges()
	+ node get_node(int node_id)
	
		Return node (in the graph) with the ID node_id, or an invalid node (no connections to other nodes)
	+ edge get_edge(node u, node v)
	
		Return edge *(u,v)* if edge from node *u* to node *v* exists. Else, return *NULL*.
	+ node insert_node(elem x);
	
			Insert node into set<node> nodes.
	
		Return node storing element *x*
	+ edge insert_edge(node v, node w, elem x)
	
			If (*v = w*),
				return NULL (because self-loops are not allowed).
					[Note that this if-statement is executed if I forbid self-loops.]
			Else,
				return new directed edge from node *v* to node *w*, storing element *x*.

	+ bool remove_node(node v)
	
			Remove incoming edges to node.
			Remove outgoing edges from node.
			Remove node v from set\<node> nodes.


		Remove node *v* and all its incident edges.
		
	+ bool remove_edge(edge e)
	
			For the source node(s), remove pointer to edge e from the outgoing_edge set.
				That is, from the set of source nodes, visit each source node.
				For each source node, search its outgoing_edge set for a pointer to edge e.
				If and when edge e is found, remove edge e from the outgoing_edge set.

			For the destination node(s), remove pointer to edge e from the incoming_edge set. 
				That is, from the set of destination nodes, visit each destination node.
				For each destination node, search its incoming_edge set for a pointer to edge e.
				If and when edge e is found, remove edge e from the incoming_edge set.
				
			Remove edge e from set\<edge> edges.

	
		Remove edge *e*.
		
	+ unsigned long long int node_count()
	+ unsigned long long int edge_count()
	+ unsigned long long int out_degree(node v)
	
		Return the out-degree of node v. If v is an invalid node, return INT_MAX
	+ unsigned long long int in_degree(node v)
	
		Return the in-degree of node v. If v is an invalid node, return INT_MAX
	+ set\<edge> outgoing_edges(node v)
	
		Return set of outgoing edges for the node v. Else, return empty set.
	+ set\<edge> incoming_edges(node v)

		Return set of incoming edges for the node v. Else, return empty set.
	
	















References:
Goodrich2011
	Michael T. Goodrich, Roberto Tamassia, and David M. Mount, "Data Structures and Algorithms in C++," Second Edition, John Wiley & Sons, Inc., Hoboken, NJ, 2011.

Goodrich2013
	Michael T. Goodrich, Roberto Tamassia, and Michael H. Goldwasser, "Data Structures and Algorithms in Python," John Wiley & Sons, Inc., Hoboken, NJ, 2013.








Bibliography (not referenced):
Drozdek2001
	Adam Drozdek, "Data Structures and Algorithms in C++," Second Edition, Brooks/Cole, Pacific Grove, CA, 2001.

#	Note From The Author(s)

	This document is written by Zhiyang Ong for documenting the graphs that he is designing and implementing.

	The MIT License (MIT)

	Copyright (c) <2015> <Zhiyang Ong>

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.








