//code to develop complete mini project using arrays,strings and functions
#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure
struct Student {
    int roll;
    char name[50];
    char course[30];
    float marks;
};

struct Student s[MAX];
int n = 0;

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();

int main() {
    int choice;

    do {
        printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}

// Function to add student
void addStudent() {
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
}

// Function to display students
void displayStudents() {
    int i;

    printf("\n=== STUDENT LIST ===\n");
    printf("Roll\tName\t\tCourse\t\tMarks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].course,
               s[i].marks);
    }
}

// Function to search student
void searchStudent() {
    int roll, i, found = 0;

    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

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
}

// Function to update student
void updateStudent() {
    int roll, i, found = 0;

    printf("Enter Roll No to update: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("Enter new name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter new course: ");
            scanf(" %[^\n]", s[i].course);

            printf("Enter new marks: ");
            scanf("%f", &s[i].marks);

            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}