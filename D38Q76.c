//Q76 Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int is_symmetric = 1; // Use int as boolean: 1 = true, 0 = false

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if(is_symmetric == 0) {
            break;
        }
    }

    if(is_symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

