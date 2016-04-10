# lamiera-per-caldaie


*C++1y* boilerplate code for my open source software projects. It will include implementations of common data structures and algorithms, including those for electronic design automation (such as AND-Inverter Graphs and Binary Decision Diagrams)



## Currently Implemented Data Structures and Algorithms
- Graph: Directed graphs, such as AIGs and BDDs.
- Heap: min heap, max heap, Fibonacci heap (important for fast implementations of graph algorithms), and binomial heaps.
- Trees: binary search trees, self-balancing trees, and combinations thereof (e.g., AVL trees and red-black trees)
- Stack

[Note: The priority queue is available from the C++ STL.]











## Organization of the Repository
- benchmarks: Benchmarks (synthetic) or otherwise
- binaries: Build and run software here.
- docs:
	* Automatically generated API (using *Doxygen*) for software in *HTML*.
- notes:
	* Software license(s).
	* Software documentation for project, written in *LaTeX*.
	* Guidelines for collaborating on open source software and/or hardware projects.
	* *BibTeX* database for the documentation.
- README.md: Readme file to describe the software project, and organization of the repository.
- scripts: Scripts to perform miscellaneous tasks for the software project.
- src: Source code of the software project, including test suites for automated regression testing and a "sandbox" for testing concepts in EDA programming or VLSI design.







## Building Static Binaries for Boilerplate Code

UNIX command for determining if a binary is statically linked: ldd <binary>. If dynamic libraries show up, the binary/software is not statically linked. 

Produce statically linked binaries to meet requirements of research contests.

Statically linked binaries:
- Advantages:
	* Can optimize library code that is not available via pre-compiled object files.
	* guarantee
- Disadvantages:
	* S

Dynamically linked binaries:
- Advantages:
	* "Reduce total resource consumption" for sharing libraries with multiple processes. The resources include: disk space, RAM, and cache space.
	* Enable bug fixes and library upgrades to propagate without requiring actions from the developers.
- Disadvantages:
	* Risk of suffering in DLL hell (dependency hell for dynamic link libraries).
- Required by plugins.




To get more information on "C++ statically linked binary compilation," see: <https://www.google.com/search?sourceid=chrome-psyapi2&ion=1&espv=2&ie=UTF-8&q=c%2B%2B%20statically%20linked%20binary%20compilation&oq=c%2B%2B%20statically%20linked%20binary%20compilation&aqs=chrome..69i57.17967j0j7>














### References for Statically Linked Binary Compilation in C++:  
Eloff, "Static linking vs dynamic linking," in *Stack Overflow*, Stack Exchange Inc., New York, NY, January 3, 2010. Available from *Stack Exchange: Stack Overflow: Questions* at: http://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking; last viewed on July 7, 2015.

Giovanni Funchal, "Compiling C++ into portable linux binaries," in *Stack Overflow*, Stack Exchange Inc., New York, NY, April 6, 2011. Available from *Stack Exchange: Stack Overflow: Questions* at: http://stackoverflow.com/questions/5563906/compiling-c-into-portable-linux-binaries; last viewed on October 13, 2015.

Bill Forster, "How do I make a fully statically linked .exe with Visual Studio Express 2005?," in *Stack Overflow*, Stack Exchange Inc., New York, NY, September 10, 2008. Available from *Stack Exchange: Stack Overflow: Questions* at: http://stackoverflow.com/questions/37398/how-do-i-make-a-fully-statically-linked-exe-with-visual-studio-express-2005; last viewed on October 13, 2015.

Johan Petersson, "Linking libstdc++ statically," in *Scatter/Gather thoughts*, *trilithium.com*, June 1, 2005. Available from *Scatter/Gather thoughts* at: http://www.trilithium.com/johan/2005/06/static-libstdc/; last viewed on October 13, 2015.

Tobias Schottdorf, "Golang: Statically linked binary and tests for Cockroach," in *Tobias Schottdorf, PhD: Stuff I Ran Into*, GitHub, San Francisco, CA, November 10, 2014. Available from his Cologne, Germany -based web page at: http://tschottdorf.github.io/linking-golang-go-statically-cgo-testing/; last viewed on October 13, 2015.

Wikipedia contributors, "Static library," in *Wikipedia, The Free Encyclopedia,* Wikimedia Foundation, San Francisco, CA, August 27, 2015. Available online in *Wikipedia, The Free Encyclopedia: Computer libraries* at: https://en.wikipedia.org/wiki/Static_library; last viewed on October 13, 2015.

Eric Zhiqiang Ma, "How to Statically Link C and C++ Programs on Linux with gcc," in *SysTutorials: tutorials on Linux, systems and more,* January 1, 2014. Available online on *SysTutorials: tutorials on Linux, systems and more* at: http://www.systutorials.com/5217/how-to-statically-link-c-and-c-programs-on-linux-with-gcc/; last viewed on October 13, 2015.









### References for Markdown:
Stack Overflow staff, "Markdown help," in *Stack Overflow*, Stack Exchange Inc., New York, NY, 2015. Available as *Stack Exchange: Stack Overflow (rev 2015.10.13.2885)* at: http://stackoverflow.com/editing-help; last viewed on October 14, 2015.

John Gruber, "Markdown," The Daring Fireball Company LLC, December 17, 2004. Available as *The Daring Fireball Company LLC: Projects: Markdown, Version 1.0.1* at: http://daringfireball.net/projects/markdown/; last viewed on October 14, 2015.

Adam Pritchard et al., "Markdown Cheatsheet," GitHub, San Francisco, CA, August 10, 2015. Available at: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet; last viewed on October 14, 2015.

GitHub staff, "Writing on GitHub," in *GitHub Help,* GitHub, San Francisco, CA, 2015. Available from *GitHub: GitHub Help: Writing on GitHub category* at: https://help.github.com/articles/writing-on-github/; last viewed on October 14, 2015.

GitHub staff, "Markdown Basics," in *GitHub Help,* GitHub, San Francisco, CA, 2015. Available from *GitHub: GitHub Help: Writing on GitHub category* at: https://help.github.com/articles/markdown-basics/; last viewed on October 14, 2015.

GitHub staff, "GitHub Flavored Markdown," in *GitHub Help,* GitHub, San Francisco, CA, 2015. Available from *GitHub: GitHub Help: Writing on GitHub category* at: https://help.github.com/articles/github-flavored-markdown/; last viewed on October 14, 2015.

Scott Boms, "Markdown 1.0.1 Syntax Cheatsheet," Wishingline, Menlo Park, CA. Available as Version 1.0.3 at: http://scottboms.com/downloads/documentation/markdown_cheatsheet.pdf; last viewed on October 14, 2015.

Daniel Greenfeld, "Markdown Basics," Revision 0dfc38d3, from the *Read the Docs* repository, 2012. Available at: http://markdown-guide.readthedocs.org/en/latest/basics.html; last viewed on October 14, 2015.



	References (to show me how to create box with scroll bar):
	Stack Overflow contributors, "Static linking vs dynamic linking," Stack Exchange Inc., New York, NY, September 10, 2008. Available from ** at: http://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking; last viewed on October 13, 2015.


















GitHub Repository for this project: https://github.com/eda-globetrotter/lamiera-per-caldaie

