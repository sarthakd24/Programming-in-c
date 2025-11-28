//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <string.h>

int main() {
    char source[100], dest[100];
    
    // Get source filename from user
    printf("Enter source filename: ");
    scanf("%s", source);
    
    // Get destination filename from user  
    printf("Enter destination filename: ");
    scanf("%s", dest);
    
    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file '%s'\n", source);
        return 1;
    }
    
    FILE *dst = fopen(dest, "w");
    if (dst == NULL) {
        printf("Error: Cannot create destination file '%s'\n", dest);
        fclose(src);
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
    
    fclose(src);
    fclose(dst);
    printf("File copied successfully to %s\n", dest); 
    
    return 0;
}

