//code to create mini employee management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee e[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n=== MINI EMPLOYEE MANAGEMENT SYSTEM ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Enter Name: ");
            scanf(" %[^\n]", e[n].name);

            printf("Enter Department: ");
            scanf(" %[^\n]", e[n].department);

            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);

            n++;
            printf("Employee added successfully!\n");
            break;

        case 2:
            printf("\n=== EMPLOYEE LIST ===\n");
            printf("ID\tName\t\tDepartment\tSalary\n");

            for (i = 0; i < n; i++) {
                printf("%d\t%s\t\t%s\t\t%.2f\n",
                       e[i].id,
                       e[i].name,
                       e[i].department,
                       e[i].salary);
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (e[i].id == id) {
                    printf("\nEmployee Found!\n");
                    printf("Name: %s\nDepartment: %s\nSalary: %.2f\n",
                           e[i].name,
                           e[i].department,
                           e[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found!\n");
            break;

        case 4:
            printf("Exiting system...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}