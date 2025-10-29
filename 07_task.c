#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {

       
        for (int s = i; s < rows; s++)      // spaces before stars
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) // stars
            printf("*");
        printf("   |   ");

        
        for (int s = i; s < rows; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d", j);
        printf("   |   ");

        
        for (int s = i; s < rows; s++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}


