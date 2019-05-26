/* maths */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	printf("1+2: %d \n", 1+2) ;
	printf("1/2: %d \n", 1/2) ;
	printf("1*2: %d \n", 1*2) ;
	printf("1**2: %d \n", pow(1,2)) ;
	printf("1**0.5 %d \n", sqrt(1)) ;
	printf("round up 1.2: %d \n", ceil(1.2));
	printf("round down 1.8 %d \n", floor(1.8));
	printf("|-2|: %d", abs(-2)); /* but if i format as float it gives 1?? */
	
	/* define constants that cant be changed like a single variable tuple */
	const int five = 5 ;
	/* now if you write
	int five = 6 ;
	you will get an error */
	
	return 0 ;
}
