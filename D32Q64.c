// Q64 Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    char num[20];
    int i, j;
    int max_count = 0;
    int max_digit = 0;
    printf("Enter the number: ");
    scanf("%s", num); 

    
    for(int d = 0; d <= 9; d++) {
        int count = 0;
        
        for(i = 0; num[i] != '\0'; i++) {
            if(num[i] - '0' == d) {
                count++;
            }
        }
        
        if(count > max_count) {
            max_count = count;
            max_digit = d;
        }
    }

    printf("%d\n", max_digit);

    return 0;
}

