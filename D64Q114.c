//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int freq[256] = {0}; 
    int max_len = 0, start = 0;

    for (int end = 0; end < n; end++) {
        freq[(unsigned char)s[end]]++;

        
        while (freq[(unsigned char)s[end]] > 1) {
            freq[(unsigned char)s[start]]--;
            start++;
        }
        if (end - start + 1 > max_len) {
            max_len = end - start + 1;
        }
    }
    return max_len;
}

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%999s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}

