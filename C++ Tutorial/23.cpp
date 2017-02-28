/*Constructor: we use constructor to initialize the values of the variable in the class.Every object has different variable and
different set of functions.So, every object will work independently.*/

#include <iostream>
#include<string>

using namespace std;

class Book
{
public:
    Book(string x) //initializing name variable
    {
        setname(x);
    }
    void setname(string x)
    {
        name=x;
    }
    string getname()
    {
      return name;
    }
private:
    string name;
};

int main()
{
    Book book1("My Book"); // as we have define constructor with a parameter.
    cout<<book1.getname()<<endl; // will output nothing if we don't initialize its value in constructor.
    Book book2("cpp tutorial");
    cout<<book2.getname()<<endl;
    return 0;
}
