//code to create employee management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("=== Employee Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n=== Employee Records ===\n");
    printf("ID\tName\tSalary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}