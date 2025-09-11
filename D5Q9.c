// Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time,simpleinterest,compoundinterest;
    printf("Enter principal, rate (in %%), and time (in years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    
    simpleinterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundinterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%.2lf, Compound Interest=%.2lf\n", simpleinterest, compoundinterest);
    return 0;
}
