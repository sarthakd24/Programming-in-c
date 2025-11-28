// Q98 Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, word_start = 0;
    int last_space_index = -1;

    printf("Enter the name: ");
    scanf(" %[^\n]", name);

    // Find the last space index to identify surname start
    while (name[i] != '\0') {
        if (name[i] == ' ') {
            last_space_index = i;
        }
        i++;
    }

    
    for (i = 0; i < last_space_index; i++) {
        if (i == 0 && name[i] != ' ') {
            // First character of first name initial
            printf("%c.", name[i]);
        } else if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            // Initial of following word
            printf("%c.", name[i+1]);
        }
    }

    // Print surname fully after the last space
    if (last_space_index != -1) {
        printf(" %s\n", &name[last_space_index + 1]);
    } else {
        // If no space found, entire name is one word (print as is)
        printf("%s\n", name);
    }

    return 0;
}
