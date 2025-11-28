//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <string.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

// Function accepts structure as parameter and prints members
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student student;
    
    // Read input: "Neha 104 92"
    scanf("%s %d %d", student.name, &student.roll_no, &student.marks);
    
    // Assign enum grade based on marks
    if (student.marks >= 90) student.grade = A;
    else if (student.marks >= 80) student.grade = B;
    else if (student.marks >= 70) student.grade = C;
    else if (student.marks >= 60) student.grade = D;
    else student.grade = F;
    
    // Call function with structure parameter
    printStudent(student);
    
    return 0;
}

