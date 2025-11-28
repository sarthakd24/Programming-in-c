// Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

int main() {
    struct Student students[5];
    int i;
    
    // Read details of 5 students
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        
        // Assign grade based on marks
        if (students[i].marks >= 90) students[i].grade = A;
        else if (students[i].marks >= 80) students[i].grade = B;
        else if (students[i].marks >= 70) students[i].grade = C;
        else if (students[i].marks >= 60) students[i].grade = D;
        else students[i].grade = F;
        
        printf("\n");
    }
    
    // Print tabular list
    printf("\n--- Student Records ---\n");
    printf("Name\t\tRoll\tMarks\tGrade\n");
    printf("------------------------------------\n");
    
    for (i = 0; i < 5; i++) {
        printf("%-15s %4d\t%4d\t", 
               students[i].name, students[i].roll_no, students[i].marks);
        
        switch(students[i].grade) {
            case A: printf("A\n"); break;
            case B: printf("B\n"); break;
            case C: printf("C\n"); break;
            case D: printf("D\n"); break;
            case F: printf("F\n"); break;
        }
    }
    
    return 0;
}

