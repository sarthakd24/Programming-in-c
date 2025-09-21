//Q22 Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float SP,CP,Profit,ProfitPercentage;
    printf("Enter cp and sp");
    scanf("%f %f",&SP,&CP);
    Profit = SP - CP;
    ProfitPercentage = (Profit/CP)*100;
    printf(" Profit Percentage is %f/n",ProfitPercentage);
    if (ProfitPercentage > 0) {
        printf("PROFIT");
    }
    else {
        printf("LOSS");

    }
    return 0;


}