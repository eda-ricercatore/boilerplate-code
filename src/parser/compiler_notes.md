@author Zhiyang Ong

@version 1.0.0

@since January 1, 2016

The MIT License (MIT)

Copyright	(C)	<2010-2016>	<Zhiyang Ong>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal  in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.





#	Compiler Front-End.

##	Syntax Analysis.

###	Lexical Analysis.

###	Parsing.


##	Semantic Analysis.

Check the types and scope(s).


#	Intermediate Compiler Optimization.




#	Compiler Back-End.

Code generation



#	Miscellaneous Notes.

Goal: Develop a self-compiling compiler for Verilog, and associated computer languages.

Other languages that I want to pass are:
- LEF
- DEF

Input/output of compilers are specified, and implement the compiler/interpreter (or emulator for a virtual machine, such as the *Java* virtual machine) and the linker.





*****

#	References.

##	Helpful References. (4)

- \cite{Cooper2012}:	Cooper, K. D., and Torczon, L. Engineering a Compiler, second ed. Morgan Kaufmann, Burlington, MA, 2012.

- \cite{Aho2007}:		Aho, A. V., Lam, M. S., Sethi, R., and Ullman, J. D. Compilers: Principles, Techniques, & Tools, second ed. Pearson Education, Boston, MA, 2007.

- \cite{Muchnick1997}:	Muchnick, S. S. Advanced Compiler Design and Implementation. Academic Press, San Diego, CA, 1997.

- \cite{Wirth1996}:		Wirth, N. Compiler Construction. Addison-Wesley, Reading, MA, 1996.




*****

##	Other References. (78)


###	Decent Introductory Books on Compilers. (19)

- \cite{Campbell2013}:	Campbell, B., Iyer, S., and Akbal-Deliba ̧s, B. Introduction to Compiler Construction in a Java World. CRC Press, Boca Raton, FL, 2013.

- \cite{Seidl2012}:		Seidl, H., Wilhelm, R., and Hack, S. Compiler Design: Analysis and Transformation. Springer- Verlag Berlin Heidelberg, Heidelberg, Germany, 2012.

- \cite{Grune2012}:		Grune, D., van Reeuwijk, K., Bal, H. E., Jacobs, C. J., and Langendoen, K. Modern Compiler Design, second ed. Springer Science+Business Media New York, New York, NY, 2012.

- \cite{Mogensen2011}:	Mogensen, T. Æ. Introduction to Compiler Design. Undergraduate Topics in Computer Science. Springer-Verlag London, London, U.K., 2011.

- \cite{Su2011}:		Su, Y., and Yan, S. Y. Principles of Compilers: A New Approach to Compilers Including the Algebraic Method. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 2011.

- \cite{Mogensen2010}:	Mogensen, T. Æ. Basics of Compiler Design, anniversary ed. Lulu Enterprises, Copenhagen, Denmark, 2010.

- \cite{Fischer2010}:	Fischer, C. N., Cytron, R. K., and LeBlanc Jr., R. J. Crafting A Compiler. Addison-Wesley, Boston, MA, 2010.

- \cite{Bergmann2010}:	Bergmann, S. D. Compiler Design: Theory, Tools, and Examples, C/C++ ed. Self-published, Glass- boro, NJ, 2010.

- \cite{Bergmann2007}:	Bergmann, S. D. Compiler Design: Theory, Tools, and Examples, Java ed. Self-published, Glassboro, NJ, 2007.

- \cite{Mak2009}:		Mak, R. Writing Compilers and Interpreters: A Modern Software Engineering Approach Using JavaR , third ed. Wiley Publishing, Indianapolis, IN, 2009.

- \cite{Mak2009a}:		Mak, R. Writing Compilers and Interpreters: A Software Engineering Approach, third ed. Wiley Publishing, Indianapolis, IN, 2009.

- \cite{Srikant2008}:	Srikant, Y. N., and Shankar, P. The Compiler Design Handbook: Optimizations & Machine Code Generation, second ed. CRC Press, Boca Raton, FL, 2008.

- \cite{Srikant2003}:	Srikant, Y. N., and Shankar, P. The Compiler Design Handbook: Optimizations & Machine Code Generation. CRC Press, Boca Raton, FL, 2003.

- \cite{Meduna2008}:	Meduna, A. Elements of Compiler Design. Auerbach Publications, Boca Raton, FL, 2008.

- \cite{Galles2005}:	Galles, D. Modern Compiler Design. Addison-Wesley, Reading, MA, 2005. Also, see \cite{Galles2004}.

- \cite{Grune2000}:		Grune, D., Bal, H. E., Jacobs, C. J. H., and Langendoen, K. G. Modern Compiler Design. Worldwide Series in Computer Science. John Wiley & Sons, Chichester, West Sussex, England, U.K., 2000.

- \cite{Appel2002}:		Appel, A. W., and Palsberg, J. Modern Compiler Implementation in Java, second ed. Cambridge University Press, New York, NY, 2002.

- \cite{Appel1998}:		Appel, A. W., and Ginsburg, M. Modern Compiler Implementation in C. Cambridge University Press, Cambridge, U.K., 1998.

- \cite{Louden1997}:	Louden, K. C. Compiler Construction: Principles and Practice. PWS Publishing Company, Boston, MA, 1997.





###	Other Introductory Books on Compilers. (15)


**Generic Compiler Design** (8)

- \cite{Reghizzi2009}:	Reghizzi, S. C. Formal Languages and Compilation. Texts in Computer Science. Springer-Verlag London, London, U.K., 2009.

- \cite{Kiong1997}:		Kiong, D. B. K. Compiler Technology: Tools, Translators and Language Implementation, vol. 422 of The Kluwer International Series in Engineering and Computer Science. Kluwer Academic Publishers, Norwell, MA, 1997.

- \cite{Holmes1995}:	Holmes, J. Object-Oriented Compiler Construction. Prentice Hall, Englewood Cliffs, NJ, 1995.

- \cite{Parsons1992}:	Parsons, T. W. Introduction to Compiler Construction. W. H. Freeman & Company, New York, NY, 1992.

- \cite{Pyster1987}:	Pyster, A. B. Compiler Design and Construction: Tools and Techniques with C and Pascal. Uses UNIX Tools. Van Nostrand Reinhold, New York, NY, 1987.

- \cite{Lorho1984}:		Lorho, B. Methods and Tools for Compiler Construction: An Advanced Course. Cambridge University Press, Cambridge, U.K., 1984.

- \cite{Waite1984}:		Waite, W. M., and Goos, G. Compiler Construction. Texts and Monographs in Computer Science. Springer-Verlag New York, New

- \cite{Bauer1974}:		Bauer, F. L., De Remer, F. L., Griffiths, M., Hill, U., Horning, J. J., Koster, C. H. A., McKeeman, W. M., Poole, P. C., and Waite, W. M. Compiler Construction: An Advanced Course, vol. 21 of Lecture Notes in Computer Science. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 1974.



**Compiler Front-End** (5)
- \cite{Wilhelm2011}:	Wilhelm, R., Seidl, H., and Hack, S. Compiler Design: Syntactic and Semantic Analysis. Springer- Verlag Berlin Heidelberg, Heidelberg, Germany, November 8 2011.

- \cite{DosReis2012}:	Dos Reis, A. J. Compiler Construction Using Java, JavaCC, and Yacc. John Wiley & Sons, Hoboken, NJ, 2012.

- \cite{Copeland2007}:	Copeland, T. Generating Parsers with JavaCC: An Easy-to-Use Guide for Developers, second ed. Centennial Books, Alexandria, VA, 2007.

- \cite{Terry1997}:		Terry, P. D. Compilers and Compiler Generators: An Introduction with C++. International Thomson Computer Press, Stamford, CT, 1997.

- \cite{Kastens1982}:	Kastens, U., Hutt, B., and Zimmermann, E. GAG: A Practical Compiler Generator, vol. 141 of Lecture Notes in Computer Science. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 1982.




**Others** (2)
- \cite{Rastello2015}:	Rastello, F. SSA-based Compiler Design. Springer-Verlag New York, New York, NY, 2015.

- \cite{Teufel1993}:	Teufel, B., Schmidt, S., and Teufel, T. C2 Compiler Concepts. Springer-Verlag/Wien, Vienna, Austria, 1993.







###	Parser Development (5)

- \cite{Grune2008}:		Grune, D., and Jacobs, C. J. H. Parsing Techniques: A Practical Guide, second ed. Monographs in Computer Science. Springer Science+Business Media, LCC, New York, NY, 2008.

- \cite{Leermakers1993}:	Leermakers, R. The Functional Treatment of Parsing, vol. 242 of The Kluwer International Series in Engineering and Computer Science: Natural Language Processing and Machine Translation. Kluwer Academic Publishers, Norwell, MA, 1993.

- \cite{Tofte1990}:		Tofte, M. Compiler Generators: What They Can Do, What They Might Do, and What They Will Probably Never Do, vol. 19 of EATCS Monographs on Theoretical Computer Science. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 1990.

- \cite{Sippu1990}:		Sippu, S., and Soisalon-Soininen, E. Parsing Theory: Volume II LR(k) and LL(k) Parsing, vol. 20 of EATCS Monographs on Theoretical Computer Science. Springer-Verlag Berlin Heidelberg New York, Heidelberg, Germany, 1990.

- \cite{Sippu1988}:		Sippu, S., and Soisalon-Soininen, E. Parsing Theory: Volume I Languages and Parsing, vol. 15 of EATCS Monographs on Theoretical Computer Science. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 1988.





### Compiler Design Tools. (7)

- \cite{Preiss2004}:	Preiss, B. R. Lexical Analysis and Parsing using C++. Self-published, Waterloo, Ontario, Canada, 2004.

**ANTLR** (2)
- \cite{Parr2012}:		Parr, T. The Definitive ANTLR 4 Reference. Pragmatic Bookshelf, Raleigh, NC, 2012.

- \cite{Parr2007}:		Parr, T. The Definitive ANTLR Reference: Building Domain-Specific Languages. Pragmatic Bookshelf, Raleigh, NC, May 17 2007.


**Flex and Bison** (2)
- \cite{Levine2009}:	Levine, J. R. flex & bison: UNIX Text Processing Tools. O’Reilly Media, Sebastopol, CA, 2009.

- \cite{Aaby2004}:		Aaby, Anthony A. Compiler Construction using *Flex* and *Bison*, Walla Walla College, Redmond, WA, February 25, 2004. Available online from the web page of Ran Gal, "Hardware, Devices, and Experiences Group," Microsoft Research, Microsoft Corporation at: http://research.microsoft.com/en-us/um/people/rgal/ar_language/external/compiler.pdf; October 9, 2014 was the last accessed date.


**Lex and Yacc** (2)
- \cite{Niemann20XY}:	Niemann, T. Lex & Yacc Tutorial. ePaperPress, Portland, OR.

- \cite{Levine1992}:	Levine, J. R., Mason, T., and Brown, D. lex & yacc: UNIX Programming Tools, second ed. O’Reilly Media, Sebastopol, CA, 1992.









###	Compiler Optimization (5)

**Generic Compiler Optimization** (4)
- \cite{Pande2001}:		Pande, S., and Agrawal, D. P. Compiler Optimizations for Scalable Parallel Systems: Languages, Compilation Techniques, and Run Time Systems, vol. 1808 of Lecture Notes in Computer Science. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 2001.

- \cite{Allen2001}:		Allen, R., and Kennedy, K. Optimizing Compilers for Modern Architectures: A Dependencwe-Based Approach. Morgan Kaufmann, San Francisco, CA, 2001.

- \cite{Morgan1998}:	Morgan, R. Building an Optimizing Compiler. Butterworth-Heinemann, Burlington, MA, 1998.

- \cite{Polak1981}:		Polak, W. Compiler Specification and Verification, vol. 124 of Lecture Notes in Computer Science. Springer-Verlag Berlin Heidelberg, Heidelberg, Germany, 1981.

**Garbage Collection** (1)

- \cite{Jones2011}:		Jones, R., Hosking, A., and Moss, E. The Garbage Collection Handbook: The Art of Automatic Memory Management. Chapman & Hall/CRC Applied Algorithms and Data Structures. Chapman & Hall/CRC, Boca Raton, FL, 2011.




###	Parallel Compilers. (4)

- \cite{Midkiff2012}:	Midkiff, S. P. Automatic Parallelization: An Overview of Fundamental Compiler Techniques. Synthesis Lectures on Computer Architecture. Morgan & Claypool Publishers, San Rafael, CA, January 2012.

- \cite{Adve2001}:		Adve, V., and Sakellariou, R. Compiler synthesis of task graphs for parallel program performance prediction. In Proceedings of the 13th International Workshop on Languages and Compilers for Parallel Computing (LCPC 2000) (Yorktown Heights, NY, August 10–12 2001), vol. 2017 of Lecture Notes in Computer Science, Springer-Verlag Berlin Heidelberg, pp. 208–226.

- \cite{Wolfe1995}:		Wolfe, M. High-Performance Compilers for Parallel Computing. Addison-Wesley, Reading, MA, 1995.

- \cite{Haghighat1995}:	Haghighat, M. R. Symbolic Analysis for Parallelizing Compilers. Kluwer Academic Publishers, Nor- well, MA, 1995.



###	Compiler Design for Embedded Software. (5)

- \cite{Cardoso2009}:	Cardoso, J. M. P., and Diniz, P. C. Compilation Techniques for Reconfigurable Architectures. Springer Science+Business Media, LCC, New York, NY, 2009.

- \cite{Mamidi2005}:	Mamidi, S., Blem, E. R., Schulte, M. J., Glossner, J., Iancu, D., Iancu, A., Moudgill, M., and Jinturkar, S. Instruction set extensions for software defined radio on a multithreaded processor. In Proceedings of the International Conference on Compilers, architectures and synthesis for embedded systems (CASES ’05) (San Francisco, CA, September 24–27 2005), ACM Press, pp. 266–273.

- \cite{Leupers2001}:	Leupers, R., and Marwedel, P. Retargetable Compiler Technology for Embedded Systems – Tools and Applications. Kluwer Academic Publishers, Dordrecht, The Netherlands, 2001.

- \cite{Leupers1997}:	Leupers, R. Retargetable Code Generation for Digital Signal Processors. Kluwer Academic Publishers, Dordrecht, The Netherlands, 1997.

- \cite{Benini2003}:	Benini, L., Kandemir, M., and Ramanujam, J. Compilers and Operating Systems for Low Power. Kluwer Academic Publishers, Norwell, MA, 2003.





###	Compilers for Domain-Specific Languages. (2)

- \cite{Fowler2011}:	Fowler, M., and Parsons, R. Domain-Specific Languages. Addison-Wesley Signature Series. Addison- Wesley, Boston, MA, 2011.

- \cite{Safonov2010}:	Safonov, V. O. Trustworthy Compilers. John Wiley & Sons, Hoboken, NJ, 2010.





###	Theoretical Approach. (1)

- \cite{Mozgovoy2010}:	Mozgovoy, M. Algorithms, Languages, Automata, and Compilers: A Practical Approach. Jones and Bartlett Publishers, Sudbury, MA, 2010.





### Other Topics in Compiler Design. (2)

- \cite{Levine2000}:	Levine, J. R. Linkers and Loaders. Academic Press, San Diego, CA, 2000.

- \cite{Banerjee1993}:	Banerjee, U. Loop Transformations for Restructuring Compilers: The Foundations. Kluwer Academic Publishers, Norwell, MA, 1993.






### Other References Related to Compilers. (13)

**Compiler Interactions with Microarchitecture** (2)
- \cite{Lee2001}:		Lee, G., and Yew, P. Interaction between Compilers and Computer Architectures, vol. 613 of The Kluwer International Series in Engineering and Computer Science. Kluwer Academic Publishers, Norwell, MA, 2001.

- \cite{Lilja1994}:		Lilja, D. J., and Bird, P. L. The Interaction of Compilation Technology and Computer Architecture. Kluwer Academic Publishers, Norwell, MA, 1994.

**Working with Legacy Code** (1)
- \cite{Feathers2005}:	Feathers, M. C. Working Effectively with Legacy Code. Robert C. Martin Series. Pearson Education, Upper Saddle River, NJ, 2005.

**Embedded Software** (1)
- \cite{Hyde2006}:		Hyde, R. Write Great Code: Thinking Low-Level, Writing High-Level, vol. 2. No Starch Press, Inc., San Francisco, CA, 2006.

**Microarchitecture for Embedded Software Developers** (1)
- \cite{IntelCorporationStaff2015}:	Intel Corporation staff. Intel 64 and IA-32 Architectures Optimization Reference Manual. Intel Corporation, Santa Clara, CA, September 2015.

**Advanced C++ Software Development (on UNIX-like Operating Systems)** (8)
- \cite{gcovContributors2015}:	gcov contributors. gcov--A Test Coverage Program, Free Software Foundation, Boston, MA, 2008. Available online from *Using the GNU Compiler Collection (GCC)* at: https://gcc.gnu.org/onlinedocs/gcc/Gcov.html; February 18, 2015 was the last accessed date.

- \cite{Fog2014a}:		Fog, Agner. Calling Conventions: For Different C++ Compilers and Operating Systems, Technical University of Denmark, Copenhagen, Denmark, August 7, 2014. Available online at: http://www.agner.org/optimize/calling_conventions.pdf; July 1, 2015 was the last accessed date.

- \cite{Walker2013}:	Walker, Ben. Compiler-Generated Functions in *C++*, October 30, 2013. Available online at the "The walkerb.net Blog": http://www.walkerb.net/blog/compiler-gen-functions/; November 2, 2013 was the last accessed date.

- \cite{Somenzi2003}:	Somenzi, Fabio. Debugging and Tuning, University of Colorado at Boulder, Boulder, CO, November 9, 2003. Available online at: http://www.cs.columbia.edu/~sedwards/presentations/iccad2003-somenzi.pdf; September 1, 2013 was the last accessed date. DOI: http://dx.doi.org/10.1109/ICCAD.2003.144.

- \cite{AppleIncStaff2009}:		Apple Inc. staff. C++ Runtime Environment Programming Guide: Compiler Tools, Apple Inc., Cupertino, CA, October 9, 2009. 

- \cite{AppleIncStaff2006a}:	Apple Inc. staff. GCC Porting Guide: Compiler Tools, Apple Inc., Cupertino, CA, October 3, 2006.

- \cite{AppleIncStaff2001a}:	Apple Inc. staff. The GNU Compiler Collection on Mac OS X, Apple Inc., Cupertino, CA, December 7, 2001. Available online from *Apple Inc: Developer Connection* at: http://developer.apple.com/tools/gcc_overview.html; March 30, 2010 was the last accessed date.

- \cite{Parlante2001}:	Parlante, N., Zelenski, J., and et al.. *Unix* Programming Tools, Stanford University, Stanford, CA, April, 2001. Available online from the *Stanford CS Education Library*, Computer Science Department, School of Engineering, Stanford University at: http://cslibrary.stanford.edu/107/UnixProgrammingTools.pdf and http://cslibrary.stanford.edu/107/; October 7, 2015 was the last accessed date.




