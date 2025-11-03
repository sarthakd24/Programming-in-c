// Q36 Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d ", &a,&b);
    int min = ( a <b ) ? a : b;
    int hcf = 1;
    for (int i =1;i<=min;i++) {
        if ( a%i == 0 && b%i ==0) {
            hcf = i;}
        }
         printf("%d",hcf);
         return 0;

    }



