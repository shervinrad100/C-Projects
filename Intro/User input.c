/* to take an input for the function you can do void Hello(char name[]) */
/* this takes a user input in the form of characters, in an array called name */

#include <stdio.h>

void Hiname(char name[])
{
	printf("Hi %s", name);
}

int main(void)
{
	/* create a variable */
	char name[20]; /* character array length 20 */
	/* you do this because C needs to allocate enough memory for those char */
	printf("enter name: ");
	/* scans input for string and points the return in variable name */
	scanf("%s", /*&*/ name); /* we dont need pointers for strings?? */
	Hiname(name) ;
	int age ;
	printf("\nHow old are you? ") ;
	scanf("%d", &age) ; /* %lf tells scanf to look for double??*/
	printf("I didnt know you were %d years old", age) ;
	
	/* scanf only takes the input until the first white space so you have to use fgets*/
	printf("\ntell me a joke");
	char joke[20] ;
	fgets(joke, 20, stdin) ; /* gets the input and allocates it to name with limit of 20 char via standard input stdin */
	
	return 0;
}	
	
	