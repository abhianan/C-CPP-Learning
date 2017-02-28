/*Passing argument and parameter in function and return type.*/
#include <iostream>

using namespace std;

void sum(int a , int b){
int sum=0;
sum=a+b;
cout<<sum<<endl;
}
int sum_return(int a,int b){
int sum=a+b;
return sum;}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    sum(a,b);
    cout<<sum_return(a,b);
    return 0;
}
