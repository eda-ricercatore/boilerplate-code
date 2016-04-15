#!/usr/bin/python

"""
	This Python script is written by Zhiyang Ong to torture the
		boilerplate code.
	
	It does this by running a set of test cases on the boilerplate.
	
	To ensure that the boilerplate code can also run on the current
		software platform, including the operating system and software
		development libraries (e.g., Boost C++) as well as external
		tools for optimization, verification, validation, and testing.
	That is, test all the miscellaneous test code to try out various
		C++ concepts, C++ libraries, C++ -based tools, and hybrid
		integration of C++ code with code in other computer languages.
	E.g., test the use of integrating C++ and Python using
		Boost Python and SWIG, separately.
	E.g., test the use of using Scala to (partially) automate parser
		generation (or compiler generation).

	Also, as a precautionary measure, ensure that all LaTeX documents
		in the boilerplate code base can be typeset, so that users of
		the boilerplate code base can typeset the documents and view
		the result PDF documents for further information.

	Lastly, it shall remove all temporary files generated in the
		process.










	References:
	[Li2010]	Lihan Li, ``Good way to append to a string,'' Stack Exchange Inc., New York, NY, December 14, 2010. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/questions/4435169/good-way-to-append-to-a-string} and \url{http://stackoverflow.com/q/4435169}; edited by Pratyush Nalam on March 16, 2013; March 16, 2016 was the last accessed date.






	@author Zhiyang Ong
	@version 1.1.
	@since 1.1: April 15, 2016.
	@todo	Finish the for-loop sweep of the UNIX system calls, which
				are Makefile invocations.
	#### TO BE COMPLETED

	The MIT License (MIT)

	Copyright (c) <2016> <Zhiyang Ong>

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
"""


"""
	\todo	Implement the feature to store text output from the
				standard output/error streams as a text file.
			That is, use the command "script [filename]" to record
				data from the standard output stream as a text file.
"""

#	=============================================================

#	Import packages and functions from the Python Standard Library.

#	To access contents of a directory or switch directories.
#from os import listdir, system, chdir
from os import listdir, chdir
"""
	To perform operations related to absolute/relative paths,
		directory names, and file types.
"""
#from os.path import isfile, join, splitexts
from os.path import dirname, abspath, isfile, join
"""
	To perform system calls and process input arguments to this
		script ; see the "library reference manual" for more details
		\cite[The Python Standard Library - Python 2.7.11 Documentation: 28.1. sys - System-specific parameters and functions]{DrakeJr2014}.
	"argv" is a container/list of input arguments that are provided
		to this script when executed at the command line.
"""
import subprocess, sys
from sys import argv


#	=============================================================

#	Print the header banner for the script.

print "============================================================="
print "==	Begin extensive torturing the boilerplate code base."



#	### Modified by Zhiyang Ong, April 15,2016. 
#	Path to the boilerplate code base's binaries subdirectory.
boilerplate_code_dir = "/Applications/apps/eda/boilerplate-code/binaries"
#	Path to the boilerplate code base's sandbox.
sandbox_dir = "/Applications/apps/eda/boilerplate-code/src/sandbox"
#	Path to the boilerplate code base's LaTeX report.
boilerplate_LaTeX_report = "/Applications/apps/eda/boilerplate-code/notes/report"
#	Path to the boilerplate code base's LaTeX guidelines.
boilerplate_LaTeX_guidelines = "/Applications/apps/eda/boilerplate-code/notes/guidelines"


"""
	Methods to execute Linux system calls.

	import os
	os.system("date")
	
	import os
	f = os.popen('date')
	now = f.read()
	print "Today is ", now
	
	import subprocess
	subprocess.call("command1")
	subprocess.call(["command1", "arg1", "arg2"])
"""
#	String appending exercise.
"""
#	This style of printing a set of strings introduces a space character in between strings, whenever a comma used to separate string tokens.
print "boilerplate_code_dir is:::", boilerplate_code_dir, "==="
print "boilerplate_code_dir is###",boilerplate_code_dir,"+++"
#	[Li2010, answer by John Kugelman, December 14, 2010]
temp_str = "boilerplate_code_dir is###"
temp_str += boilerplate_code_dir
temp_str += "+++"
print temp_str
temp_str = []
temp_str.append('boilerplate_code_dir is###')
temp_str.append(boilerplate_code_dir)
temp_str.append('+++')
#		This statement prints a list of tokens instead: print temp_str.
print "".join(temp_str)
"""

"""
	Correct method to print location of the boilerplate code base.	
	It appends string tokens correctly.

temp_str = []
temp_str.append('boilerplate_code_dir is###')
temp_str.append(boilerplate_code_dir)
temp_str.append('+++')
print "".join(temp_str)
"""
temp_str = []
temp_str.append('Boilerplate directory is:')
temp_str.append(boilerplate_code_dir)
temp_str.append('.')
print "".join(temp_str)


#	=============================================================

#	Print the current working directory.
print "	pwd=", dirname(abspath(sys.argv[0])),"#pre"

#	Go to the binaries subdirectory of the boilerplate code base.
chdir(boilerplate_code_dir)
#	Print the current working directory.
print "	pwd=", dirname(abspath(sys.argv[0])),"#boilerplate"
#	Clean the binaries subdirectory of the boilerplate code base.
subprocess.call(["make", "clean"])
#	Test the boilerplate code base.
#subprocess.call('make test')
subprocess.call(["make", "test"])
#	Generate documentation for the boilerplate code base.
#subprocess.call(["make", "doxygeninit"])
subprocess.call(["make", "doxygen"])
#	Check if temporary files are created during testing.
print listdir(boilerplate_code_dir)
#	Clean the binaries subdirectory of the boilerplate code base.
subprocess.call(["make", "clean"])
#	Check if temporary files are removed.
print listdir(boilerplate_code_dir)


#	---------------------------------------------------------
#	Go to the sandbox.
chdir(sandbox_dir)
#	Print the current working directory.
print "	pwd=", dirname(abspath(sys.argv[0])),"#sandbox"
#	Clean the sandbox subdirectory of the boilerplate code base.
subprocess.call(["make", "clean"])
"""
	Test different Make targets of the sandbox.
	
	\todo	Use a FOR loop to sweep through all the Make targets.
"""
subprocess.call(["make", "null"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "emptyset"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "dtypes"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "string"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "vector"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "set"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "set1"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "typedef"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "null"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "fcreturn"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "forloop"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "template"])
subprocess.call(["make", "clean"])

#	Make target "template1" fails. It cannot work.

subprocess.call(["make", "template2"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "template3"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "template4"])
subprocess.call(["make", "clean"])

subprocess.call(["make", "null"])
#	Check if temporary files are created during testing.
print listdir(sandbox_dir)
#	Clean the binaries subdirectory of the boilerplate code base.
subprocess.call(["make", "clean"])
#	Check if temporary files are removed.
print listdir(sandbox_dir)





#	---------------------------------------------------------
#	Go to the subdirectory of the boilerplate code base's LaTeX report.
chdir(boilerplate_LaTeX_report)
#	Print the current working directory.
print "	pwd=", dirname(abspath(sys.argv[0])),"#report"
#	Typeset the LaTeX report for the boilerplate code base.
subprocess.call(["make", "latex"])
#	Check if temporary files are created during typesetting.
print listdir(boilerplate_LaTeX_report)
"""
	Clean the temporary files associated with the boilerplate code
		base's LaTeX report.
"""
subprocess.call(["make", "clean"])
#	Check if temporary files are removed.
print listdir(boilerplate_LaTeX_report)







#	---------------------------------------------------------
#	Go to the subdirectory of the boilerplate code base's LaTeX guidelines.
chdir(boilerplate_LaTeX_guidelines)
#	Print the current working directory.
print "	pwd=", dirname(abspath(sys.argv[0])),"#guide"
#	Typeset LaTeX report for the boilerplate code base's guidelines.
subprocess.call(["make", "latex"])
#	Check if temporary files are created during typesetting.
print listdir(boilerplate_LaTeX_guidelines)
"""
	Clean the temporary files associated with the boilerplate code
		base's LaTeX guidelines.
"""
subprocess.call(["make", "clean"])
#	Check if temporary files are removed.
print listdir(boilerplate_LaTeX_guidelines)




#	Do nothing. NOP.
#sys.stdout.write('')

#	============================================================

print "============================================================="
print "==	End of extensive torture."
