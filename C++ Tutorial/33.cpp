/* Pure Virtual Function: is a member which have no definition.We don't need to give definition to this pure virtual member in the base class.
we can redefine virtual member function in derived classes. It makes class as abstract i.e. its just definition of the class and no
implementation is given . */

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
virtual int area ()=0; ///pure virtual member function

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
    shape *poly=&rec;
    poly->setvalue(10,20);
    cout<<rec.area()<<endl;

    return 0;
}
