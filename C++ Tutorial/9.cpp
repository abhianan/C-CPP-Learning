/*Functions : block of code which execute some task assigned to it. we can declare function above or below main.
As program execute from top to bottom so defining below will give error. So we prototype function and then use it. */
#include <iostream>

using namespace std;

void belfunc(); //prototyping of a function

void func(){//no return type
    cout<<"Hello World"<<endl;
}
int main()
{
    func();
    belfunc();
    return 0;
}

void belfunc(){
cout<<"Below Func"<<endl;
}
