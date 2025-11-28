// Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

// Function to modify student data via pointer
void modifyStudent(struct Student *s, const char *name, int roll_no, int marks) {
    // Modify using arrow operator
    sscanf(name, "%49s", s->name); // safer string copy using sscanf
    s->roll_no = roll_no;
    s->marks = marks;
    // Assign grade based on marks
    if (marks >= 90) s->grade = A;
    else if (marks >= 80) s->grade = B;
    else if (marks >= 70) s->grade = C;
    else if (marks >= 60) s->grade = D;
    else s->grade = F;
}

int main() {
    struct Student student;
    struct Student *ptr = &student;

    // Input new values
    char name[50];
    int roll, marks;
    scanf("%s %d %d", name, &roll, &marks);

    // Modify student data using pointer
    modifyStudent(ptr, name, roll, marks);

    // Display modified data using pointer
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}


