/*Array:is a variable can contain array of value.*/

#include <iostream>

using namespace std;

int main()
{
    char a[3]={'a','b','c'}; //array initializer list
    a[2]='d';
    cout<<a[2]<<endl;
    int x[15];
    for(int i=0;i<15;i++){
        x[i]=i+1;
    }
    cout<<*x<<endl; //output 1 first element value
    cout<<x[5];
    return 0;
}
