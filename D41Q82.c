//Q82 Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter the string: ");
    // Read a string (no spaces) from input
    scanf("%s", str);

    // Print each character on a new line until null terminator
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}



