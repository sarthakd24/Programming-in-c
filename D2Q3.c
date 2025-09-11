// Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length,breadth,area,perimeter;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

     area = length * breadth;
     perimeter = 2 * (length + breadth);

    printf("Area of rectangle is : %d/n",area);
    printf("Perimeter of rectangle is : %d/n",perimeter);
    
    return 0;
}

