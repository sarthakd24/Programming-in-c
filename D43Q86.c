// Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int is_palindrome = 1; 

    printf("Enter the string: ");
    scanf("%s", str);

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            is_palindrome = 0;  
            break;
        }
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}

