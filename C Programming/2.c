#include <stdio.h>
#include <stdlib.h>
/* in order to printing integer it require a place holder. %d is a place holder for integer . %f for float .
%c for single character . %s for string . %p for an address or pointer .%lf for large float or double .
%ld for large integer or long. we can add extra string with the place holder .*/

/* for user input : scanf(). puts() is also used for print value. */
int main()
{
    printf("Hello world!\n");
    printf("%d\n",32);
    printf("%d %f %d \n",32,2.5,5);
    printf("the number is equal to %f \n",32.2);
    puts("abhishek is my name");
    return 0;
}
