// Q61 Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, target, index = -1;
    printf("Enter the elements: ");
    scanf("%d", &n); 

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &target); 

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i; 
            break; 
        }
    }

    if(index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("Element not found\n"); 
    }

    return 0;
}

