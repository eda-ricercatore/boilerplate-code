#!/usr/bin/python

"""
	This Python script is written by Zhiyang Ong to obtain the
		current date and time.

	@author Zhiyang Ong
	@version 1.0
	@since 1.0: April 14, 2016.


	Synopsis:
		./get-date-time.py


	Summary:
		Print to standard output the current date and time in the
			following formats.

	[[month]-[date]-[year]-[time]-[Name of software]-[logfile].text]
	[prefix of path]/boilerplate-code/binaries/logfile_db/[[month]-[year]]/


	Notes:
	
	\cite[\S8.1.7 strftime() and strptime() Behavior]{DrakeJr2016e}
		and \cite[\S8.1.7 strftime() and strptime() Behavior]{DrakeJr2016b}
		provide a table of directives (e.g., %Y), their meanings,
		examples of their usage and related information.


	References:
		\cite[\S8.1 datetime, from \S8 `Data Types']{DrakeJr2016e}
		\cite[\S8.1 datetime, from \S8 `Data Types']{DrakeJr2016b}			

		[Lundh2014]
			Fredrik Lundh, "The datetime Module," effbot.org, 2014. Available from {\it effbot.org: (the eff-bot guide to) The Standard Python Library} at: \url{http://effbot.org/librarybook/datetime.htm}; April 14, 2016 was the last accessed date.
			












	The MIT License (MIT)

	Copyright (c) <2016> <Zhiyang Ong>

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

	Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
"""

"""
import datetime
import time

now = datetime.datetime.now()

print now
print now.ctime()
print now.isoformat()
print now.strftime("%Y%m%dT%H%M%S")
"""

import datetime 



now = datetime.datetime.now()

print now
print now.ctime()

current_month = now.month
current_day = now.day
current_year = now.year
"""
	now.time would produce the method call (for time) as a string.
	now.date would produce the method call (for date) as a string.
"""
current_time = now.time
current_hour = now.hour
current_minute = now.minute
current_second = now.second
current_microsecond = now.microsecond

filename = str(current_month)+"-"+str(current_day)+"-"+str(current_year)
filename = filename+"-"+str(current_hour)+"-"+str(current_minute)
filename = filename+"-"+str(current_second)+"-"+str(current_microsecond)
print "	>"+filename+"==="
"""
	\cite[\S8.1.7 strftime() and strptime() Behavior]{DrakeJr2016e}
		and \cite[\S8.1.7 strftime() and strptime() Behavior]{DrakeJr2016b}
		provide a table of directives (e.g., %Y), their meanings,
		examples of their usage and related information. 
"""
filename2 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsec-logfile.text")

#	[[month]-[date]-[year]-[time]-[Name of software]-[logfile].text]
filename3 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsec-logfile.text") 
print "	>"+filename3+"==="

#	[prefix of path]/boilerplate-code/binaries/logfile_db/[[month]-[year]]/
dir_name = now.strftime("%B-%Y") 
print "	>"+dir_name+"==="


"""
	I should include information about the date and time in my
		normal.txt and error.txt logfiles.
	Methods that I can use to do this:
	1)	Use Boost Python to port the information from the Python
		data type (or object) for "date" to a C++ object.
	2)	Use SWIG.
	3)	Use other functions from Boost C++ to do the same thing.
	4)	Try to use functions from the C++ STL to do the same thing.
"""	











