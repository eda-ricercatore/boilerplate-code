#!/usr/bin/ruby -w

=begin
	This Ruby script is written by Zhiyang Ong to remove temporary files from the repository.

	The MIT License (MIT)

	Copyright (c) <2014> <Zhiyang Ong>

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
	
	
	References
	[Wikipedia contributors, 2016]
		Wikipedia contributors, ``GCH,'' in {\it Wikipedia, The Free Encyclopedia: Disambiguation pages}, Wikimedia Foundation, San Francisco, CA, January 20, 2016. Available online at: \url{https://en.wikipedia.org/wiki/GCH}; last accessed on March 31, 2016.
=end




#	=============================================================

=begin
	Script to remove all temporary files.
	
	Types of temporary files include:
	@ *~
	@ *.o
	@ *.out
	@ *.exe
	@ output files
=end

# Current search/working directory: "binaries" directory
search_dir = Dir.pwd + "\/.."
#search_dir = Dir.pwd
=begin
	Types of source files.
	
	In [Wikipedia contributors, 2016], the ".gch" "file extension
		[is] used by GCC for precompiled header files".
=end
file_extension = [ ".o", ".out", ".exe", ".sizes", ".timing", ".txt", ".gch" ]



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
	Method to recursively remove temporary files
	
	@param s_dir -		The directory to commence recursive removal
						of temporary files.
	@param file_ext -	The set of file extensions considered.
	@return Nothing
=end
def remove_temp(s_dir, file_ext)	
	# For each file in this directory...
	for i in Dir.entries("#{s_dir}")
		temp_i = s_dir.concat("/")
		temp_i = s_dir.concat(i)
		# Is this file a directory?
		if File.directory?(temp_i)
			# Yes. Does this directory refers to the working or
			# previous directory?
			if temp_i[-1].chr.eql?(".")
				# Yes. Ignore it.
				### IMPORTANT ASSUMPTIONS
				# I assume that only two files end with periods.
				# Other files ending with periods are ignored
			else
				# No. This directory does not refer to the working
				# or previous directory. 
				# Recursively count the number of lines of code in
				# that directory.
				remove_temp(temp_i,file_ext)
				s_dir=till_slash(s_dir)
			end

			s_dir=till_slash(s_dir)
		# No. Is it a regular file?
		elsif File.file?(temp_i)

			# Is this file a temporary backup file?
			if temp_i[-1].chr.eql?("~")
				# Delete the file
				system("git rm -f #{temp_i}")
				begin
					File.delete(temp_i)
				rescue
					#	Do nothing.
				end
			else
				# For each type of file extension
				for f_ext in file_ext
					# Does this file end with a specified file extension
					if (File.extname(temp_i)).eql?(f_ext)
						# Delete the file
						system("git rm -f #{temp_i}")
						begin
							File.delete(temp_i)
						rescue
							#	Do nothing.
						end
						# Ignore remaining file extensions
						break
					end
				end
			end
			
			s_dir=till_slash(s_dir)

		# Else, ignore files that aren't regular nor directories.
		end
	end
end



# -------------------------------------------------------------------

# Start removing temporary files from the working directory
remove_temp(search_dir, file_extension)

=begin
system("git rm test-boilerplate-code")
File.delete("test-boilerplate-code")
=end

system("git rm -f play_in_sandbox")
begin
	File.delete("play_in_sandbox")
rescue
	#	Do nothing.
end

# Remove all generated output files
#system("rm ../outputs/*")
