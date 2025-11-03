//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter: ");
    scanf(" %[^\n]", str);

    // Traverse the string until null terminator
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || 
                   (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
            // ASCII ranges for special characters
            special++;
        }
        i++;
    }

    // Print the counts
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
