// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    double sum = 0.0;
    for(int i = 1; i <= n; i++) {
        int numerator = 2 * i;
        int denominator = 4 * i - 1;
        sum += (double)numerator / denominator;
    }
    
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
