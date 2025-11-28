// Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

enum Department { HR, IT, FINANCE, SALES };

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
    enum Department dept;
};

int main() {
    struct Employee emp = {
        "Raj",
        11,
        {12, 5, 2020},
        IT
    };

    FILE *file;

    // Write employee data to binary file
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    // Read employee data from binary file
    struct Employee emp_read;
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, file);
    fclose(file);

    // Display employee data read from file
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d | Department: ", 
           emp_read.name, emp_read.id, emp_read.joining_date.day, 
           emp_read.joining_date.month, emp_read.joining_date.year);

    switch(emp_read.dept) {
        case HR: printf("HR\n"); break;
        case IT: printf("IT\n"); break;
        case FINANCE: printf("Finance\n"); break;
        case SALES: printf("Sales\n"); break;
        default: printf("Unknown\n"); break;
    }

    return 0;
}

