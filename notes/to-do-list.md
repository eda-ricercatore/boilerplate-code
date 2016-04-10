# To-Do List for Developing my Boilerplate Code Base


- Develop *Python* script to ensure that benchmark repository exists.
	Ensure that each benchmark in the benchmark repository is valid. 
	+ Instead of making system calls (for UNIX-like operating systems)
		to uncompress files, I can use Python commands/functions to
		do that.
	+ Find out if the file handler/stream obtained from the Python
		command/function to download a file can be used to uncompress
		files in Python, instead of having to obtain the path to that
		file (so that I can use a Python command/function to
		uncompress it). 

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






















