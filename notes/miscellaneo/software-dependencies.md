#	Software Dependencies

##	Software That I Used For Software Development 

+ Computer Programming Languages
	- C++
+ Scripting Languages
	- Ruby
	- Python
+ Software Development Tools
	- Make
	- Git
	- Git Large File Storage (LFS)
+ Documentation Tools and Computer Typesetting Languages.
	- Doxygen
	- HTML
+ Optimization Engines
	- GLPK
+ Utilities
	- tar
	- gzip/gunzip
	- bzip2/bunzip2
		- bzip2 [a_file]
		- bzip2 [a_set_of_files]
		- bzip2 -c [a_file] > [a_file].bz2
		- bzip2 -d [a_file].bz2
		- bunzip2 [a_file].bz2
		- bunzip2 -c [a_file].bz2 > [a_file]
		- bunzip2 -k [a_file].bz2



### Notes on tar, gzip, and bzip2.
	
These UNIX commands are equivalent.
+ These pair of commands
	- tar -cf file7.tar file4 file5 file6
	- bzip2 file7.tar	
+ tar -cjf file7.tar.bz2 file4 file5 file6
+ tar cjvf etc.tar.bz2 /etc/

These pair of UNIX commands are for compressing and uncompressing *tar balls*. 
+ tar cvf [tar_ball_name] directory/files
+ tar xvf [tar_ball_name]

These pair of UNIX commands are for compressing and uncompressing gzip *tar balls*. 
+ tar cvfz [tar_ball_name] directory/files
+ tar xvfz [tar_ball_name]

These pair of UNIX commands are for compressing and uncompressing bzip2 *tar balls*. 
+ tar cvfj [tar_ball_name] directory/files
+ tar xvfj [tar_ball_name]

These pair of UNIX commands are also for compressing and uncompressing bzip2 *tar balls*. 
+ tar cvfy [tar_ball_name] directory/files
+ tar xvfy [tar_ball_name]

To check the integrity of a compressed file, use the "-t" or "-test" flag with *bzip2* \cite{Farncomb2015}.
E.g., bzip2 -tv [filename].tar.bz2

"The compressed .bz2 file makes use of cyclic redundancy check (CRC) in order to detect errors. The CRC value can be viewed by running bzip2 command with the -vv flag, as shown below" \cite{Farncomb2015}.
E.g., bzip2 -vv [filename]
Here, [filename] refers to an uncompressed file, a set of files, or a directory. 



### Note on Large File Storage in GitHub Repositories

Git Large File Storage (LFS) is recommended for facilitating the inclusion of large files in GitHub repositories. 
E.g., when I try to "*push*" EDA benchmarks that are larger than 50 MB, the following warning is given during the process.

	remote: warning: File benchmarks/extra/ispd2013.tgz is 97.77 MB; this is larger than GitHub's recommended maximum file size of 50.00 MB

E.g., when I try to "*push*" EDA benchmarks that are larger than 100 MB, the following error is produced during the process. This causes the push to fail.

	remote: error: GH001: Large files detected. You may want to try Git Large File Storage - https://git-lfs.github.com.
	remote: error: Trace: 1c41feb66b66b0d5ad5c8a87bc79257e
	remote: error: See http://git.io/iEPt8g for more information.
	remote: error: File benchmarks/extra/ispd2013_final.tar.bz2 is 470.70 MB; this exceeds GitHub's file size limit of 100.00 MB





#	Library Dependencies

##	Boost C++

Installation process:
+	./bootstrap.sh
+	.b2		(or ./bjam)

### Note from the installation process

The following directory should be added to compiler include paths:

    /Applications/apps/sw_dev_tools-not_gnu/boost/boost_1_59_0

The following directory should be added to linker library paths:

    /Applications/apps/sw_dev_tools-not_gnu/boost/boost_1_59_0/stage/lib

\cite{Hogan2007} shows us how to include the Boost C++ Libraries in the compilation step of the software development process.




Reference:
[Hogan2007] Alan J. Hogan, "Including the Boost C++ library in XCode," in his web page {\it Alan J. Hogan: Web Developer, Mac user, and more}, San Francisco, CA, November 27, 2007. Available online at: \url{http://alanhogan.com/code/boost-xcode}; last accessed on November 18, 2015.











#	Note From The Author(s)

This document is written by Zhiyang Ong for documenting the software dependencies of his boilerplate code.
It indicates which software or libraries need to be installed before being used.

The MIT License (MIT)

Copyright (c) <2015> <Zhiyang Ong>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.








