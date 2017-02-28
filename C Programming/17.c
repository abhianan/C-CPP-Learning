#include <stdio.h>
#include <stdlib.h>
/* Pointer is a variable whose value is the address of another variable.
Address of variable : In C whenever we declare a variable, C stores this variable at some particular memory address in computer.
for finding address where a particular variable is stored we use [&val] and memory address is stored as hexadecimal in PC
so we use %x for that.To declare a pointer we use [*pointer_var] and while assigning pointer we don't use * i.e. only time
of declaration we use * . For accessing value from pointer [or value stored at pointer address] also called dereferencing
 we again use * ...*/

int main()
{
    int val=30;
    int *pointer_var;
    pointer_var=&val; //this pointer has address of val
    printf("%x \n",&val);
    printf("%x\n",pointer_var);
    printf("%d",*pointer_var); //accessing value at the given memory address
    return 0;
}
