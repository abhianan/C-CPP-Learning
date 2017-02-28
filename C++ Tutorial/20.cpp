/*Classes and object : class is a collection of related data and function under a single name. Using class we collect same kind
of functions and data and we use this collection in single class.For using member of class we have to define object in main
function. Object is used as there can be many classes and functions having same name so to differentiate them we use object .
An object is instance of the class. */

#include <iostream>
#include<cstring>

using namespace std;

class Book
{
public: //Access Specifier public so we can use its function and variable in main function
    int id=256;
    void printbookid()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Book book1; //book1 is object name . Object declared
    book1.printbookid();
    cout<<book1.id<<endl;
    return 0;
}
