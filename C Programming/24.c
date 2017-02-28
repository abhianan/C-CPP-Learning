#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Union in C : union functionally work like structure but there are some key difference . structure allocates different memory
to variable but union allocates same memory allocation and size of memory is maximum size of memory inside it.
so, when we initialized mychar then it replaced myint to mychar so,every time it will print 9.
Union are mainly used in embedded programming where we play with memory. */

union myunion{
    int myint; //integer has a size of 4 byte
    char mychar; //char data type has size of 1 byte
};

int main()
{
    union myunion uni;
    uni.myint=4;
    uni.mychar=9;
    printf("%i\n",uni.mychar); //%i used for signed integer
    printf("%d",sizeof(uni));
    return 0;
}
