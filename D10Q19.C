// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the length of triangles");
    scanf("%d %d %d",&a, &b, &c);
    if (a==b && b==c) {
        printf("Equilateral Triangle");
    }
    else if (a==b && b!=c || a==c && a!=b || b==c && b!=a) {
        printf("Isosceles Triangle");
    }
    else {
        printf("Scalene Triangle");
    }
    return 0;

}