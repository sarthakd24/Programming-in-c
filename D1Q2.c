//Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a,b,add,sub,mul,div;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("Addition of a,b is: %d/n", add);
    printf("Subtraction of a,b is: %d/n",sub);
    printf("Multipication of a,b is: %d/n",mul);
    printf("Division of a,b is: %d/n",div);
    



    return 0;
}
