//code create student record system using array and strings
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Roll No: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Course: ");
            scanf(" %[^\n]", s[n].course);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student added successfully!\n");
            break;

        case 2:
            printf("\n=== STUDENT LIST ===\n");
            printf("Roll\tName\t\tCourse\t\tMarks\n");

            for (i = 0; i < n; i++) {
                printf("%d\t%s\t\t%s\t\t%.2f\n",
                       s[i].roll,
                       s[i].name,
                       s[i].course,
                       s[i].marks);
            }
            break;

        case 3:
            printf("Enter Roll No to search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\nStudent Found!\n");
                    printf("Name: %s\nCourse: %s\nMarks: %.2f\n",
                           s[i].name,
                           s[i].course,
                           s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found!\n");
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