// Q43 Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, temp, digit, sum =0, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
