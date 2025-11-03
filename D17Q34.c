//Q34 Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int num,i,isprime = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num <=1) {
        isprime = 0; }
        else {
            for(i = 2; i<=num / 2;i++) {
            if ( num%i == 0)
            isprime = 0;
            break; } } 
            if (isprime) {
        
            
            printf("Prime");}
            else {
             printf("Not prime"); }
                    return 0;
              
        }
    


