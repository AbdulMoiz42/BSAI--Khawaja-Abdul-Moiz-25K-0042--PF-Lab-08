// Write C code to print this pattern
//  1:   1 2 3 4 5
//  2:   2 4 6 8 10
//  3:   3 6 9 12 15
//  4:   4 8 12 14 20
//  5:   5 10 15 20 25

#include <stdio.h>

int main() {
    int i,j;
    int num=0;
   
printf("mutlipication table(1-num)\n");
printf("Enter number for table multiplication:");
scanf("%d",&num);
for(i=1;i<=num;i++){
    printf("%d:",i);
    for(j=1;j<=10;j++){
        printf("%4d",i*j);
    }
    printf("\n");
}
    return 0;
}
