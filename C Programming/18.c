#include <stdio.h>
#include <stdlib.h>
/*Arrays with pointer : we can assign val array to the pointer in same manner as we assigned variable to a pointer variable.
for assigning value from array to pointer array we use for loop to iterate over array. */

int main()
{
    int val[3]={30,40,50};
    int *pointer_var[3];
    for(int i=0;i<3;i++){
        pointer_var[i]=&val[i];
        printf("%x\n",pointer_var[i]);
    }
    for(int j=0;j<3;j++){
        printf("%d\n",*pointer_var[j]); //accessing array from pointer array.
    }
    return 0;
}
