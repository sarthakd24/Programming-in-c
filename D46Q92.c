//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] > 1) {
                printf("%c\n", str[i]);
                break;
            }
        }
        i++;
    }

    return 0;
}

