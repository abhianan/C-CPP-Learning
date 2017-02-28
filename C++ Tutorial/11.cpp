/*Default argument or default parameter*/
#include <iostream>

using namespace std;

int sum_bel(int a=50,int b=20);

int sum_return(int a=20,int b=10){
    int sum=a+b;
    return sum;
    }

int main()
{
    cout<<sum_return(30,50)<<endl; //will overwrite a and b
    cout<<sum_bel();
    return 0;
}

int sum_bel(int a,int b){ //no need to initialize it again.
    int sum=a+b;
    return sum;}
