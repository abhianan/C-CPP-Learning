#include <stdio.h>
#include <stdlib.h>
/*Passing array as an argument of function.Three ways of passing arrays as an argument of function.
1. Using a pointer [void arrsum(int *myarr)]
2. pass definite size array [void arrsum(int myarr[6])] problem here is we can only pass array of size 6 to the function
so it kills general functionality of a function , as function should be used in different condition and this condition of size 6
restrain the use of function as we have to pass every time size 6 array as parameter.
3.to overcome above restriction we use unsized array as an argument i.e. array have different size or any size.
and we pass size of an array as argument also.[void arrsum(int myarr[],int size)] */

int arrsum(int myarr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=myarr[i];
    }
    return sum;
}

int main()
{
    int myarr[6]={10,20,30,40,50,60};
    int arraysum=arrsum(myarr,6);
    printf("%d",arraysum);
    return 0;
}
