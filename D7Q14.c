//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main() {
    char character;
    printf("Enter a Character");
    scanf("%c/n",&character);
    if (character == 'a'|| character =='e'|| character == 'i'|| character == 'o'|| character == 'u') {
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }
    return 0;



    }


