#include <stdio.h>
#include <stdlib.h>
/*For no return type function with multiple arguments*/


void add(int a , int b){
    int sum=a+b;
    printf("%d",sum);
}
int main()
{
    int x,y;
    scanf("%d %d",&x ,&y);
    add(x,y);
    return 0;
}
