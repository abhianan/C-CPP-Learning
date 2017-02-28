/*Virtual Member Function: is a member function that can be redefined in the derived class .
It is defined in base class only.*/

#include <iostream>
#include<string>

using namespace std;

class shape
{
public:
    void setvalue(int a , int b)
    {
       width=a;
       height=b;
    }
virtual int area () ///virtual function It tells cpp that we will use this define this function again in derived class.
{
    return 0;
}
protected:
    int height;
    int width;
};

class rectangle : public shape
{
public:
    int area()
    {
        return (height*width);
    }
};

int main()
{
    rectangle rec;
    shape pol;
    shape *poly=&rec;
    poly->setvalue(10,20);
    cout<<rec.area()<<endl;
    cout<<pol.area()<<endl;

    return 0;
}
