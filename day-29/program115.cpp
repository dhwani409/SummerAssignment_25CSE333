//code to create menu driven string operation system
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice, len, i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    do {
        printf("\n=== MENU DRIVEN STRING SYSTEM ===\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Reverse String\n");
        printf("5. Compare Strings\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            len = strlen(str1);
            printf("Length = %d\n", len);
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String: %s\n", str2);
            break;

        case 3:
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
            break;

        case 4:
            len = strlen(str1);
            printf("Reversed String: ");
            for (i = len - 1; i >= 0; i--) {
                printf("%c", str1[i]);
            }
            printf("\n");
            break;

        case 5:
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}