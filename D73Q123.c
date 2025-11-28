//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file sample.txt\n");
        return 1;
    }
    
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    char buffer[1024];
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        lines++;  // Each fgets() reads one line
        
        for (int i = 0; buffer[i] != '\0'; i++) {
            chars++;  // Count every character including spaces/newlines
            
            // Check for space or newline manually (no ctype.h)
            if (buffer[i] == ' ' || buffer[i] == '\t' || buffer[i] == '\n' || buffer[i] == '\r') {
                if (in_word) {
                    words++;
                    in_word = 0;
                }
            } else {
                in_word = 1;
            }
        }
    }
    
    // Count potential last word if ended without space
    if (in_word) words++;
    
    fclose(file);
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}

