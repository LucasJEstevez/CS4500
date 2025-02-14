README

Lucas Estevez
Jackson Seales

We have never given no recieved unauthorized assistance on this work.
Location: CS4500/jseales directory on vSphere, then inside Project1 directory on the Ubuntu device.
Password to access Jackson user: Dcsd#211971062322 

CS4500 Project 1 - Makefiles

 -- How to Build and Run --
Once inside the Project1 directory in the terminal, run the 'make' command to compile the necessary files into
a single binary executable. This file, 'list_test,' can then be run by './list_test' which will execute
the functions inside list_test.c that test the linked list functionality. The results will be output to the
console in the form of:
	"This is what is being run."
	"And this is what the list currently looks like: __"

 -- Components --
	- list_test.c: A c file that uses the functions in list.c to test the functionality of the linked list.
	- list.c: A c file that completes the functions used in list_test.c and defined in list.h.
	- list.h: Defines functions to make and modify a linked list.
	- Makefile: Compiles the 3 above files into list_test.
	- list_test: A binary executable that is compiled from the Makefile.

 -- Challenges --
We were unfamiliar with makefiles and did not know where to begin. There was a lot of confusion over why object files
were used in all of the examples and if we needed to do the same or if we were just able to use our .c files. After a couple tests
and iterations, we were able to figure out a functional makefile that used a template for c files, which was a step too far in terms
of simplification and didn't properly provide rules for each file to be compiled. After seperating the rules there was one final issue which
was understanding where the CFLAGS went, and the -I. flag was attached to each rule instead of just the compiling rule which was revealed
to us through gnu.org documentation.

Resources: 
- gnu.org/software/make/manual/make.html#Rule-Introduction
- cs.colby.edu/maxwell/courses/tutorials/maketutor
