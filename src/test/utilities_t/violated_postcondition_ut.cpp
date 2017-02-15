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
#include "violated_postcondition_ut.hpp"
#include "../../utilities/printer.hpp"

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>
using namespace std;

violated_postcondition_ut::violated_postcondition_ut() {
	printer::debug_std_err("==tu	Don't instantiate the tester for violated_postcondition");
	printer::debug_std_err("");
}


void violated_postcondition_ut::test_violated_postcondition() {
	printer::set_debugging_mode(true);
	printer::debug_std_op_ln("");
	printer::debug_std_op_ln("");
	try{
		printer::num_test_cases_eval();
		printer::debug_std_op_ln("==tu	Testing: violated_postcondition...");
		throw new violated_postcondition("==tu	>>	Tested: violated_postcondition.");
	}catch(violated_postcondition *err) {
		printer::debug_std_op_ln("==tu	==>	violated_postcondition works.");
		printer::num_passed_test_cases_eval();
	}
	printer::set_debugging_mode(false);
}
