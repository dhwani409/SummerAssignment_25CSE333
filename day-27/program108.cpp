//code to create marksheet generation system
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s[100];
    int n, i, j;

    printf("=== Marksheet Generation System ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %s", s[i].name);

        s[i].total = 0;

        printf("Enter marks of 5 subjects:\n");
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = (s[i].total / 5.0);

        // Grade calculation
        if (s[i].percentage >= 75)
            s[i].grade = 'A';
        else if (s[i].percentage >= 60)
            s[i].grade = 'B';
        else if (s[i].percentage >= 40)
            s[i].grade = 'C';
        else
            s[i].grade = 'F';
    }

    // Display marksheet
    printf("\n=== MARKSHEET ===\n");
    printf("Roll\tName\tTotal\tPercentage\tGrade\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\t\t%c\n",
               s[i].roll,
               s[i].name,
               s[i].total,
               s[i].percentage,
               s[i].grade);
    }

    return 0;
}