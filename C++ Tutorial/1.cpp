/*C++ is a compiled and object oriented language . Compiled means when you write a code in cpp you need to converrt this program into executable file and that's what compiler will do. It has property of C also. Code block come with compiler gcc .*/

//http://stackoverflow.com/questions/26086842/why-should-i-include-the-header-file-iostream-after-using-the-namespace-std

#include <iostream> /* it includes iostream file .It is called preprocessor directive.It include predefined header file.It will contain some useful function to implement stream-based input/output capabilities .*/

using namespace std; /*We are going to use standard library for our work. When you do #include <iostream> it causes a set of classes and other things to be included in your source file. For iostream, and most of the standard library headers, they place these things in a namespace named std i.e. from iostream class we have to call some function contained in std class . */

/*Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.*/

int main() /*one and only one main function . It is main entry point of your program. It starts and ends with curly braces */
{
    cout << "Hello world!" << endl; /*Prints a string Hello world. cout is function or object in iostream file. It output what is written after << sign or insertion operator in terminal . endl is endline and used with cout . It is used after << . It is used for change line of pointer . \n is used for change line too. */
    // << used for separating values . So everytime you want to write different thing use << e.g. cout << 10 << "Abhishek";
    return 0;//o is defalut value of success .
}
