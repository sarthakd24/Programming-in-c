//Q4 Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
#define PI  3.14159


int main() {
    float radius, area, circumference;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI  * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of circle is : .02%f/n",area);
    printf("Circumference of circle is : .02%f/n",circumference);

    return 0;
}

