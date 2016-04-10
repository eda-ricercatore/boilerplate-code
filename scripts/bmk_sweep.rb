#!/usr/bin/ruby -w

#	This Ruby script is written by Zhiyang Ong to sweep through all the benchmarks.

#	The MIT License (MIT)

#	Copyright (c) <2014> <Zhiyang Ong>

#	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

#	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

#	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.





#	=============================================================

=begin
	Script to sweep through all the benchmarks.
	Each benchmark is stored in a subdirectory of the "benchmarks"
		directory.
	Hence, it shall run the program, or test suite, with each
		benchmark by traversing each subdirectory that contains
		the required files for each benchmark.
	Each benchmark shall have a structured Verilog netlist, a SDC
		constraints file, and a SPEF parasitics file.
	
	Types of source files that would be considered include:
	@ Verilog	-- .v
	@ SPEF	-- .spef
	@ SDC	-- .sdc
=end

# Location of the benchmarks.
bmk_loc			= "../benchmarks/"
# List of different types of file formats.
file_formats	= [ "verilog", "spef", "sdc" ]
# List of file extensions for different file formats types.
file_extns		= [ ".v", ".spef", ".sdc" ]
=begin
	Other file format(s) and file extension(s) to be parsed.
	
	Do not parse the ".timing" files, since I would not be
		using PrimeTime for static timing analysis.
=end
other_formats	= [ "lib" ]
other_extns		= [ ".lib" ]

# List of benchmarks.
bmk = [ "simple usb_phy", "pci_bridge32", "des_perf", "DMA", "leon3mp" ]
# Other keywords.
slash	= "/"
time	= "time -p"
exe		= "./sizer.exe"

# For each type of file format,
for i in 0..2		# file_formats
	# Test its respective parser with all the benchmark circuits.
	for j in bmk
		# Get the absolute path of the benchmark's file to test it.
		cur_path = bmk_loc + j + slash + j + file_extns[i]
#		puts cur_path

		# Testing the parser.
puts "#{time} #{exe} #{file_formats[i]} #{cur_path}"
		system("#{time} #{exe} #{file_formats[i]} #{cur_path}")
	end
end

# For other file format(s),
for k in other_formats
	# Test it with its respective parser(s).
	# Get the absolute path of the timing file.
	cur_path = bmk_loc + other_formats[0] + slash + "contest.lib"
	system("#{time} #{exe} #{k} #{cur_path}")
end