//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    if (k > n) return -1; // Invalid case

    int max_sum = 0;
    // Calculate sum of first k elements
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; 
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }
    return max_sum;
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int result = maxSumSubarray(arr, n, k);
    printf("%d\n", result);

    return 0;
}
