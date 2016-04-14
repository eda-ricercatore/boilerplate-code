#!/usr/bin/python

"""
	This Python script is written by Zhiyang Ong to set up the
		computational environment for "in silico"/computational
		experiments.

	@author Zhiyang Ong
	@version 1.0
	@since 1.0: April 12, 2016.


	Synopsis:
		./experimental_preparations.py


	Summary:
		Check if the set of benchmarks for experimentations with
			my EDA, or formal verification, tool is there.
		If the benchmarks are not available for experimentation,
			download the benchmarks from The Internet, uncompress
			and unarchive the benchmarks-containing compressed
			tar balls.
		Check if the benchmarks are valid.
			If the benchmarks are invalid, report this existence of
				invalid benchmarks.
		Create a logfile to record a transcript of the Terminal
			session during experimentation.
		Store the logfile and output file for each experiment in
			another repository (of such files).




	Since GitHub has restrictions on the memory size of free GitHub
		accounts, I cannot download large benchmarks for conducting
		experiments for EDA and formal verification tools that I
		develop.
	Hence, users of my EDA and formal verification tools should set
		up a benchmark repository, and place their sets of EDA, or
		formal verification, benchmarks in that location/path.
		
	
	
	Firstly, it checks if the benchmark repository exists.
	If not, create a directory for the benchmark repository.

	Secondly, it checks if the set of benchmarks are there.
	If not, download the set of benchmarks to the benchmark
		repository.

	Thirdly, parse the benchmarks to validate the benchmarks.
	That is, check if the benchmarks are valid. 

	Fourthly, check if evaluation scripts are available for each
		set of benchmarks.
	If not, download the required evaluation scripts (if any).


This logfile shall be named according for the following
				format.

	[[month]-[date]-[year]-[time]-[Name of software]-logfile.text]

			This logfile shall be stored in:
	[prefix of path]/boilerplate-code/binaries/logfile_db/[[month]-[year]]/

		Output files of the EDA, or formal verification, software
			shall be 













	Notes:
		The solution from [Damian2010] manually enumerates all files
			and directories in the specified directory. This is slow
			and inefficient compared to the use of functions from
			"The Python Standard Library".
		The following solutions cannot work on my software
			development environment:
				[Zaslavsky2009]




	References:
	[Boissinot2009]
		Benoit Boissinot, answer to the question ``Count number of files with certain extension in Python,'' Stack Exchange Inc., New York, NY, August 24, 2009. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/1321138/1531728}; March 31, 2016 was the last accessed date.
	[Damian2010]
		Kristian Damian, answer to the question ``How to count the number of files in a directory using Python?,'' Stack Exchange Inc., New York, NY, April 13, 2010. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/2632298/1531728}; March 31, 2016 was the last accessed date.

	\cite[The Python Standard Library: \S21 Internet Protocols and Support: \S21.6 {\tt urllib.request} - Extensible library for opening URLs]{DrakeJr2016b}
		
	[Lowis2009]
		Martin v. L{\"{o}}wis, answer to the question ``Count number of files with certain extension in Python,'' Stack Exchange Inc., New York, NY, August 24, 2009. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/1320744/1531728}; March 31, 2016 was the last accessed date.
	[Luke2011]
		Luke, answer to the question ``How to count the number of files in a directory using Python?,'' Stack Exchange Inc., New York, NY, November 29, 2011. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/8311376/1531728}; March 31, 2016 was the last accessed date.
	[Miranda2015]
		Guillermo Pereira Miranda, answer to the question ``How to count the number of files in a directory using Python?,'' Stack Exchange Inc., New York, NY, July 8, 2015. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/31297262/1531728}; edited on July 8, 2015; March 31, 2016 was the last accessed date.
	[okobaka2012]
		okobaka, answer to the question ``How to count the number of files in a directory using Python?,'' Stack Exchange Inc., New York, NY, May 30, 2012. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/10812604/1531728}; March 31, 2016 was the last accessed date.
	[Zaslavsky2009]
		David Zaslavsky, answer to the question ``Count number of files with certain extension in Python,'' Stack Exchange Inc., New York, NY, August 24, 2009. Available online from {\it Stack Exchange Inc.: Stack Overflow: Questions} at: \url{http://stackoverflow.com/a/1320780/1531728}; March 31, 2016 was the last accessed date.
		







	The MIT License (MIT)

	Copyright (c) <2016> <Zhiyang Ong>

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
"""





#	=============================================================

#	Import packages and functions from the Python Standard Library.

#	To access contents of a directory or switch directories.
#from os import listdir, system, chdir
from os import listdir, chdir, makedirs, walk, remove
"""
	To perform operations related to absolute/relative paths,
		directory names, and file types.
"""
#from os.path import isfile, join, splitexts
from os.path import dirname, abspath, isfile, join, isdir
"""
	To perform system calls and process input arguments to this
		script ; see the "library reference manual" for more details
		\cite[The Python Standard Library - Python 2.7.11 Documentation: 28.1. sys - System-specific parameters and functions]{DrakeJr2014}.
	"argv" is a container/list of input arguments that are provided
		to this script when executed at the command line.
"""
#import subprocess, sys, glob
import subprocess, glob
from sys import argv

"""
	Use the extensible library for WWW access, authentication, and
		other access operations.
	Import function from this library to download a web page or a
		file.
"""
from urllib import urlopen
#from urllib.request import urlretrieve, urlcleanup
#	Function to unarchive tar balls.
#from tarfile import open, extractall
import tarfile

#	=============================================================

#	Preamble.

#	Relative paths to directories.
boilerplate_code_dir = "/Applications/apps/others/comune/lamiera-per-caldaie/binaries"
current_working_directory = "."
path_to_benchmark_repository = "../benchmarks/"
ispd_2013_contest = "ispd2013"
path_to_ISPD_2013_contest_benchmark = path_to_benchmark_repository + ispd_2013_contest
path_to_evaluation_repository = "../evaluation/"
path_to_evaluation_repository_ispd_2013_contest = path_to_evaluation_repository + ispd_2013_contest
#os.path.basename(sys.argv[0])

#	File extensions.
verilog_file_extension = "*.v"
lef_file_extension = "*.lef"
def_file_extension = "*.def"

#	Number of benchmarks used for the ISPD 2013 contest.
number_of_ispd2013_contest_benchmarks = 8

#	URLs of files to download.
url_ispd2013_contest_benchmarks_prefix = "http://www.ispd.cc/contests/13/benchmark/"

filename_ispd2013_contest_benchmarks_most = "ispd2013.tgz" 
url_ispd2013_contest_benchmarks_most = url_ispd2013_contest_benchmarks_prefix + filename_ispd2013_contest_benchmarks_most

filename_ispd2013_contest_benchmarks_netcard = "netcard.tgz"
url_ispd2013_contest_benchmarks_netcard = url_ispd2013_contest_benchmarks_prefix + filename_ispd2013_contest_benchmarks_netcard

filename_ispd2013_contest_benchmarks_final = "ispd2013_final.tar.bz2"
url_ispd2013_contest_benchmarks_final = url_ispd2013_contest_benchmarks_prefix + filename_ispd2013_contest_benchmarks_final
"""
print "most", url_ispd2013_contest_benchmarks_most
print "netcard", url_ispd2013_contest_benchmarks_netcard
print "final", url_ispd2013_contest_benchmarks_final
"""

#	Go to target working directory...
#	Go to the binaries subdirectory of the boilerplate code base.
chdir(boilerplate_code_dir)
#	Print the current working directory.
#print "	pwd=", dirname(abspath(sys.argv[0])),"#boilerplate"

#	=============================================================
#	Function definitions

#	None at the moment.


#	=============================================================

#	Print the header banner for the script.
print "============================================================="
print "==	Begin setting up the benchmark repository for the boilerplate code base."

"""
	Firstly, it checks if the benchmark repository exists.
		If not, create a directory for the benchmark repository.
"""
print "	==>	Checks if the benchmark repository exists."
if not isdir(path_to_benchmark_repository):
	print "		>>	Create a directory for the benchmark repository."
	makedirs(path_to_benchmark_repository)
else:
	print "		>>	The benchmark repository exists."
#	--------------------------------------------------------
print "	==>	Checks if the ISPD 2013 contest benchmark directory exists."
if not isdir(path_to_ISPD_2013_contest_benchmark):
	print "		>>	Create a directory for the ISPD 2013 contest benchmarks."
	makedirs(path_to_ISPD_2013_contest_benchmark)
else:
	print "		>>	The ISPD 2013 contest benchmark directory exists."










#	--------------------------------------------------------
"""
	Secondly, it checks if the complete set of benchmarks for the
		ISPD 2013 contest is there.
	If not, download the set of benchmarks to the benchmark
		repository.
"""
print "	==>	Check if ISPD 2013 contest benchmark directory is complete."
print "		... Checking!"
#	os.listdir(dir_in)
#	os.getcwd()

"""
#	Methods for counting the number of files.
#	From [Luke2011].
dirpath, dirnames, filenames = walk(path_to_ISPD_2013_contest_benchmark).next()
print "Number of regular files in ISPD benchmark subdirectory [Luke2011]:", len(filenames)
#	From [Miranda2015], which is a modification of [Luke2011].
filenames = next(walk(path_to_ISPD_2013_contest_benchmark))[2]
print "Number of regular files in ISPD benchmark subdirectory [Miranda2015]:", len(filenames)
#	From [okobaka2012], which is a modification of [Luke2011] and [Miranda2015].
print "Number of regular files in ISPD benchmark subdirectory [okobaka2012]:", len(walk(path_to_ISPD_2013_contest_benchmark).next()[2])
"""
#print "Number of regular files in ISPD benchmark subdirectory [okobaka2012]:", len(walk(path_to_ISPD_2013_contest_benchmark).next()[2])
#	Remove specific hidden file, created by the operating system's file system.
#	Path to specific hidden file
path_to_hidden_file = path_to_ISPD_2013_contest_benchmark + "/.DS_Store"
#print "Path to hidden file is:", path_to_hidden_file
if isfile(path_to_hidden_file):
	try:
		remove(path_to_hidden_file)
		print "		>>	Hidden file is deleted:",path_to_hidden_file
	except OSError:
		print "Hidden file can't be deleted:",path_to_hidden_file
#	Is there any regular file in the ISPD 2013 contest benchmark directory?
if 0 == len(walk(path_to_ISPD_2013_contest_benchmark).next()[2]):
	print "		>>	No regular file in the ISPD 2013 contest benchmark directory."
	print "		>>	Download the ISPD 2013 contest benchmarks."
	"""
		Method from \cite[The Python Standard Library: \S21 Internet Protocols and Support: \S21.6 {\tt urllib.request} - Extensible library for opening URLs: 21.6.23. Examples]{DrakeJr2016b}
		
		Other methods that I have considered are:
			Requests: http://docs.python-requests.org/en/master/ and https://pypi.python.org/pypi/requests
			
	"""
	try:
		ispd2013_bmk_most_zip, headers_most = urlopen(url_ispd2013_contest_benchmarks_most)
		ispd2013_bmk_netcard_zip, headers_netcard = urlopen(url_ispd2013_contest_benchmarks_netcard)
		ispd2013_bmk_final_zip, headers_final = urlopen(url_ispd2013_contest_benchmarks_final)
		ispd2013_bmk_most_zip.close()
		ispd2013_bmk_netcard_zip.close()
		ispd2013_bmk_final_zip.close()
		urlcleanup()
	except urllib.error.URLError:
		print "		>>	ERROR in downloading ISPD 2013 contest benchmarks."
#	From [Lowis2009].
# Benchmarks in Verilog file format.
number_of_verilog_files = len(glob.glob1(path_to_ISPD_2013_contest_benchmark, verilog_file_extension)) 
print "		>>	Number of Verilog files is:", number_of_verilog_files
# Benchmarks in LEF file format.
number_of_lef_files = len(glob.glob1(path_to_ISPD_2013_contest_benchmark, lef_file_extension))
print "		>>	Number of LEF files is:", number_of_lef_files
# Benchmarks in DEF file format.
number_of_def_files = len(glob.glob1(path_to_ISPD_2013_contest_benchmark, def_file_extension)) 
print "		>>	Number of DEF files is:", number_of_def_files
# Benchmarks in ".txt" file format.
#	From [Boissinot2009].
number_of_txt_files = len([f for f in listdir(path_to_ISPD_2013_contest_benchmark) if f.endswith('.tif') and isfile(join(path_to_ISPD_2013_contest_benchmark, f))])
print "		>>	Number of text files (.txt) is:", number_of_txt_files

#	Check if number of benchmarks for ISPD 2013 contest is correct. 
if number_of_ispd2013_contest_benchmarks != number_of_verilog_files:
	print "!!!	ERROR! Benchmarks in Verilog file format are missing!"
if number_of_ispd2013_contest_benchmarks != number_of_lef_files:
	print "!!!	ERROR! Benchmarks in LEF file format are missing!"
if number_of_ispd2013_contest_benchmarks != number_of_def_files:
	print "!!!	ERROR! Benchmarks in DEF file format are missing!"
if number_of_ispd2013_contest_benchmarks != number_of_txt_files:
	print "!!!	ERROR! Benchmarks in .txt file format are missing!"









#	--------------------------------------------------------
"""
	Thirdly, parse the benchmarks to validate the benchmarks.
	That is, check if the benchmarks are valid. 
"""
print "	==>	Call the check_benchmark feature of the parser."
print "		... Call check_benchmark feature of parser!"
#	\todo
print "		???	To be finished!!!"








#	--------------------------------------------------------
"""
	Fourthly, check if evaluation scripts are available for each
		set of benchmarks.
	If not, download the required evaluation scripts (if any).
"""
print "	==>	Checks if the 'evaluation scripts' directory exists."
if not isdir(path_to_evaluation_repository):
	print "		>>	Create a directory for the 'evaluation scripts'."
	makedirs(path_to_evaluation_repository)
else:
	print "		>>	The 'evaluation scripts' directory exists."
#	--------------------------------------------------------
print "	==>	Checks if the 'evaluation' dir exists for ISPD 2013 contest."
if not isdir(path_to_evaluation_repository_ispd_2013_contest):
	print "		>>	Create dir for 'evaluation' - ISPD 2013 contest."
	makedirs(path_to_evaluation_repository_ispd_2013_contest)
else:
	print "		>>	Evaluation dir for ISPD 2013 contest exists."
#	--------------------------------------------------------
print "	==>	Check contents of 'evaluation' dir for ISPD 2013 contest."
#	\todo
print "		???	To be finished!!!"



#	============================================================

print "============================================================="
print "==	Finished setting up the benchmark repository for the boilerplate code base."
