//Q27 Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
int n, i, odd =1, sum =0;
printf(" Enter n : ");
scanf("%d\n", &n);
for (i =1; i<=n; i++) {
 sum += odd;
 odd += 2;
}
printf(" %d",sum);
return 0;


}