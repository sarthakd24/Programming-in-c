// Q143: Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

int main() {
    struct Student students[3];
    int n = 3, i, max_idx = 0;
    
    // Read 3 students' data
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
        
        // Assign grade based on marks
        if (students[i].marks >= 90) students[i].grade = A;
        else if (students[i].marks >= 80) students[i].grade = B;
        else if (students[i].marks >= 70) students[i].grade = C;
        else if (students[i].marks >= 60) students[i].grade = D;
        else students[i].grade = F;
    }
    
    // Find student with highest marks
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[max_idx].marks) {
            max_idx = i;
        }
    }
    
    // Print topper
    printf("Topper: %s (Marks: %d)\n", 
           students[max_idx].name, students[max_idx].marks);
    
    return 0;
}
