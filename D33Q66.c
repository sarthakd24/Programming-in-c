// Q66 Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, element, position;
    printf("Enter the n and elements: ");
    scanf("%d", &n); // Number of elements in the sorted array

    int arr[n + 1]; // Extra space for new element

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read sorted array elements
    }
    printf("enter element: ");
    scanf("%d", &element); // Element to insert

    
    for(position = 0; position < n; position++) {
        if(arr[position] > element) {
            break;
        }
    }

    // Shift elements to right to make space
    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at found position
    arr[position] = element;

    // Print updated array
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

