/* Function Template : A template is foundation of generic programming in order to increase the usability of program . As here we are taking value of int only
but when we want to use double or float we can't use it.So we define generic function.There is a restriction as we used datatype everywhere same
so we can't place (int,double) together .*/

#include <iostream>
#include<string>

using namespace std;
template<class datatype>///we are making function generic using templates

datatype add_generic(datatype a,datatype b)
{
    return a+b;
}

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int x=36;
    int y=46;
    cout<<add(x,y)<<endl;
    cout<<add_generic(10.5,10.6)<<endl;
    return 0;
}
