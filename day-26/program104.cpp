//code to create quiz application
#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("=== QUIZ APPLICATION ===\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2. What is 5 + 3?\n");
    printf("1. 5\n2. 8\n3. 10\n4. 15\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 8.\n\n");
    }

    // Question 3
    printf("Q3. Which is a programming language?\n");
    printf("1. HTML\n2. CSS\n3. C\n4. XML\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    printf("=== FINAL SCORE ===\n");
    printf("You scored %d out of 3\n", score);

    return 0;
}