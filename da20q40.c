//Q40 Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary, temp;
    int digit, n = 0, i;
    long long rev = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    temp = binary;

    // Reverse and count digits
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
        n++; // Counting number of digits
    }

    printf("1's complement: ");
    // Print complemented bits one by one
    for (i = 0; i < n; i++) {
        digit = rev % 10;
        if (digit == 0)
            printf("1");
        else if (digit == 1)
            printf("0");
        else {
            printf
            ("Invalid binary digit!");
            break;
        }
        rev /= 10;
    }
    printf("");
    return 0;
}