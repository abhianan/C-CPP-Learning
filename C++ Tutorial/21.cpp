/*Setter and getter :Access variable indirectly in main functions. It enables us to access the content of private member using
public function setname and getname.
It is not a good practice to access your member variable of the class directly in min function because I want to protect my variable
and don't want other user to change variable content.So we use setter and getter .*/

#include <iostream>
#include<string>

using namespace std;

class Book
{
public:
    void setname(string x) //setter function
    {
        name=x;
    }
    string getname() //getter function
    {
      return name;
    }
private: // it is private to this class and will be not visible outside the class.
    string name; //can't be accessed outside this class
};

int main()
{
    Book book1;
    book1.setname("Abhishek Book");//private variable "name" get value Abhishek book i.e. it is accessing name variable
    cout<<book1.getname()<<endl;
    return 0;
}
