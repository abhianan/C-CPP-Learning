/*Pointers : A pointer is a variable whose value is the address of another variable .*/

#include <iostream>

using namespace std;

int main()
{
    int x=0;
    cout<<&x<<endl;
    int *p=&x;
    cout<<p<<endl;
    cout<<*p<<endl;
    x=20;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}
