#include <stdio.h>
#include <stdlib.h>
/* scanf(%d, & a); & is used to point address where a is stored . It will scan the address of variable a. when user will enter some
value it will stored at the address  and we can access its value after that. But for accessing it we will not use & sign.
we can use nested if also.*/
int main()
{
    int a;
    scanf("%d",&a);
    if (a>12){
        printf("greater than 12");
        }else if(a==12){
        printf("equal to 12");}
        else{
           printf("less than 12") ;
        }
    return 0;
}
