// Q65 Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, target;
    printf("Enter the n, elements");
    scanf("%d", &n); 

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
     printf("Enter the element to search: ");
    scanf("%d", &target); 

    int left = 0, right = n - 1, mid, index = -1;

    while(left <= right) {
        mid = (left + right) / 2;

        if(arr[mid] == target) {
            index = mid;
            break;
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}
