// A small cinema has 3 rows with 3 seats in each row. The booking system marks a seat as 1 if it is booked
// and 0 if it is available. Find the total number of available seats and list their positions.
// Row 1: 1, 0, 1
// Row 2: 0, 0, 1
// Row 3: 1, 1, 0

#include <stdio.h>

int main() {
    int seats[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };

    int available = 0;

    printf("Available seats are at positions:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(seats[i][j] == 0) {   // seat is available
                available++;
                printf("Row %d, Seat %d\n", i + 1, j + 1);
            }
        }
    }

    printf("\nTotal available seats: %d\n", available);

    return 0;
}

