//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[11]; 

    printf("Enter the date: ");
    scanf("%s", date);

    printf("%.2s-", date);

    if (date[3] == '0' && date[4] == '4') {
        printf("Apr-");
    } else {
        // If month differs, print as is with dashes instead of slashes
        printf("%.2s-", &date[3]);
    }

    // Print year (last four chars)
    printf("%.4s\n", &date[6]);

    return 0;
}

