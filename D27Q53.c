/* Q53 Write a program to print the following pattern:

*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int rows = 9; // Total rows in the pattern
    int mid = rows / 2; // Middle index for the widest part

    for (int i = 0; i < rows; i++) {
        int stars;

        if (i <= mid) {
            stars = 2 * i + 1;  // Increasing stars for top half
        } else {
            stars = 2 * (rows - i) - 1;  // Decreasing stars for bottom half
        }

        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
