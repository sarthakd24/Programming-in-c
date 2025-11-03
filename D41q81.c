//Q81 Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Enter the string: ");
    
    scanf("%s", str);

    while (str[count] != '\0') {
        count++;
    }
    printf("%d\n", count);

    return 0;
}

