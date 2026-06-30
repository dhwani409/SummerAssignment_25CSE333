//code to create student record management system
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("=== Student Record Management System ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n=== Student Records ===\n");
    printf("Roll No\tName\tMarks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}