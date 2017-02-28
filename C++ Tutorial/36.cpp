/* Class Template*/

#include <iostream>
#include<string>

using namespace std;

template<class T>
class Maths
{
    T a,b; ///T will be replaced by data type
public:
    Maths(T x,T y){
    a=x;
    b=y;
    }
    T maxValue();
};

template<class T> ///need to define everywhere
T Maths<T>::maxValue(){
return(a>b?a:b);
}

int main()
{
    Maths<int> mat(45,67);
    cout<<mat.maxValue()<<endl;
    return 0;
}
