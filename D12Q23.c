    /*  Q23 Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/  
#include <stdio.h>
int main() {
    int fine,days;
    printf("ENTER THE DAYS");
    scanf("%d/n",&days);
    if ( days <=5) {
        fine = 2*days; 
    }
    else if (days <= 10) {
        fine = 4*days;
    }
    else if ( days <=30) {
        fine = 6*days;
    }
    else {
        printf("Membership Cancelled");
    }
    printf("%d/n",fine);
    return 0;

}