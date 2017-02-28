/*Polymorphism:means having many form . It occurs when there is hierarchy of classes or they are related by inheritance .*/
///refer to http://www.javatpoint.com/runtime-polymorphism-in-java
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
    ///defining rectangle class in term of shape class
    rectangle rec;
    shape *poly=&rec; ///pointer to rectangle class object we could have pointed it to shape *poly=&triangle so many form
    poly->setvalue(10,20);
    cout<<rec.area()<<endl;
    shape s;
    s.setvalue(20,30);
    cout<<rec.area(); ///will also output 200 so we need to use pointer here

    return 0;
}
