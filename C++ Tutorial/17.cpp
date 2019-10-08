/*Pass by value and pass by reference */

#include <iostream>

using namespace std;

void passval(int val){ //copies the value from main function.
    val=100;
    }

void passref(int *val){//passed the address and we are changing value inside address .
    *val=100;
    }
int main()
{
    int x=20;  //initialize x
    passval(x);  //call by value: passval()
    cout<<x<<endl; 
    passref(&x);  //call by reference:: passref()
    cout<<x;
    return 0;
}
