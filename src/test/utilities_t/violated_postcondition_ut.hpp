/**
 * Test/Utilities_t package:
 * Submodule of Test package to test classes in the Utilities package.
 *
 * violated_postcondition_ut class:
 * Class that tests the violated_postcondition class.
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
 */

// Import Header files from the other modules of lamiera-per-caldaie.
#include "../../utilities/violated_postcondition.hpp"

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>

#ifndef __VIOLATEDpostcondition_UT_H
#define __VIOLATEDpostcondition_UT_H
using namespace std;

// ==================================================================

class violated_postcondition_ut {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		violated_postcondition_ut();

		// ----------------------------------------------------------

		// Function to check if the violated_postcondition exception works
		static void test_violated_postcondition();
};
#endif