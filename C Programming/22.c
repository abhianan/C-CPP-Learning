#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Structures in C : A structure is a collection of different variable which are grouped together to make some logical group.
we define some attribute to student structure.For every student we can define this different instance of a structure and we
can use structure to make a logical group of the variable defined inside it for a particular student .when we define
structure we call it in main function.*/
struct student {
    int id; //these are called member of the structure
    char name[20];
    float percent;
};
int main()
{
    struct student record1; //struct student has become a data type so we are defining variable record1 of data type struct student
    //record1 is instance of student structure i.e. instance means one part of the student .
    record1.id=12;
    strcpy(record1.name,"JOHN");
    record1.percent=90.5;
    printf("%d %s %f\n",record1.id,record1.name,record1.percent);

    struct student record2;
    record2.id=10;
    strcpy(record2.name,"Anand");
    record2.percent=99.5;
    printf("%d %s %f",record2.id,record2.name,record2.percent);
    return 0;
}
