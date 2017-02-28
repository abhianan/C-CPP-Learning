/*Destructor: is special kind of class member function that is executed when object of class is destroyed when it goes out of
the scope.*/
/*Note : whenever we don't declare constructor or destructor in the class, it will create a constructor and destructor automatically. */
#include <iostream>
#include<string>

using namespace std;

class Book
{
public:
    Book()
    {
        cout<<"We are in constructor"<<endl;
    }
    ~Book() // simply put tilde and keep same name as class called destructor
    /*use of destructor is to destroy the object whenever it goes out of the scope.*/
    {
        cout<<"We are in destructor"<<endl;
    }
};
/*Here first constructor will be called and when it goes out of main function i.e. scope then destructor will be called.
when destructor is called all the resources which are contained by the book object will be released or all the memory
hold by it will be released.*/
int main()
{
    Book book1;
    cout<<1<<endl;
    return 0;
}
