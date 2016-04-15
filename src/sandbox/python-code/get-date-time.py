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



	IMPORTANT:
		Search for the "#### FIX THIS" flag to manually enter the
			time zone for the filename of the logfiles and output
			files of automated regression testing.
	@Modified by Zhiyang Ong, April 15, 2016.
		This is because I currently do not know how to extract the
			time zone from the functions provided by the Python
			Standard Library. 
		Time zones of interest:
			College Station, TX
				CDT - Central Daylight Time (Daylight Saving Time)
				CST – Central Standard Time			
			Los Angeles, CA (or Silicon Valley)
				PDT - Pacific Daylight Time (Daylight Saving Time)
				PST – Pacific Standard Time
			Trento, Italy
				CEST – Central European Summer Time (Daylight Saving Time)
				CET – Central European Time
			Taipei, Taiwan
				CST – China Standard Time
			Singapore
				SGT – Singapore Time
			Adelaide, Australia
				ACST – Australian Central Standard Time
				ACDT – Australian Central Daylight Time (Daylight Saving Time)



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

"""
	For the next two strftime() statements, the usage of the "%Z"
		directive to get the time zone currently fails, since the
		datetime object is "naive".
"""
#filename2 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsec%Z-logfile.text")
#	#### FIX THIS
#filename2 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsecTIMEZONE-logfile.text")
filename2 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsecCST-logfile.text")

#	[[month]-[date]-[year]-[time]-[Name of software]-[logfile].text]
#filename3 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsec%Z-logfile.text")
#	#### FIX THIS
#filename3 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsecTIMEZONE-logfile.text")
filename3 = now.strftime("%B-%d-%Y-%Hhr%Mmin%S_%fsecCST-logfile.text")
print "	>"+filename3+"==="

#	[prefix of path]/boilerplate-code/binaries/logfile_db/[[month]-[year]]/
dir_name = now.strftime("%B-%Y")
print "	>"+dir_name+"==="



"""
	\todo
	@todo Script may fail when used across multiple time zones,
		within any 24-hour period, such as when I am traveling or
		when multiple engineers or software developers are using this
		script (or a derivation of it) for their project.
		
		While the "%Z" directive for strftime() allows the developer
			to determine the local time zone, it may not be
			judiciously used to name the logfiles.
	#### TO BE COMPLETED



	I should include information about the date and time in my
		normal.txt and error.txt logfiles.
	Methods that I can use to do this:
	1)	Use Boost Python to port the information from the Python
		data type (or object) for "date" to a C++ object.
	2)	Use SWIG.
	3)	Use other functions from Boost C++ to do the same thing.
	4)	Try to use functions from the C++ STL to do the same thing.
"""	











