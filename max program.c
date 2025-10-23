#include <stdio.h>

 int main() {
 int mat[3][3] = {{12, 45, 32}, {2, 13, 45}, {4, 8, 7}};
 int i,j;

int max=0;
 max=mat[0][0];
 
 
  for ( i = 0; i < 3; i++) {
  for ( j = 0; j < 3; j++) {
   if(mat[i][j]>=max)
   {
       max=mat[i][j];
   }
   
 }
  printf("\n");
 }
 printf("%d",max);

// printf("\nmat[%d][%d]=%d\n",0,1,mat[0][1]);
 return 0;
 }
