#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* String is a single dimensional array of characters which is terminated by a null character . or string is character array
of non definite size. There is a header file in C for String [#include <string.h>]*/

int main()
{
    char my_string[6]={'h','e','l','l','o','\0'};
    char my_otherstring[]="Hello";
    char stringarr1[12]="Hello";
    char stringarr2[12]="World";
    char stringarr3[12];
    printf("%s\n",my_otherstring);
    printf("%s\n",my_string);
    strcpy(stringarr3,stringarr1);//function enables us to copy one string to another strcpy(dest,source)
    strcat(stringarr1,stringarr2);//concatenate two string
    int lengthstring=strlen(stringarr1);//length of the string or size of the character array
    printf("%s\n",stringarr3);
    printf("%s\n",stringarr1);
    printf("%d\n",lengthstring);
    int value=strcmp(stringarr1,stringarr2); //for comparing two string if not match return -1
    printf("%d",value);
    return 0;
}
