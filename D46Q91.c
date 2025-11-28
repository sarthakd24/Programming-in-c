// Q91 Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int i = 0, j = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    
    while (str[i] != '\0') {
        char ch = str[i];
        char lower_ch = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;

        if (lower_ch != 'a' && lower_ch != 'e' && lower_ch != 'i' &&
            lower_ch != 'o' && lower_ch != 'u') {
            result[j] = ch;  
            j++;
        }
        i++;
    }
    result[j] = '\0';  

    printf("%s\n", result);

    return 0;
}

