// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int num1, num2, result;
    
    // Read menu choice as string and map to enum
    char input[10];
    scanf("%s %d %d", input, &num1, &num2);
    
    if (strcmp(input, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(input, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }
    
    // Perform operation using switch
    switch (choice) {
        case ADD:
            result = num1 + num2;
            break;
        case SUBTRACT:
            result = num1 - num2;
            break;
        case MULTIPLY:
            result = num1 * num2;
            break;
    }
    
    printf("%d\n", result);
    return 0;
}

