/*Read from text file */

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    int id;
    string name;
    int age;
    ifstream readfile("abh.txt");
    if(readfile.is_open()){
        while(readfile>> id >>name >>age){///>> for read from file . It will read text file line by line and first will store id ,etc
            cout<<id <<" "<<name<<" "<<age<<endl;
        }
        readfile.close();
    }else{
    cout<<"File is not open"<<endl;}
    cin.get();
    return 0;
}
