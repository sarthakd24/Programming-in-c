// Q37 Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a,b,lcm;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a , &b);
    int max = (a > b) ? a : b;
    for (lcm = max;;lcm++) {
    if ( max % a == 0 && max % b == 0) {
        printf(" lcm is %d",max);
        break;
        max++; }
      }
     return 0; 


 }
