// Q28 Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
int n,i,product =1,even =0;
printf(" ENTER n: ");
scanf("%d\n", &n);
for(i =2; i <=n;i++) {
    even += 2;
    product *= even;
}
printf("%d\n",product);
return 0;
}
