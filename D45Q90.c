//Q90: Toggle case of each character in a string.


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    // Toggle case for each character
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    // Print the toggled string
    printf("%s\n", str);

    return 0;
}
