/*Function Overloading: same function with same name having different argument or different return type. */

#include <iostream>

using namespace std;

void sum(int a , int b){
    int sum=a+b;
    cout<<sum<<endl;
    }

void sum(float a , float b){
    float sum=a+b;
    cout<<sum<<endl;
    }


int main()
{
    sum(10,20);
    float a=65.75;//defined float to differentiate between two functions
    float b=75.65;
    sum(a,b);
    return 0;
}
