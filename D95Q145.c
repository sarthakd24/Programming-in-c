
// Q145: Return a structure containing top student's details from a function.
#include <stdio.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

// Function to find and return top student from array
struct Student getTopStudent(struct Student students[], int n) {
    int i, max_idx = 0;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[max_idx].marks) {
            max_idx = i;
        }
    }
    return students[max_idx];
}

int main() {
    struct Student students[3];
    int i, n = 3;
    
    // Read 3 students' details
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
        
        // Assign grade based on marks
        if (students[i].marks >= 90) students[i].grade = A;
        else if (students[i].marks >= 80) students[i].grade = B;
        else if (students[i].marks >= 70) students[i].grade = C;
        else if (students[i].marks >= 60) students[i].grade = D;
        else students[i].grade = F;
    }
    
    struct Student top = getTopStudent(students, n);
    
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    
    return 0;
}
