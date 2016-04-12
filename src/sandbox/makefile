#	This Makefile is written by Zhiyang Ong for build automation of his boilerplate code.

#	The MIT License (MIT)

#	Copyright (c) <2014> <Zhiyang Ong>

#	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

#	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

#	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.









# Makefile for a library of boilerplate code for my C++ -based software projects.
# @author Zhiyang Ong
#
# Project Name: lamiera-per-caldaie

# =============================================================

# Definition of macro flags...
# IMPORTANT NOTE:
# Makefile is written for GNU/Linux 2.0.101, running on a x86_64 (AMD) processor.



# IMPORTANT:: Paths to be modified!!!
# Location of Boost C++ directory
#BOOST_LOC=			~/whatever/boost_1_48_0
BOOST_ROOT=			/Applications/apps/sw_dev_tools-not_gnu/boost/boost_1_59_0
# Location of Intel TBB


# IMPORTANT:: Intel TBB related macros!!!
#TBBLIB=				-ltbb
TBBLOC=			~/whatever/intel_tbb/tbb40_233oss/include
TBBLOC2=		~/whatever/intel_tbb/tbb40_233oss/build/macos_intel64_gcc_cc4.2.1_os10.6.8_release/*.dylib
TBBLOC8=		~/whatever/intel_tbb/tbb40_233oss/build/macos_intel64_gcc_cc4.2.1_os10.6.8_release/libtbb.dylib
#	Set up shell environment of Intel TBB prior to building Lamiera-per-caldaie.
#		1)	This is because Make (for Makefile) is run as a child
#		process in the shell environment. Hence, it cannot run
#		another child process (a grandchild process of the shell
#		environment) to modify the shell environment.
#		2)	Therefore, prior to building Lamiera-per-caldaie, I need to set up
#		the shell environment for Intel TBB. Else, it would not be
#		able to find the dynamic library for Intel TBB. This would
#		cause compilation/build process to fail.
#		3)	In addition, executing Lamiera-per-caldaie requires that the
#		environment for Intel TBB to be properly set up.
#		Reference:
#			theNbomr, answer to question titled "source or dot command not working in makefile," in Forum: GNU Linux Zone: Programming / Scripting, Linux Forums, April 5, 2010. Available online at: http://www.linuxforums.org/forum/programming-scripting/162427-source-dot-command-not-working-makefile.html; last accessed on February 16, 2011.
#
#
#	source ~/whatever/intel_tbb/binary_executable/tbb40_233oss/bin/tbbvars.sh intel64
#	TBBSETUP=		source tbbvars.sh intel64




# Version of g++ used is GCC version 4.5.2
GPLUSPLUS=			g++
COMPILE=			-c
LINK=				-o
RMHG=				hg remove
EXECUTABLE=			./play_in_sandbox				# ./sizer.exe
OBJFILES=			*.o
SOURCE=				*.cpp
HEADER=				*.h
RUBY=				*.rb
JAVA=				*.java
MATLAB=				*.m
TILDE=				*~
PREVDIR=			../
PARALLEL=			-lpthread
HOME=				../
SLASH=				/
# Macros that are useful to help me debug
COMPILATIONSTEPS=	-v
WARNINGS=			-Wall
EFFCPP=				-Weffc++
HARDERRORS=			-Werror
PEDANTIC=			-pedantic
PEDANTICERRORS=		-pedantic-errors
EXTRAWARNINGS=		-Wextra
COMPATIBILITY=		-Wc++-compat
DEBUGGINGINFO=		-g -dA
DEBUGDUMP=			-dD
COREDUMP=			-dH
MEMORYUSAGE=		-dm
MEMORYTIME=			-fdump-tree-all
CPPTIME=			-time
SIMPLEOPT=			-O1
MOREOPT=			-O2
EVENMOREOPT=		-O3
MAXPERFORMANCE=		-fast
SIZEOPT=			-Os
INCLUDE=			-I
DYNDIRINC=			-L
DYNINCLUDE=			-l
#	Used when testing and debugging.
COVERAGE=			-coverage
CPP11=				-std=c++0x
CPP14=				-Wc++14-extensions



# Module containing scripts used for file processing/management
#	and statistical analysis
SCRIPTS=		../../scripts/
# Module that provides classes to support the development and
#	debugging of the software, including Exception classes.
UTILITYPATH=	utilities/
# Module that contains classes for testing concepts
CPPCLASSES=		classes/
# Module for testing concepts about C++ STL.
CPPSTL=			stl/
# Module for testing concepts about C++ STL containers.
STLCONTAINERS=	containers/
# Module for testing concepts about C++ STL multithreading.
MULTITHREADING=	multithreading/
# Module for testing concepts about other C++ STL features.
STLOTHERS=		others/
# Module for testing miscellaneous concepts.
CPPMISC=		misc/


# UNIX commands/utilities that are used
TIME=			time -p
DATE=			date






# =============================================================

# Definition of Target Rules
# Use a FOR loop to sweep through the list of benchmarks when
#	the parse is ready, and do regression testing when the router
#	is done.






#####################################################################
#####################################################################
#	Targets for the sandbox.
#####################################################################






#####################################################################
#	Target for null pointer
#####################################################################
# Build and run C++ program to experiment with null pointers.
null:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	$(GPLUSPLUS)	$(COMPILE)	$(CPPMISC)test_null_ptr.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo
	


#####################################################################
#	Target for empty set
#####################################################################
# Build and run C++ program to experiment with empty sets.
emptyset:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)node.cpp
	@echo === C++ STL Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPSTL)$(STLCONTAINERS)test_empty_set.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo








#####################################################################
#	Target for data types
#####################################################################
# Build and run C++ program to experiment with data types.
dtypes:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	$(GPLUSPLUS)	$(COMPILE)	$(CPPMISC)test_data_types.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo










#####################################################################
#	Target for string
#####################################################################
# Build and run C++ program to experiment with strings.
# Includes 
string:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)string_node.cpp
	@echo === C++ STL Directory
	$(GPLUSPLUS)	$(CPP11)	$(INCLUDE) $(BOOST_ROOT)	$(COMPILE)	$(CPPSTL)$(STLOTHERS)test_string.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo













#####################################################################
#	Target for vector
#####################################################################
# Build and run C++ program to experiment with vector.
vector:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPSTL)$(STLCONTAINERS)test_vector.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo





#####################################################################
#	Target for set
#####################################################################
# Build and run C++ program to experiment with set.
set:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)node.cpp
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)node_swap.cpp
	@echo === C++ STL Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPSTL)$(STLCONTAINERS)test_set.cpp
	#$(GPLUSPLUS)	$(COMPILE)	test_set.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "You daft compiler, stop whinging!!!"
	@echo "-- Mr. David Knight"
	@echo
	@echo "It compiles. Ship it!"
	@echo
	@echo









#####################################################################
#	Target for set
#####################################################################
# Build and run C++ program to experiment with set.
set1:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)node.cpp
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)node_swap.cpp
	@echo === C++ STL Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPSTL)$(STLCONTAINERS)test_set_1.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "You daft compiler, stop whinging!!!"
	@echo "-- Mr. David Knight"
	@echo
	@echo "It compiles. Ship it!"
	@echo
	@echo
















#####################################################################
#	Target for typedef
#####################################################################
# Build and run C++ program to experiment with typedef.
typedef:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)element.cpp
	@echo === C++ STL Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPSTL)$(STLCONTAINERS)test_typedef.cpp
	#$(GPLUSPLUS)	$(COMPILE)	test_set.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "You daft compiler, stop whinging!!!"
	@echo "-- Mr. David Knight"
	@echo
	@echo "It compiles. Ship it!"
	@echo
	@echo




#####################################################################
#	Target for testing function call returns
#####################################################################
# Build and run C++ program to experiment with function call returns.
fcreturn:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPMISC)test_function_return.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "You daft compiler, stop whinging!!!"
	@echo "-- Mr. David Knight"
	@echo
	@echo "It compiles. Ship it!"
	@echo
	@echo



#####################################################################
#	Target for testing "for loop" implementations
#####################################################################
# Build and run C++ program to test "for loop" implementations.
forloop:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPMISC)test_for_loops.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "You daft compiler, stop whinging!!!"
	@echo "-- Mr. David Knight"
	@echo
	@echo "It compiles. Ship it!"
	@echo
	@echo







#####################################################################
#	Target for testing templates. (1)
#####################################################################
# Build and run C++ program to experiment with templates.
template:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPCLASSES)simple_template.cpp
	@echo === C++ Miscellaneous Directory
	$(GPLUSPLUS)	$(CPP11)	$(COMPILE)	$(CPPMISC)test_templates.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP11)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo






#####################################################################
#	Target for testing templates. (2)
#####################################################################
# Build and run C++ program to experiment with templates.
template1:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPCLASSES)try_template.cpp
	@echo === C++ Miscellaneous Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPMISC)test_templates1.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP14)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo




#####################################################################
#	Target for testing templates. (3)
#####################################################################
# Build and run C++ program to experiment with templates.
template2:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPCLASSES)trivial_template.hpp
	@echo === C++ Miscellaneous Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPMISC)test_templates_appended.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP14)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo





#####################################################################
#	Target for testing templates. (4)
#####################################################################
# Build and run C++ program to experiment with templates.
template3:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPCLASSES)merged_template.hpp
	@echo === C++ Miscellaneous Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPMISC)test_templates_merged.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP14)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo


#####################################################################
#	Target for testing templates. (5)
#####################################################################
# Build and run C++ program to experiment with templates.
template4:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	@echo === C++ Classes Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPCLASSES)double_template.cpp
	@echo === C++ Miscellaneous Directory
	$(GPLUSPLUS)	$(CPP14)	$(COMPILE)	$(CPPMISC)test_templates_separate.cpp
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(CPP14)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo






























########################################################################
########################################################################
########################################################################





########################################################################
# BUILD THE SOFTWARE	--	FIX THIS!!!
########################################################################
# Build and test the latest software build 
all:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	@echo === Compiling C++ source code...
	$(GPLUSPLUS)	$(COMPILE)	$(SOURCE)
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(TIME) $(EXECUTABLE)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo







########################################################################
# TEST THE SOFTWARE: UNIT, MODULE, INTEGRATION, AND REGRESSION TESTING
########################################################################
# Build and test the latest software build 
test:
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	@echo + + + + + + + + + + + + + + + + + + + + + + + + + + +
	$(DATE)
	$(TBBSETUP)
	@echo === Compiling C++ source code in the...
	@echo === Utilities Directory
	$(GPLUSPLUS)	$(COMPILE)	$(UTILITYPATH)$(SOURCE)
	@echo === Graph Directory
	$(GPLUSPLUS)	$(COMPILE)	$(GRAPHPATH)$(SOURCE)
	@echo === Parsers Directory
	@echo === Test/Utilities Directory
	$(GPLUSPLUS)	$(COMPILE)	$(TESTPATH)$(TPUTILITIES)$(SOURCE)
	@echo === Test/Graph Directory
	@echo === Test/Parsers Directory
	@echo === Test Directory
	$(GPLUSPLUS)	$(COMPILE)	$(TESTPATH)$(SOURCE)
	@echo === Link the C++ object files...
	$(GPLUSPLUS)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
	@echo === Executing the software...
	$(EXECUTABLE) $(BENCHMARKS)$(STACK1)	$(OPRESULTS)
	@echo
	@echo
	@echo
	@echo
	@echo "The code is rather buggy; use is at own risk."
	@echo "-- Donald Chai"
	@echo
	@echo "Beware of bugs in the above code."
	@echo "I have only proved it correct, not tried it."
	@echo "-- Donald E. Knuth"
	@echo
	@echo
	@echo
	@echo
	more $(NORMALTXT)
	more $(ERRORTXT)















########################################################################
# CLEAN THE TEMPORARY FILES
########################################################################
# Remove all executables, object files, and the output file(s)
clean:
	@echo ===Removing all temporary files...
	$(SCRIPTS)clean_temp_files.rb













########################################################################
# RUN THE PROGRAM
########################################################################
# Run/Execute the program
run:
#	@echo -->Executing the SoFTwaRe...
	



########################################################################
# COUNT THE NUMBER OF LINES OF SOURCE CODE
########################################################################
# Count the number of lines in my source files
# cat *.h *.cpp *.rb *.java *.m | wc -l
numlines:
	@echo == Count the number of lines in my source files
	$(SCRIPTS)numlines.rb









########################################################################
# HELP ME!!!
########################################################################
# The options for make targets are:
help:
	@echo The options are:
	@echo all:_______Compile all source files and link their
	@echo ___________object code, and run the program.
	@echo clean:_____Remove all executables, object files,
	@echo ___________other temporary files, and output files.
	@echo run:_______Execute the program.
	@echo numlines:__Count the number of lines in the source
	@echo ___________code, including header files, and the scripts.
	@echo test:______Test the program.
	







































#	$(GPLUSPLUS)	$(PARALLEL)	$(LINK)		$(EXECUTABLE)	$(OBJFILES)
