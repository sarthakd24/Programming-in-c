//Q94: Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char sentence[200];
    char longest[100], word[100];
    int i = 0, j = 0, max_len = 0, curr_len = 0;

    // Read the whole sentence including spaces
    scanf(" %[^\n]", sentence);

    // Initialize longest word as empty
    longest[0] = '\0';

    // Iterate through the sentence to extract words
    while (1) {
        char ch = sentence[i];

        if (ch != ' ' && ch != '\0') {
            // Build current word
            word[curr_len++] = ch;
        } else {
            // Word ended, null-terminate it
            if (curr_len > 0) {
                word[curr_len] = '\0';

                
                if (curr_len > max_len) {
                    max_len = curr_len;
                    
                    j = 0;
                    while (word[j] != '\0') {
                        longest[j] = word[j];
                        j++;
                    }
                    longest[j] = '\0';
                }
                curr_len = 0;
            }

            if (ch == '\0') {
                break;
            }
        }
        i++;
    }

    
    printf("%s\n", longest);

    return 0;
}

