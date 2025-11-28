// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME 50

struct Student {
    char name[MAX_NAME];
    int roll;
    int marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students, i;
    FILE *file;
    
    // Input student records
    printf("Enter number of students: ");
    scanf("%d", &num_students);
    
    for (i = 0; i < num_students; i++) {
        printf("Student %d -> Name: ", i+1);
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    // Write to file using fprintf()
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    for (i = 0; i < num_students; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);
    
    // Read from file using fscanf() and display
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    printf("\n--- Student Records ---\n");
    while (fscanf(file, "%s %d %d", students[i].name, &students[i].roll, &students[i].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[i].name, students[i].roll, students[i].marks);
        i++;
        if (i >= MAX_STUDENTS) break;
    }
    
    fclose(file);
    return 0;
}
