// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[10];
    enum Role role;
    
    // Read role input
    scanf("%s", input);
    
    // Map string to enum value
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid role\n");
        return 1;
    }
    
    // Display message based on role using switch
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    
    return 0;
}

