#include <stdio.h>
#include <stdlib.h>
/*For return type function with multiple arguments*/


int add(int a , int b){
    int sum=a+b;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x ,&y);
    printf("%d \n",add(x,y)+10);
    int d=add(x,y);
    printf("%d",d);
    return 0;
}
