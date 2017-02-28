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
    int x=20;
    passval(x);
    cout<<x<<endl;
    passref(&x);
    cout<<x;
    return 0;
}
