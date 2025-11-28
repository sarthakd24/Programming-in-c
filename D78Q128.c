// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>

int main() {
    char filename[100];
    int vowels = 0, consonants = 0;
    int ch;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        // Convert to uppercase for easier checking
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        
        // Check for vowels
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (other letters)
        else if (ch >= 'A' && ch <= 'Z') {
            consonants++;
        }
    }
    
    fclose(file);
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}
