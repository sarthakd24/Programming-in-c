// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student student;
    
    // Read student data
    printf("Name: ");
    scanf("%s", student.name);
    printf("Roll: ");
    scanf("%d", &student.roll_no);
    printf("Marks: ");
    scanf("%d", &student.marks);
    
    // Print student data
    printf("Name: %s | Roll: %d | Marks: %d\n", 
           student.name, student.roll_no, student.marks);
    
    return 0;
}

