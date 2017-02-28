///main.cpp
/*Placing classes in different file other than main.cpp and use those classes from main.cpp. */

#include <iostream>
#include<string>
#include "Books.h"

using namespace std;

int main()
{
    Books book1;
    book1.setbookid(100);
    cout<<book1.getbookid()<<endl;
    return 0;
}

///--------------------------------------------------------------------------------------------------------

///Books.h

/*Placing classes in different file other than main.cpp and use those classes from main.cpp. */

#include <iostream>
#include<string>
#include "Books.h"

using namespace std;

int main()
{
    Books book1;
    book1.setbookid(100);
    cout<<book1.getbookid()<<endl;
    return 0;
}

///-----------------------------------------------------------------------------------------------------------------------------

///Books.cpp

/*Source file : will contain definition of those member functions or those classes i.e. here we will write method definition.*/
#include "Books.h" ///include all the declaration from Books.h file

Books::Books() ///called binary scope resolution operator . classname :: constructor or member function
{
}
void Books::setbookid(int bookId_) ///as setbookid is member function of Books class
{
    bookId=bookId_;
}
int Books::getbookid()
{
    return bookId;
}

///-------------------------------------------------------------------------------------------------------------------------------