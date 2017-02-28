#include <stdio.h>
#include <stdlib.h>
/* Single Dimension Arrays are variable contains more than value of same data type. Declaration is same as variable declaration.
 Square bracket tell C that it is an array and number inside it tells us number of elements can be stored in the array .
Similarly we can define character array , float array , string array ,etc too. but the data type of every element should be same.*/
int main()
{
    int myarr[3] = {20,30,60};
    int val=myarr[2];
    printf("%d",val);
    char chararr[3]={'a','b','c'};
    char value=chararr[1];
    printf("%c",value);
    for(int i=0;i<sizeof(chararr);i++){
        chararr[0]='d';
        printf("%c",chararr[i]);
    }
    return 0;
}
