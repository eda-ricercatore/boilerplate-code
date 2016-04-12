#!/usr/bin/python

"""
	This Python script is written by Zhiyang Ong to archiving and
		unarchiving (i.e., unpacking archive files), and compressing
		and decompressing, files in the following data compression
		techniques (and associated file formats):
		- TAR (Tape ARchive), or tar balls.
		- tar balls in Gzip'ed (or gzipped) format; .tar.gz or tgz.
			Or, GZIP Compressed Tar Archive files.
		- bzip2 compressed files.
		- bzip2 tar balls

	Approaches, which I have considered, to do this:
		- Use UNIX commands via "system call"s to archive/unarchive 
			and compress/decompress files.
		- Use Python functions to archive/unarchive and
			compress/decompress files.

	Use "git reset HEAD~1" to reset last commit.




	Notes:
		The following references indicate the mode arguments for
			file operations in Python.
			- \cite{Allen2016}
			- \cite{Wentworth2012a}
			- cite{Mohtashim2016}
		These mode arguments are indicated in single characters (for
			ASCII/text/non-binary file formats), or double characters
			(appended by 'b', for binary file formats).
		Alternatively, a "+" sign can be appended to these mode
			arguments to enable read and write.
		The single characters are for the following file operations,
			in non-binary file formats.
			'r'	-	Read operations
			'w'	-	Write operations; for non-empty files, it would
					overwrite data in the existing file. 
			'a'	-	Append operations; write operations append data
					at the end of the file.
			'x'	-	"Exclusive creation" mode \cite{Holscher2016}
		The multiple characters are for the following file
			operations.
			'rb' -	Read operations for binary files.
			'r+' -	Read and write operations.
			'rb+' -	Read and write operations, for binary files.
			'wb' -	Write operations for binary files.
			'w+' -	Read and write operations.
			'wb+' -	Read and write operations, for binary files.
			'ab' -	Append operations for binary files.
			'a+' -	Read and append operations.
			'ab+' -	Read and append operations, for binary files.
			
			
		For write operations, if the file exists, the file is
			overwritten. Else, create a new file for writing.
			
		When the 'append' operation is carried out, if the file
			exists, the file pointer is placed at the end of the file.
		Else, a new file is created for read and write operations.
		That is, the file pointer is placed at the beginning of the file.

	References:
		\cite{Allen2016}
		\cite{Holscher2016}
		\cite{Mohtashim2016}
		\cite{Wentworth2012a} 











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
#	Function to decompress/gunzip Gzip'ed files.
from gzip import open
#	Function to copy file objects, at a high level.
#from shutil import copyfileobject
#	Function to decompress bzip2'ed files.
#from bz2 import open
#from bz2 import readline
#from bz2 import read
from bz2 import BZ2File, decompress
#import bz2
from subprocess import call
#	Function to untar tar balls.
#from tarfile import open, extractall
import tarfile
#from zipfile import extractall

#	=============================================================

#	Preamble.

#	Names of archived and/or compressed files. 
ispd2013_contest_benchmarks_most = "ispd2013.tgz"
ispd2013_contest_benchmarks_most_tar = "ispd2013.tar"

ispd2013_contest_benchmarks_netcard = "netcard.tgz"
ispd2013_contest_benchmarks_netcard_tar = "netcard.tar"

ispd2013_contest_benchmarks_final = "ispd2013_final.tar.bz2"
ispd2013_contest_benchmarks_final_tar = "ispd2013_final.tar"

#	Relative paths to directories.
boilerplate_code_dir = "/Applications/apps/others/comune/lamiera-per-caldaie/binaries"
current_working_directory = "."
path_to_benchmark_repository = "../benchmarks/"
ispd_2013_contest = "ispd2013"
path_to_ISPD_2013_contest_benchmark = path_to_benchmark_repository + ispd_2013_contest
benchmark_subdir_in_boilerplate_code_dir = "/Applications/apps/others/comune/lamiera-per-caldaie/benchmarks/extra/"

#	=============================================================

#	Print the header banner for the script.
print "============================================================="
print "==	Decompress and unarchive selected benchmarks for the"
print "	boilerplate code base."

#	Go to the directory where the benchmarks are located.
chdir(benchmark_subdir_in_boilerplate_code_dir)

#	Check if the archived/compressed files are in the directory.
if not isfile(ispd2013_contest_benchmarks_most):
	print "	==>	The set of most benchmarks for the ISPD 2013 contest"
	print "		isn't available in this directory."
if not isfile(ispd2013_contest_benchmarks_netcard):
	print "	==>	The netcard benchmark for the ISPD 2013 contest is not"
	print "		available in this directory."
if not isfile(ispd2013_contest_benchmarks_final):
	print "	==>	The final set of benchmarks for the ISPD 2013 contest"
	print "		is not available in this directory."

"""
	Processing ".tgz" files, which are Gzip compressed tar balls,
		and bzip2 compressed tar balls.
"""

#	Decompress Gzip compressed tar balls.
#print "	>>	Decompress Gzip compressed tar balls."
"""
with open(ispd2013_contest_benchmarks_most, 'rb') as most_fh_gzip:
	with open(ispd2013_contest_benchmarks_most_tar, 'wb') as most_fh_tar:
#		copyfileobject(most_fh_gzip, most_fh_tar)
		most_fh_tar.write(most_fh_gzip.read())
		most_fh_gzip.close()
		most_fh_tar.close()

with open(ispd2013_contest_benchmarks_netcard, 'rb') as netcard_fh_gzip:
	with open(ispd2013_contest_benchmarks_netcard_tar, 'wb') as netcard_fh_tar:
		netcard_fh_tar.write(netcard_fh_gzip.read())
		netcard_fh_gzip.close()
		netcard_fh_tar.close()
"""


"""
#	The following statement requires a compressed string in binary format.
input_string_in_binary = b"This is a string."
output_string_in_binary = compress(input_string_in_binary)
...
output_string_in_binary = decompress(input_string_in_binary)
"""

#	Decompress bzip2 compressed tar balls.
#print "	>>	Decompress bzip2 compressed tar balls."
#call(["tar", "xvfj", ispd2013_contest_benchmarks_final])






#	Data stream is invalid.
#ispd2013_contest_benchmarks_final_tar = decompress(ispd2013_contest_benchmarks_final)

"""
	"Un"-tar tar balls (or tar archive files).

	This method can directly uncompress and unarchive Gzip and bzip2
		compressed tar balls.
"""
#print "	>>	'Un'-tar tar balls (or tar archive files)."
print "	>>	Uncompressing and unarchiving Gzip & bzip2 compressed tar balls."

tar_file_m = tarfile.open(ispd2013_contest_benchmarks_most)
tar_file_m.extractall()
tar_file_m.close()

tar_file_n = tarfile.open(ispd2013_contest_benchmarks_netcard)
tar_file_n.extractall()
tar_file_n.close()

tar_file_f = tarfile.open(ispd2013_contest_benchmarks_final)
tar_file_f.extractall()
tar_file_f.close()





#	Check if the decompressed and unarchived files are correct.







#	============================================================

print "============================================================="
print "==	Finished decompress and unarchive selected benchmarks"
print "	for the boilerplate code base."
