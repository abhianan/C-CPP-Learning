/* Function Template with multiple parameter*/

#include <iostream>
#include<string>

using namespace std;
template<class datatype1,class datatype2>

datatype1 Max(datatype1 a,datatype2 b)
{
    return (a>b?a:b);
}

int main()
{
    int x=36.25;
    int y=46;
    cout<<Max(x,y)<<endl;
    return 0;
}
