// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int findRepeatedElement(int nums[], int n) {
    int xor_all = 0;

    
    for (int i = 0; i < n - 1; i++) {
        xor_all ^= i;
    }

    // XOR all elements of the array
    for (int i = 0; i < n; i++) {
        xor_all ^= nums[i];
    }

    return xor_all;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int repeated = findRepeatedElement(nums, n);
    printf("%d\n", repeated);

    return 0;
}

