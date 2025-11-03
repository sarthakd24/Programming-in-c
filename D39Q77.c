//Q77 Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("False\n"); // Not a square matrix, so diagonal distinctness is undefined
        return 0;
    }

    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1; // 1 means True
    for(i = 0; i < rows; i++) {
        for(j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0; 
                break;
            }
        }
        if(distinct == 0) {
            break;
        }
    }

    if(distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
