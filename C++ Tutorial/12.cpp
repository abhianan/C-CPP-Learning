/*Variable scope and unary scope resolution operator : local variable is preferred if local and global variable have same name.
So for using global value we need unary scope resolution operator i.e. give (::) two colons before variable.This tells that this
variable is global variable not local variable.*/
#include <iostream>

using namespace std;

int x=20;
int y=30;
void printme(){
    x=30;
    cout<<"Print Something";
    }
int main()
{
    int y=10;
    cout<<x<<endl; //output 20
    cout<<y<<endl; //output 10
    cout<<::y<<endl;//output 30
    printme();
    return 0;
}
