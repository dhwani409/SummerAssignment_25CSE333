//code to create contact management system
#include <stdio.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n=== CONTACT MANAGEMENT SYSTEM ===\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Contact ID: ");
            scanf("%d", &c[n].id);

            printf("Enter Name: ");
            scanf(" %s", c[n].name);

            printf("Enter Phone Number: ");
            scanf(" %s", c[n].phone);

            n++;
            printf("Contact added successfully!\n");
            break;

        case 2:
            printf("\n=== CONTACT LIST ===\n");
            printf("ID\tName\tPhone\n");

            for (i = 0; i < n; i++) {
                printf("%d\t%s\t%s\n",
                       c[i].id,
                       c[i].name,
                       c[i].phone);
            }
            break;

        case 3:
            printf("Enter Contact ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    printf("\nContact Found!\n");
                    printf("Name: %s\nPhone: %s\n",
                           c[i].name,
                           c[i].phone);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");
            break;

        case 4:
            printf("Enter Contact ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    found = 1;

                    // shift elements to delete contact
                    for (int j = i; j < n - 1; j++) {
                        c[j] = c[j + 1];
                    }

                    n--;
                    printf("Contact deleted successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");
            break;

        case 5:
            printf("Exiting system...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}