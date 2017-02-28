#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Another way of defining structure . while defining strucuture it allocates memory in multiple of 8 . if less memory is there it simply
provides some padding and extend it till 8. */
struct student {
    int id; //these are called member of the structure
    char name[20];
    float percent;
}record;//variable name of the structure
int main()
{
    record.id=12;
    strcpy(record.name,"JOHN");
    record.percent=90.5;
    printf("%d %s %f\n",record.id,record.name,record.percent);

    return 0;
}
