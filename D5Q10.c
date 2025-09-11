//Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalseconds,seconds,minutes,hours,remainder;
    printf("Enter time in seconds: ");
    scanf("%d", &totalseconds);

     hours = totalseconds / 3600;
     remainder = totalseconds % 3600;
     minutes = remainder / 60;
     seconds = remainder % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}