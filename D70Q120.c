//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character if it's lowercase letter to uppercase
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - ('a' - 'A');  // convert to uppercase
    }

    while (str[i] != '\0') {
        // If current char is space or tab/newline, capitalise next char if lowercase
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (str[i+1] >= 'a' && str[i+1] <= 'z') {
                str[i+1] = str[i+1] - ('a' - 'A');  // uppercase
                i++;
            }
        } else {
            // Convert uppercase chars to lowercase if not first letter of word
            if (str[i] >= 'A' && str[i] <= 'Z' && !(i == 0 || (str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n'))) {
                str[i] = str[i] + ('a' - 'A');  // lowercase
            }
        }
        i++;
    }

    printf("Title Case: %s", str);

    return 0;
}



