// Q69 Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n,elements");
    scanf("%d", &n); // Number of elements

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int largest, second_largest;

    if(arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("%d\n", second_largest);

    return 0;
}

