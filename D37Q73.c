// Q73 Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols); 

    int matrix[rows][cols];
    int row_sum[rows];

    printf("Enter matrix elements:\n");
    
    for(i = 0; i < rows; i++) {
        int sum = 0;
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        row_sum[i] = sum; // Store sum of current row
    }

    printf("Sum of each row: ");
    // Print sums of each row
    for(i = 0; i < rows; i++) {
        printf("%d", row_sum[i]);
        if(i != rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

