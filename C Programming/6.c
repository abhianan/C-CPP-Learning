#include <stdio.h>
#include <stdlib.h>
/* ternary conditional operator could also used for short decision making . c=(a>b)? a :b ; means if a is greater than b
then return a else return b . for true statement it will return non zero and for false it will return zero.
In performance it is better than if-else statement.*/
int main()
{
    int a=10,b=20;
    int c;
    c=(a>b)? a :b ;
    printf("%d",c);
    return 0;
}
