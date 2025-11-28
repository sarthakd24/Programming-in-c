// Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

int areIdentical(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0 &&
            s1.roll_no == s2.roll_no &&
            s1.marks == s2.marks &&
            s1.grade == s2.grade);
}

int main() {
    struct Student student1, student2;
    
    // Read Student1 data
    scanf("%s %d %d", student1.name, &student1.roll_no, &student1.marks);
    if (student1.marks >= 90) student1.grade = A;
    else if (student1.marks >= 80) student1.grade = B;
    else if (student1.marks >= 70) student1.grade = C;
    else if (student1.marks >= 60) student1.grade = D;
    else student1.grade = F;
    
    // Read Student2 data
    scanf("%s %d %d", student2.name, &student2.roll_no, &student2.marks);
    if (student2.marks >= 90) student2.grade = A;
    else if (student2.marks >= 80) student2.grade = B;
    else if (student2.marks >= 70) student2.grade = C;
    else if (student2.marks >= 60) student2.grade = D;
    else student2.grade = F;
    
    // Check if identical including enum grade
    if (areIdentical(student1, student2)) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    
    return 0;
}

