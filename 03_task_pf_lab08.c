#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int total_desks = rows * cols;
    int students = 0, empty = 0;

    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (int i = 0; i < rows; i++) {
        printf("Row %d ", i + 1);
        for (int j = 0; j < cols; j++) {
            // Checkerboard pattern
            if ((i + j) % 2 == 0) {
                printf("x ");
                students++;
            } else {
                printf("o ");
                empty++;
            }
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", total_desks);

    return 0;
}
