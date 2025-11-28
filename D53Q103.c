//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int total_sum = 0;
    int left_sum = 0;

    // Calculate total sum
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    // Find pivot index
    for (int i = 0; i < n; i++) {
        if (left_sum == (total_sum - left_sum - arr[i])) {
            return i;
        }
        left_sum += arr[i];
    }
    return -1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = pivotIndex(arr, n);
    printf("%d\n", pivot);

    return 0;
}

