//code to create library management system
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int isIssued; // 0 = available, 1 = issued
};

int main() {
    struct Book b[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n=== LIBRARY MANAGEMENT SYSTEM ===\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Title: ");
            scanf(" %s", b[n].title);

            printf("Enter Author Name: ");
            scanf(" %s", b[n].author);

            b[n].isIssued = 0;
            n++;

            printf("Book added successfully!\n");
            break;

        case 2:
            printf("\n=== BOOK LIST ===\n");
            printf("ID\tTitle\tAuthor\tStatus\n");

            for (i = 0; i < n; i++) {
                printf("%d\t%s\t%s\t%s\n",
                       b[i].id,
                       b[i].title,
                       b[i].author,
                       b[i].isIssued ? "Issued" : "Available");
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("\nBook Found!\n");
                    printf("Title: %s\nAuthor: %s\nStatus: %s\n",
                           b[i].title,
                           b[i].author,
                           b[i].isIssued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    found = 1;
                    if (b[i].isIssued == 0) {
                        b[i].isIssued = 1;
                        printf("Book issued successfully!\n");
                    } else {
                        printf("Book already issued!\n");
                    }
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    found = 1;
                    if (b[i].isIssued == 1) {
                        b[i].isIssued = 0;
                        printf("Book returned successfully!\n");
                    } else {
                        printf("Book was not issued!\n");
                    }
                    break;
                }
            }

            if (!found) {
                printf("Book not found!\n");
            }
            break;

        case 6:
            printf("Exiting system...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}