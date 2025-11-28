//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;
    int first = 1;

    printf("Enter the string: ");
    scanf("%s", str);

    // Print all substrings
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            if (!first) {
                printf(",");
            }
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}



