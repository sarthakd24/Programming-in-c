//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    long long binary = 0;  
    long long place = 1;

    while (num > 0) {
        int bit = num % 2;
        binary = binary + bit * place;
        place *= 10;
        num /= 2;
    }

    printf("%lld", binary);

    return 0;
}
