//code to create salary management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;   // House Rent Allowance
    float da;    // Dearness Allowance
    float pf;    // Provident Fund (deduction)
    float netSalary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("=== Salary Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Salary calculations
        emp[i].hra = emp[i].basicSalary * 0.20;  // 20% HRA
        emp[i].da  = emp[i].basicSalary * 0.10;  // 10% DA
        emp[i].pf  = emp[i].basicSalary * 0.12;  // 12% PF deduction

        emp[i].netSalary = emp[i].basicSalary + emp[i].hra + emp[i].da - emp[i].pf;
    }

    // Display salary details
    printf("\n=== Salary Details ===\n");
    printf("ID\tName\tBasic\tHRA\tDA\tPF\tNet Salary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].pf,
               emp[i].netSalary);
    }

    return 0;
}