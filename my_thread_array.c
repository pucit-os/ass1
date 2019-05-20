#include <pthread.h>  // header file for threads
#include <stdio.h>   // header file for standard input and output.
#include <stdlib.h> // header file for functions involving memory allocation, process control, conversions and others
#include <unistd.h> //header file that provides access to the POSIX operating system API. (fork, pipe and I/O primitives [read, write, close, etc.] )
#include <errno.h>  //header file for error handling 
#include <math.h> //header file for math fast operations 

//hint 1: use struct to pass large number arrays
//hint 2: any function from math.h isn't required to complete this assignment

void * multiplyer (void *);  //prototype for function multiplyer

int i=0;

int main(int arg, char ** args)
{
	//fetching file path from commandline arguments
	
	char file1_name []=args[1];
	char file2_name []=args[2];

	//write code to open 2 files
	
	//write code to fill 2 dynamic arrays/matrix with approriate size and given values in a file
	
	//write code to check wether matrix are multiplyable or not 
	
	//write code to created a pool of thread depending on size of operations required on matrixes
	
	//write code to invoke function of multiplyer for multiplciation of data elements of matrixes
	
	//write code to allocate a 3rd array/matrix with appropriate size and fill it with return values of multiplyer
	
	//write code to store the resultant matrix in a file
	
	printf("\nmain is ended \n");
}

void * multiplyer (void * arg)
{
	printf("\n executing thread # %d", i++ );  // this printing could be cumbersome so don't panic if unexpected results are produced
	
	//write code for multiplciation which would be done on args (remmeeber to typecast it back to its origonal type)
	
	//write code to return a single value that would be placed a single index of 3rd matrix
	
}
