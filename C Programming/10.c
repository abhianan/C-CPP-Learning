#include <stdio.h>
#include <stdlib.h>
/*Function is a piece or block of code used to perform a particular task.Every C program has at least one function
i.e. main function at least. while executing program c search for main function and execute whatever inside it.
Void is used for no return type .i.e. void test(){}. It can take parameter or not .
Note : there is no difference between declaring a function above main or below main function. But when you define a function
below main then just prototype(or forward declaration) the function above i.e. declare it first. by prototyping we are telling c program that we have
defined the function somewhere in the code. */

void test();
void testy(){
printf("this is testy case ");
}
int main()
{
    test();
    testy();
    return 0;
}
void test(){
printf("this is test case \n");
}
