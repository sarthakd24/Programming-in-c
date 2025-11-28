// Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person;
    char input[20];
    
    // Read input
    scanf("%s", input);
    
    // Map string to enum and print
    if (strcmp(input, "Gender=MALE") == 0) {
        person.gender = MALE;
        printf("Male\n");
    } else if (strcmp(input, "Gender=FEMALE") == 0) {
        person.gender = FEMALE;
        printf("Female\n");
    } else {
        printf("Invalid gender\n");
        return 1;
    }
    
    return 0;
}
