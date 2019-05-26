/* Lesson 1, Intro */ 

/* preprocessor */
# include <stdio.h> 
/* "include" imports a library called studio.h */
/* You do this because you wanna use the printf function */

int main(void) { 
/* main is a function that all codes must have and int defines the output */
/* compilers create an intermediary code which has this main block*/
/* which is what you use in python when you say if __name__ == __main__  */
/* functions take parameters but since main doesnt you put void */
 
	printf("Hello World! \n");
	return 0;
/* since main is returning an int you return 0. it can return whatever you want */
/* in programming you return 0 when everything runs with no error, 404 not found etc */
/* YOU HAVE TO PUT SEMICOLONS becuase white space is not recognised */
}

/* you can create a function which returns nothing and needs no parameters */
 void HelloWorld() {
	 printf("Hello World! \n")
 }
 