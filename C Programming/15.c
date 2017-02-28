#include <stdio.h>
#include <stdlib.h>
/* Multi Dimension Arrays defined like int myarr[1][5][6][10]; i.e. array of 1*5*6*10 .we use nested for loop for iterating here. */
int main()
{
    int myarr[2][3] = { //array of 2row ad 3 columns
    {1,3,2},{5,6,8}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",myarr[i][j]);
        }
    }
    return 0;
}
