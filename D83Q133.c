// Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, 
             JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char input[10];
    scanf("%s", input);
    
    // Convert input to uppercase for comparison
    for(int i = 0; input[i]; i++) {
        input[i] = toupper(input[i]);
    }
    
    if (strcmp(input, "JAN") == 0 || strcmp(input, "JANUARY") == 0) {
        printf("31 days\n");
    } else if (strcmp(input, "FEB") == 0 || strcmp(input, "FEBRUARY") == 0) {
        printf("28 or 29 days\n");
    } else if (strcmp(input, "MAR") == 0 || strcmp(input, "MARCH") == 0 ||
               strcmp(input, "MAY") == 0 || strcmp(input, "MAY") == 0 ||
               strcmp(input, "JUL") == 0 || strcmp(input, "JULY") == 0 ||
               strcmp(input, "AUG") == 0 || strcmp(input, "AUGUST") == 0 ||
               strcmp(input, "OCT") == 0 || strcmp(input, "OCTOBER") == 0 ||
               strcmp(input, "DEC") == 0 || strcmp(input, "DECEMBER") == 0) {
        printf("31 days\n");
    } else if (strcmp(input, "APR") == 0 || strcmp(input, "APRIL") == 0 ||
               strcmp(input, "JUN") == 0 || strcmp(input, "JUNE") == 0 ||
               strcmp(input, "SEP") == 0 || strcmp(input, "SEPTEMBER") == 0 ||
               strcmp(input, "NOV") == 0 || strcmp(input, "NOVEMBER") == 0) {
        printf("30 days\n");
    } else {
        printf("Invalid month\n");
    }
    
    return 0;
}
