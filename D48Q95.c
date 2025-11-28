// Q95 Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char sentence[200];
    char longest[100], word[100];
    int i = 0, j = 0, max_len = 0, curr_len = 0;

    printf("Enter the sentence: ");
    scanf(" %[^\n]", sentence);

    
    longest[0] = '\0';

    
    while (1) {
        char ch = sentence[i];

        if (ch != ' ' && ch != '\0') {
        
            word[curr_len++] = ch;
        } else {
        
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
