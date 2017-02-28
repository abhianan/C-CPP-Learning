///include Books.h and Books.cpp from previous tutorial as there is no change in them just added main.cpp here

/*Arrow member selection operator and pointers to the classes : */

#include <iostream>
#include<string>
#include "Books.h"

using namespace std;

int main()
{
    Books book1;
    book1.setbookid(100);
    cout<<book1.getbookid()<<endl;
    Books *bookpointer;
    bookpointer=&book1;
    (*bookpointer).setbookid(20);
    cout<<(*bookpointer).getbookid()<<endl;
    bookpointer->setbookid(30); /*arrow member selection operator i.e.bookpointer is a pointer instead of [(*bookpointer).] we use [bookpointer->]*/
    cout<<bookpointer->getbookid()<<endl;
    return 0;
}
