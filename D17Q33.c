// Q33 Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original,remainder,sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += remainder * remainder * remainder;
        original /= 10;
    }

    if (sum == num)
        printf("Armstrong");

    else
        printf("Not Armstrong");

    return 0;
}

