// Q38 Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num , sum = 0, digits;
    printf("enter the number : ");
    scanf(" %d",&num);
    while (num > 0); {
        digits = num % 10;
        sum += digits;
        num /= 10;
    }
    printf("%d\n",sum);
    return 0;
}
