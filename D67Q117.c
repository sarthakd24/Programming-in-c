// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

void mergeArrays(int nums1[], int m, int nums2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    // Copy remaining elements of nums1
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    // Copy remaining elements of nums2
    while (j < n) {
        merged[k++] = nums2[j++];
    }
}

int main() {
    int m, n;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    mergeArrays(nums1, m, nums2, n, merged);

    printf("Merged sorted array:\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
