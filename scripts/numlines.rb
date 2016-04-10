#!/usr/bin/ruby -w

#	This Ruby script is written by Zhiyang Ong to count the number of lines being developed for this software project.

#	The MIT License (MIT)

#	Copyright (c) <2014> <Zhiyang Ong>

#	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

#	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

#	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.





#	=============================================================

"""
	Script to count the number of lines of code in the source
	files.
	
	Types of source files that would be considered include
	@ C++	-- .h, .cpp
	@ Ruby	-- .rb
	@ MATLAB/GNU Octave	-- .m
	@ Java	-- .java
"""

# Current search/working directory: "binaries" directory
#search_dir = Dir.pwd + "\/../scripts"		-- Result should be 650
search_dir = Dir.pwd + "\/.."
# Types of source files
file_extension = [ ".h", ".cpp", ".rb", ".m", ".java" ]
# Number of lines of code written
t_numlines = 0



# -------------------------------------------------------------------

=begin
	Method to remove characters in an absolute path till the last slash.
	
	@param a_path -	Absolute path of filename
	@return Absolute path of the file's/subdirectory's directory
=end
def till_slash(f_path)
	# Remove characters from the absolute path till a "/" is encountered.
	loop {
		# If the last character of the absolute path is "/"
		if f_path[-1].chr == "/"
			# Exit indefinite loop
			break
		end
		
		# Remove a character following the "/" character
		f_path = f_path.chop
	}
	
	# Remove the "/" character
	f_path = f_path.chop
	
	# Return absolute path of the file's/subdirectory's directory
	return f_path
end




# -------------------------------------------------------------------

=begin
	Method to recursively count the number of lines of source code
	written in the directory "s_dir" and its subdirectories
	
	@param s_dir -		The directory to commence recursive enumeration
						of the number of lines of source code.
	@param file_ext -	The set of file extensions considered.
	@param t_numlines -	Number of lines counted thus far.
	@return Number of lines counted thus far.
=end
def count_numlines_in_dir(s_dir, file_ext, t_numlines)
#	puts "############################################################"
#	puts "Current traversed directory: #{s_dir}"
#	puts "Current traversed directory: " + Dir.pwd
	
	# For each file in this directory...
	for i in Dir.entries("#{s_dir}")
#puts "Current file: #{i}"
		temp_i = s_dir.concat("/")
		temp_i = s_dir.concat(i)
#puts "temp_i: #{temp_i}"
		# Is this file a directory?
#		if File.directory?(i)
		if File.directory?(temp_i)
#puts "Directory: #{i}"
#puts "Directory: #{temp_i}"
			# Yes. Does this directory refers to the working or
			# previous directory?
			if temp_i[-1].chr.eql?(".")
				# Yes. Ignore it.
#				puts "		Skip current directory"
			else
				# No. This directory does not refer to the working
				# or previous directory. 
				# Recursively count the number of lines of code in
				# that directory.
#puts "		Processing the directory: #{temp_i}"
#puts "temp_i is: #{temp_i}"
				t_numlines = count_numlines_in_dir(temp_i,file_ext, t_numlines)
				s_dir=till_slash(s_dir)
			end

			s_dir=till_slash(s_dir)
#puts "Then, s_dir is: #{s_dir}"
		# No. Is it a regular file?
#		elsif File.file?(temp_i)
#		elsif File.file?(i) or File.file?(temp_i)
		elsif File.file?(temp_i)
#puts "Regular File: #{i}"
#puts "Regular File: #{temp_i}"
			# For each type of file extension
			for f_ext in file_ext
				# Does this file end with a specified file extension
				if (File.extname(temp_i)).eql?(f_ext)
					# Count its number of lines
					nlines = IO.readlines(temp_i).length
					# Increment number of lines of written code
#puts "==		Current t_numlines: #{t_numlines}"
					t_numlines = t_numlines + nlines
#puts "==		New t_numlines: #{t_numlines}"
					# Print out its filename and number of lines
#					puts "Processing the file: #{temp_i}: #{nlines}"
					# Ignore remaining file extensions
					break
				end
			end

			s_dir=till_slash(s_dir)
#puts "Later, s_dir is: #{s_dir}"

		# Else, ignore files that aren't regular nor directories.
		else
#			puts "File=#{temp_i}=is not processed"
		end
	end

#puts "Numlines till #{s_dir} is: #{t_numlines}"
#puts "------------------------------------------------"
	# Return the total number of lines of written code
	return t_numlines
end



# -------------------------------------------------------------------

# Start counting the number of lines of source code
#puts "Recursively counting the number of lines of source code..."

t_numlines = count_numlines_in_dir(search_dir, file_extension, t_numlines)

#puts ""
puts "Total number of lines of source code: #{t_numlines}"