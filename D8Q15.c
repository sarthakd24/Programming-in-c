//Q15 Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
#include <stdio.h.>
int main(){
    char c;
    printf("Enter a Character");
    scanf(" %c",&c);
    if (c >='a' && c <='z') {
        printf("LOWERCASE ALPHABET");

    }
    else if (c>='A' && c<='Z') {
        printf("UPPERCASE ALPHABET");
    }
    else if (c >='0' && c<='9') {
    printf("DIGITS");
    }
    else {
    printf("SPECIAL CHARACTER");
    }
return 0;
}