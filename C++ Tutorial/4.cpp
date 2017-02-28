/*If-else or conditional statement.*/
#include <iostream>

using namespace std;

int main()
{
    int age;
    int height;
    cout << "Enter the age and height" <<endl;
    cin>> age;
    cin>>height;
    if(age>10 || height >10){
        cout<<"greater than 10";
    }else if(age==10 && height ==10){
        cout<<"equal to 10";
        }else{
    cout <<"less than 10";}
    return 0;
}
