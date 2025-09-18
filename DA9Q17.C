#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, r1, r2, realpart, imgpart;
    printf("enter the values");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different: %.0lf, %.0lf\n", r1, r2);
    } else if (D == 0) {
        r1 = -b / (2*a);
        printf("Roots are real and same: %.0lf\n", r1);
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}
