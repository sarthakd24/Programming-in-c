// add two matrices
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible due to dimension mismatch.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], sum[rows1][cols1];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d", sum[i][j]);
            if(j != cols1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
