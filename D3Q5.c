//Q5 Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

     float Fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit=%f\n", &Fahrenheit);


    return 0;
}