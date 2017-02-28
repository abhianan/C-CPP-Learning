/*Create a text fie and write into it: There are three classes in cpp which is used to input and output character in a text file. */
///ofstream:stream class to write on files
///ifstream:stream class to read from files
///fstream:stream class to both read and write from /to files.

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ofstream myFile("myText.txt"); ///instance of ofstream
   /// or we can use it [myFile.open("myText.txt")];
    if(myFile.is_open()){
    myFile << "Doodler \n";
    }
    myFile.close();
    cin.get();//just to pause the screen Note: done intentionally
    return 0;
}
