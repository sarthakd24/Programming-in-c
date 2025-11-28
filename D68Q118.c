// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int findMissingNumber(int nums[], int n) {
    int total_sum = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return total_sum - sum;
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements (between 0 to %d, missing one):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int missing = findMissingNumber(nums, n);
    printf("%d\n", missing);

    return 0;
}

