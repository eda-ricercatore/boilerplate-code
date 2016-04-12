/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * violated_assertion class:
 * Class that extends the std::exception class, and indicates that
 *	an assertion has been violated.
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
#include "violated_assertion.hpp"
using namespace std;

violated_assertion::violated_assertion() {
	print_err_msg();
}
		

violated_assertion::violated_assertion(string error_message) {
	print_err_msg();

	cout << error_message << endl;
}

void violated_assertion::print_err_msg() {
	cerr << "==u	An assertion has been violated." << endl;
}