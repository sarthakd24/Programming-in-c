// Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Grade { A, B, C, D, F };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade grade;
};

int main() {
    // Dynamic allocation using malloc()
    struct Student *student = (struct Student*)malloc(sizeof(struct Student));
    
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Read student data
    scanf("%s %d %d", student->name, &student->roll_no, &student->marks);
    
    // Assign grade based on marks
    if (student->marks >= 90) student->grade = A;
    else if (student->marks >= 80) student->grade = B;
    else if (student->marks >= 70) student->grade = C;
    else if (student->marks >= 60) student->grade = D;
    else student->grade = F;
    
    // Print details using arrow operator
    printf("Name: %s | Roll: %d | Marks: %d\n", 
           student->name, student->roll_no, student->marks);
    
    // Free allocated memory
    free(student);
    
    return 0;
}
