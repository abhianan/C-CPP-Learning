/*Passing a structure in  function */

#include <iostream>
#include<cstring>

using namespace std;

struct book //defining new data type called book
{
    char name[50];
    char author[50];
    int id;
};

void printbook(struct book book2){
    cout<<book2.name<<endl;
    cout<<book2.author<<endl;
    cout<<book2.id<<endl;
    }

int main()
{
    struct book book1;
    strcpy(book1.author,"Abhishek");
    strcpy(book1.name,"My Story");
    book1.id=12345;
    printbook(book1);
    return 0;
}
