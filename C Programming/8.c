#include <stdio.h>
#include <stdlib.h>
/* we can use i++ or i=i+1. while checks condition first then executes code but in do while it executes code atleast once
then check your condition. */
int main()
{
    int ij=0;
    do
    {
      printf("%d",ij);
      ij++;
    }while(ij<9);
    printf("Done ");

    int i=0;
    while(i<9){
        printf("%d",i);
        i++;
    }
    return 0;
}
