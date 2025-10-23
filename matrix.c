#include<stdio.h>
int main()
{
    // int mat[3][3];
    // int i,j;
    //nested loop
    //pyramid pattern
    printf("pyramid pattern\n");
    int i,j;

    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
 return 0;
}
