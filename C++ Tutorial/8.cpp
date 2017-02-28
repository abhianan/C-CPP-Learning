/*do-while loop : it will execute at least once but while will check condition first. */
#include <iostream>

using namespace std;

int main()
{
    int i=0;
    do{
        cout<<i<<endl;
        i+=2;
    }while(i<0); // will print at least 0
    return 0;
}
