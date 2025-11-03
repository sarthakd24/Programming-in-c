// Q41  Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, temp, first, last, n =0, middle, pow10 =1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = temp % 10;
    while (temp > 9) {
        temp /= 10;
        pow10 *= 10;
    }
    first = temp;
    middle = (num % pow10) / 10;
    if (pow10 == 1)
        printf("Output: %d", num);
    else
        printf("Output: %d", last * pow10 + middle * 10 + first);

    return 0;
}
