//Q13 Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main() {
    int a;
    printf("Enter a Year");
    scanf("%d/n",&a);
    if (a % 4==0 && a % 100 !=0) {
        printf(" Year is a Leap year");
    } else  {
        printf("Year is not a Leap year");
    }
    return 0;


}