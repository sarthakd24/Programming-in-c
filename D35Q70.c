// Q70 Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, i, k;
    printf(" Read andEnter elements: ");
    scanf("%d", &n); // Number of elements

    int arr[n], rotated[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }
    printf(" Enter element and no. of positions to rotate: ");
    scanf("%d", &k); // Number of positions to rotate

    k = k % n; // To handle cases when k > n

    // Rotate by copying last k elements to start of rotated array
    for(i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy remaining elements after rotated part
    for(i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    // Print rotated array
    for(i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
