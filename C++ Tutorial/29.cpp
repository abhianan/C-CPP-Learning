/*Multiple Inheritance*/

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

class description ///we want this class to act as base class of rectangle class
{
public:
    void print(string description_)
    {
        cout<<"we are using "<<description_<<"class"<<endl;
    }
};

class rectangle : public shape,public description ///multiple inheritance Note: add access specifier here
{
public:
    int area()
    {
        return (height*width);
    }
};

int main()
{
    rectangle r1;
    r1.setvalue(15,10);
    cout<<r1.area()<<endl;
    r1.print("rectangle ");
    return 0;
}
