//Q68 Delete an element from an array.
#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Read and enter element: ");
    scanf("%d", &n); 

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("Enter the position to delete: ");
    scanf("%d", &pos); 
    
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
