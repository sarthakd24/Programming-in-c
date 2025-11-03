// Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, element;
    printf("enter the n,elements");
    scanf("%d", &n); // Read size of array

    int arr[n + 1]; // Create array with extra space

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }
    printf("Enter the position");
    scanf("%d %d", &pos, &element); 

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;

    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

