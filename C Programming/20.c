#include <stdio.h>
#include <stdlib.h>
/* we can also pass pointer as an array arguments. we will pass pointer array  as an argument of a function .*/

int getsum(int *myarr,int size){ //myarr is an pointer to int
    int sum=0;
    for(int i=0;i<size;i++){
        sum+= myarr[i];
    }
    return sum;
}
int main()
{
    int myarr[4]={10,20,30,40};
    int mysum=getsum(myarr,4);
    printf("%d",mysum);
    return 0;
}
