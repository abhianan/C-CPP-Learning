#include <stdio.h>
#include <stdlib.h>
/*local variable is declared inside a function even in main function .It is only valid inside the function.If it is not initialize
it will contain any garbage value .
variable not declared inside any function is called global variable.It is visible to every function. It is no need to be
initialize as it is initialized by zero already either int , float or double.
if the name of global and local variable are same then it will prefer local variable value. 
Note: if you want to access local varible of one function to another function will throw an undeclared error. */
int globalvar;
void number(){
    printf("global=%d\n",globalvar);
}
int main()
{
    int x=10;
    int y;
    number();
    printf("local=%d \n",y); //it will take randomly any value and print it.so called garbage value.
    printf("local=%d",x);
    return 0;
}
