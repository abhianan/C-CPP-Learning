#include <stdio.h>
#include <stdlib.h>
/* Switch statement is also condition based statement. Here condition must be constant conditions. Condition not covered by cases
is covered by default .Here we cannot handle greater than less than condition instead we use if-else*/
int main()
{
    int marks=90;
    switch(marks)
    {
    case 90:
        printf("Excellent");
        break;
    case 80:
        printf("very good");
        break;
    default:
        printf("Fail");
    }
    return 0;
}
