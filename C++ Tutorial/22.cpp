/*Constructor: It is a special member function of a class that is created when we create the object of the class. Name of the
constructor is same as name of the class. even if we don't declare constructor cpp will create constructor for class
automatically.we use constructor to initialize the values of the variable in the class.*/

#include <iostream>
#include<string>

using namespace std;

class Book
{
public:
    Book()//constructor which is called automatically when created object.
    {
        cout<<"You are in Constructor"<<endl;
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
    Book book_checker;//one time only constructor will be called.
    Book book1;//created instance of a class
    book1.setname("Abhishek Book");
    cout<<book1.getname()<<endl;
    return 0;
}
