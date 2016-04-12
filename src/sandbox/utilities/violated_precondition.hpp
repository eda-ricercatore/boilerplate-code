/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * violated_precondition class:
 * Class that extends the std::exception class, and indicates that
 *	a precondition has been violated.
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
#include <exception>

#ifndef __VIOLATEDPRECONDITION_H
#define __VIOLATEDPRECONDITION_H
using namespace std;

// ==================================================================

class violated_precondition: public exception {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		violated_precondition();
		// Standard constructor
		violated_precondition(string error_message);

		// ----------------------------------------------------------

		// Print default error message
		static void print_err_msg();
};
#endif