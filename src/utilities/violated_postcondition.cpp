/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * violated_postcondition class:
 * Class that extends the std::exception class, and indicates that
 *	a postcondition has been violated.
 *
 * Exceptions can be thrown and caught to deal with the problem,
 *	while assert statements will terminate the program.
 *
 * 
 *
 *
 * Copyright	(C)	<2010-2011>	<Zhiyang Ong>
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since January 1, 2011
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>
#include "violated_postcondition.hpp"
using namespace std;

violated_postcondition::violated_postcondition() {
	print_err_msg();
}
		

violated_postcondition::violated_postcondition(string error_message) {
	print_err_msg();

	cout << error_message << endl;
}

void violated_postcondition::print_err_msg() {
	cerr << "==u	A postcondition has been violated." << endl;
}