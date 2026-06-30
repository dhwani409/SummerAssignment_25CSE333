//code to create voting eligiblity system
#include <stdio.h>

int main() {
    int age;

    printf("=== Voting Eligibility System ===\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else if (age > 0) {
        printf("You are NOT eligible to vote.\n");
    } else {
        printf("Invalid age entered.\n");
    }

    return 0;
}