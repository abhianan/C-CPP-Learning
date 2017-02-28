/*Operator overloading  */

#include <iostream>
#include<string>

using namespace std;

class Vector
{
public:
    int x,y;
    Vector(){};
    Vector(int a,int b) ///constructor overloading
    {
        x=a;
        y=b;
    };
    Vector operator+(const Vector&); /*operator overloading it returns type Vector class and operator keyword is used for overloading. + sign is
 used for operator and we add const and class name object and address of the class .This is prototype of operator. */
};

Vector Vector::operator+(const Vector& parameter)///definition of operator now we need to give scope of this operator so we use [Vector::]
{
Vector temp; ///temp object is temporary object of Vector Class
temp.x=x+parameter.x; ///parameter is object of Vector
temp.y=y+parameter.y;
return temp;
}

int main()
{
    Vector vect1(4,2);
    Vector vect2(2,2);
    Vector result;
    result=vect1+vect2; ///adding two object of class Vector
    cout<<result.x<<" "<<result.y<<endl;
    return 0;
}
