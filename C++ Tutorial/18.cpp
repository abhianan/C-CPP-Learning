/*Data Structure or structure (struct) : for defining own data type . */

#include <iostream>
#include<cstring>

using namespace std;

struct book //defining new data type called book
{
    char name[50];
    char author[50];
    char *c;
    int id;
};

int main()
{
    struct book book1;
    strcpy(book1.author,"Abhishek");
    strcpy(book1.name,"My Story");
    book1.c="Anand";
    book1.id=12345;
    cout<<book1.id<<endl;
    cout<<book1.name<<endl;
    cout<<book1.author<<endl;
    cout<<book1.c<<endl;
    return 0;
}
