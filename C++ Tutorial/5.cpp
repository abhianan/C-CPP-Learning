/*Switch statement: If we don't put break then it will print the cout value until it finds a break.*/
#include <iostream>

using namespace std;

int main()
{
    char grade;
    cin>>grade;
    switch(grade){
    case 'a':
        cout<<"Excellent";
        break;
    case 'b':
        cout<<"Very good";
        break;
    default:
        cout<<"Bad";
        break;
    }
    return 0;
}
