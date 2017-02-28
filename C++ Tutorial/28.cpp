/*Inheritance allows us to define a class in terms of another class which makes it easier to create and maintain our application and will
increase reusability of code and faster implementation of our code.Protected member of a class are reusable i.e. can be used in other class
which is inheriting the shape class i.e. only in derived class .Inheritance is "IS-A" relation */

#include <iostream>
#include<string>

using namespace std;

class shape ///base class
{
public:
    void setvalue(int a , int b)
    {
       width=a;
       height=b;
    }
protected:
    int height;
    int width;
};

class rectangle : public shape ///derived class here inheritance from shape class
{
public: ///we can use all public and protected member of base class in derived class
    int area()
    {
        return (height*width); ///as these are member variable of shape class
    }
};

int main()
{
    rectangle r1;
    r1.setvalue(15,10);
    cout<<r1.area();
    return 0;
}
