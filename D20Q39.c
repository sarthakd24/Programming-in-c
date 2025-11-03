// Q39 Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num,rem,product = 1,odd;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num != 0) {
        rem = num % 10;
        if( rem % 2 == 1) {
            product *= rem;
            odd = 1;
        }
        num = num / 10;
        
    }
    printf("Product of odd number = %d",product);
    return 0;

 }
