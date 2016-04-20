# To-Do List for Developing my Boilerplate Code Base


- Refactor and check the following files:
	+ /Applications/apps/eda/boilerplate-code/src/sandbox/python-code/get-date-time.py
	+ /Applications/apps/eda/boilerplate-code/scripts/decompress_files.py
	+ /Applications/apps/eda/boilerplate-code/scripts/experimental_preparations.py
	+ /Applications/apps/eda/boilerplate-code/scripts/setup_benchmarks.py
	+ /Applications/apps/eda/boilerplate-code/notes/miscellaneo/software-dependencies.md
	+ /Applications/apps/eda/boilerplate-code/src/sandbox/python-code/for-loop-test.py
	+ /Applications/apps/eda/boilerplate-code/src/sandbox/makefile
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+
	
	
- Develop *Python* script for automated regression testing and backing
	up of logfiles from these automated regression tests and output
	files from the software.

- Determine how to back up large files, from automated regression
	testing and output files of my EDA and formal verification tools.

  I can only keep so many files from automated regression tests and
	past experimental runs, in GitHub or elsewhere.

  Therefore, I should only keep files pertinent to good experimental
  	results.

- Refactor the Utility package
	+ Place "include guards above your includes"
		Reference: sdsmith, comment to the question 'Why is the discrepancy in these two cases of using C++ templates?,' Stack Exchange Inc., New York, NY, March 30, 2016. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/q/36319028/1531728}; March 30, 2016 was the last accessed date \cite{sdsmith2016}.
	+ Add "const" to all the accessor functions in the classes.
		Add "const" at the end of the function declaration
		(in the header file).
	+ Clean up the class for converting numbers to strings.
	+ Test the performance measurement class to determine which
		method is better for measure the temporal performance of
		the implemented methods.
		That is, try different ways to determine how long does it
		take to implement each function.
		Report which method is the best way of measuring the
		temporal performance of the implemented methods.

- Develop *R* script to process results from automated regression
	testing and experimentation.
- Test graph module.
- Test parser module.
	+ Use ISPD contest parser.
	+ Implement with:
		- flex++ (part of flex???)/bison (also, try bison++, or bisonc++)
		- Boost parser framework, *Spirit Parser Framework* (Spirit2???)
		- Boost parser framework, *AXE*
		- Ragel???
		- ANTLR3, which supports C++. ANTLR4 doesn't support C++.
		- lex/yacc
		- Quex???
		- lexertl???
		- APG???
		- Dragon??? GPL-based.
		- PEGTL???
		- Some other parser generator
		- Ignore *Java*-based parser generator, such as ???ant???
		- LLVM??? No.
	+ The compiler front-end (or parser), with output, is the
		front-end of a given EDA tool.
	+ The compiler front-end (or parser), without output, is the
		check_benchmark feature for my EDA software development
		environment.
		- That is, it is meant to validate each benchmark, and warn
			the EDA software developer(s) of any invalid benchmark.
		- Any benchmark that does not conform to the industry standard
			of a given computer language (e.g., a HDL), based on its
			*Language Reference Manual* (or equivalent), is reported
			to the EDA software developer(s).
- Do initial testing with stub classes.

- Refactor other packages.
	+ Add "const" to all the accessor functions in the classes.












- Develop STA and SSTA code in the boilerplate code base.
- Fork the code base for the STA and SSTA into separate repositories.
	+ The code base for the STA and SSTA timers should be dependent
		on the boilerplate code base.
- Finish the robust linear programming test cases.
	- Finish the testing linear programming engine.



- Implement gate sizing, threshold voltage assignment, and
	adaptivitiy assignment engine.



- **Whenver I commit code, I should do automated regression testing.**
- Use *make test* for automated regression testing.
- Use *make torture* for automated regression testing of the EDA tool,
	the boilerplate code that the EDA tool uses, and the "micro" test
	suites in the *sandbox*.

- Get ".gitignore" files for:
	+ Scala
	+ Ruby
	+ R
	+ Perl
	+ OCaml
	+ LabVIEW
	+ Haskell
	+ Fortran
	+ Erlang
	+ Clojure
- Obtained


# Doxygen Shortcuts



- \brief		: Brief description of something.
- \sideeffect	: Side effect(s) of a function or subset of a code 
					block.
- \internal		: Comments in the source code that is available only
					to the software development team that I am
					working/collaborating with.
- \todo			: To-do list of the software project, which is the
					boilerplate code base.
- \test			: Indicate the test(s) case that I am developing.
- \bug			: Bug that I found and has not been fixed.
- \deprecated	: C++ function/macro/variable/constant that has been
					deprecated.
- \cite			: For using BibTeX (+ LaTeX) to reference my source
					code.
- \include		: Code that I included from elsewhere.
- \dontinclude	: Code that I do not want to include, from elsewhere.
- \image		: Figures to be added to the documentation.
- \class		: Indicate that this is a class.
- \msc			: Definition of message sequence charts in the
					comments (in the source code).
- \callgraph
- \hidecallgraph	: Create the call graph for this function, place
						in the (source) code.
- \dotfile		: Include figures of graphs/networks via Graphviz.
- \mscfile		: Include figures of graphs/networks via message
					sequence charts.
- \diafile		: Include figures of graphs/networks via Dia.
- \startuml


Reference: /Applications/apps/others/comune/lamiera-per-caldaie/binaries/doxygen.config






#	Research Needs from the Semiconductor Research Corporation

Research needs from the Semiconductor Research Corporation are referenced as follows.

##	Referencing Research Needs in Electronic Design Automation

###	Needs in Verification

\cite{Joyner2016} and \cite{Yeh2016} indicate research needs that have to (or should) be addressed

###	Needs in Electronic System-Level Design

\cite{Yeh2016} indicated the research needs in ESL design:
- Design space exploration:
	+ S1.1, Especially for new memory devices, packaging options, 
		interconnect technologies.  
	+ S1.2, Run-time/Online solutions for adaptive heterogeneous 
		systems.
	+ S1.3, High-level synthesis for AMS/RF circuits and systems.
		* For SystemC-AMS
		* For AMS/RF extensions to Chisel. Requires creation of a new HDL.
	
##	Unmet Research Needs

From \cite{Yeh2016}, the unmet research needs are:
- **S1.4, Design space exploration with different memory devices/types**
	+ Require development of compiler for RISC-V ISA.
	+ Require extension of gem5 to support RISC-V ISA.
- **S2.1, ESL hardware/software co-validation**
- **S2.3, Rapid and effective tur-around design flows, via IP blocks.**
	+ Use interface synthesis.
	+ Use communication synthesis.
	+ Based on composable platform- and contract- based design; see composability.
	+ See https://en.wikipedia.org/wiki/Composability.
	+ Also, search for "contract-based design".


#	Background Information on Software Porting

This boilerplate code base is ported from: https://github.com/eda-globetrotter/lamiera-per-caldaie.

I have to port the software from my *eda-globetrotter* GitHub account to my *eda-ricercatore* GitHub account. This is because I had exceeded the maximum limits for free GitHub accounts, via Git Large File Storage (LFS).








#	Author Information

The MIT License (MIT)

Copyright (c) <2016> <Zhiyang Ong>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.

