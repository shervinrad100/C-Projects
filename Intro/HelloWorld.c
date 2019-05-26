/* Lesson 1, Intro */ 

/* preprocessor */
# include <stdio.h> 
/* "include" imports a library called studio.h */
/* You do this because you wanna use the printf function */

/* void Hello(); */

int main(void) 
{ 
/* main is a function that all codes must have and int defines the output */
/* compilers create an intermediary code which has this main block*/
/* which is what you use in python when you say if __name__ == __main__  */
/* functions take parameters but since main doesnt you put void */
 
	printf("Hello World! \n");
	Hello() ;
	return 0;
/* since main is returning an int you return 0. it can return whatever you want */
/* in programming you return 0 when everything runs with no error, 404 not found etc */
/* YOU HAVE TO PUT SEMICOLONS becuase white space is not recognised */
}

/* you can create a function which returns nothing and needs no parameters */
 void Hello() 
{
	 printf("Hellooo! \n") ;
}
 
 
/* to run c code you need to go to cmd */
/* gcc C:\Users\sherv\OneDrive\Documents\GitHub\C-Projects\HelloWorld.c -o Hello*/
/* what this does is loads gcc compiler which turns a file from the source xxx into an executable and names it Hello */
/* you then type the executable name and its ran if the directory is correct */

/* when you run this, because the function was written after it has been used*/
/* even though the code will run this can be avoided by create a function at the start (even if it has nothing) (*) */



