//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[200];
    
    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);
    
    // Get text to append from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    // Remove newline from fgets if present
    int len = strlen(text);
    if (len > 0 && text[len-1] == '\n') {
        text[len-1] = '\0';
    }
    
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Cannot open file '%s' for appending\n", filename);
        return 1;
    }
    
    fprintf(file, "%s\n", text);
    fclose(file);
    printf("File updated successfully with appended text.\n");
    
    return 0;
}
