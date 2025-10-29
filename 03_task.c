#include <stdio.h>

int main() {
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int inverted[4][4];
    int whiteCount = 0;

    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(image[i][j] == 1){
                whiteCount++;
            inverted[i][j] = 0;
        }
        else{
            inverted[i][j]=1;
        }

        }
    }

   
    printf("Original image\t\tInverted image\n");
    for(int i = 0; i < 4; i++) {
        
        for(int j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
        }

        printf("\t\t");

      
        for(int j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal white pixels in original image: %d\n", whiteCount);

    return 0;
}
