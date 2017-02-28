#include <stdio.h>
#include <stdlib.h>
/*Passing pointer as an argument of function: we are using a function getvalue to assign whatever you pass as an argument of this
function =10000.when returning void in C just write return. */

void getvalue(int *pointer_var){
    *pointer_var=10000;
    return; //not returning anything but function ends here.
}
int main()
{
    int getthevalue;
    getvalue(&getthevalue);
    printf("%d",getthevalue); //we are setting the value of 10000 at the address of variable getthevalue .
    return 0;
}
