// Q146: Create Employee structure with nested Date structure for joining date and print details.

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
    struct Employee emp;
    
    // Read employee data
    scanf("%s %d %d %d %d", emp.name, &emp.id, 
          &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);
    
    // Assign department (default IT for this example)
    emp.dept = IT;
    
    // Print formatted details
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           emp.name, emp.id, 
           emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    
    return 0;
}
