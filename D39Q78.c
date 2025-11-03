// Q78 Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}

