#include <stdio.h>
#include <stdlib.h>

void hello(name)
{
    printf("Hey %s",name) ;
}

int main()
{
    char Name[] = "Shervin" ; /* creates a variable of type character list*/
    int num = 1;
    printf("%d ", num);
    printf("Hello world!\n");
    printf("%d ", ++num );
    hello(Name);
    printf("\n\"I am Quoting\" \n") ;
    printf("%d Let's %s", ++num, "mix it up") ; /* d is double, you can do %f for float */

    return 0;
}
