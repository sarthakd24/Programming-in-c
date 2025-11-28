// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }
    
    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(input);
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        // Convert lowercase to uppercase manually
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        fputc(ch, output);
    }
    
    fclose(input);
    fclose(output);
    printf("Conversion completed: input.txt -> output.txt\n");
    
    return 0;
}
