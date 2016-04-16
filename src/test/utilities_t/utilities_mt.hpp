/**
 * Test/Utilities_t package:
 * Submodule of Test package to test classes in the Utilities package.
 *
 * utilities_mt class:
 * Class that tests the utilities package.
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
// Utilities module
#include "../../utilities/printer.hpp"
#include "printer_ut.hpp"
#include "../../utilities/violated_assertion.hpp"
#include "violated_assertion_ut.hpp"
#include "../../utilities/violated_precondition.hpp"
#include "violated_precondition_ut.hpp"
#include "../../utilities/violated_postcondition.hpp"
#include "violated_postcondition_ut.hpp"
#include "../../utilities/file_io.hpp"
#include "file_io_ut.hpp"
#include "../../utilities/conversion_alphanumeric.hpp"
#include "conversion_alphanumeric_ut.hpp"


// Import "test" classes from the "sandbox".
//#include "../../sandbox/classes/simple_template.hpp"

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>

#ifndef __UTILITIES_MT_H
#define __UTILITIES_MT_H
using namespace std;

// ==================================================================

class utilities_mt {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		utilities_mt();

		// ----------------------------------------------------------

		// Function to test different classes in the Utilities package.
		static void test_utilities();
};
#endif
