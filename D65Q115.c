//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    int freq[26] = {0};

    // If lengths differ, immediately not anagram
    if (strlen(s) != strlen(t)) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return 0;
    }

    return 1;
}

int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%999s", s);
    printf("Enter second string: ");
    scanf("%999s", t);

    if (isAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}

