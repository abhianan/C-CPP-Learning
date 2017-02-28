/*Read from text file */
///ofstream:stream class to write on files
///ifstream:stream class to read from files
///fstream:stream class to both read and write from /to files.

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    string line_;
    ifstream readfile("myText.txt");
    if(readfile.is_open()){
        while(getline(readfile,line_)){///reading file line by line and store into the string variable line_
                cout<<line_<<" ";
        }
        readfile.close();
    }else{
    cout<<"File is not open"<<endl;}
    cin.get();
    return 0;
}
