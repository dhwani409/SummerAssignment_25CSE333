//code to create ticket booking system
#include <stdio.h>

struct Ticket {
    int id;
    char name[50];
    int seats;
    float price;
};

int main() {
    struct Ticket t[50];
    int n = 0, choice, i, id, found;
    float total;

    do {
        printf("\n=== TICKET BOOKING SYSTEM ===\n");
        printf("1. Book Ticket\n");
        printf("2. View Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Ticket ID: ");
            scanf("%d", &t[n].id);

            printf("Enter Name: ");
            scanf(" %s", t[n].name);

            printf("Enter Seats: ");
            scanf("%d", &t[n].seats);

            printf("Enter Price per Seat: ");
            scanf("%f", &t[n].price);

            n++;
            printf("Ticket booked successfully!\n");
            break;

        case 2:
            printf("\n=== ALL BOOKINGS ===\n");
            printf("ID\tName\tSeats\tPrice\tTotal\n");

            for (i = 0; i < n; i++) {
                total = t[i].seats * t[i].price;
                printf("%d\t%s\t%d\t%.2f\t%.2f\n",
                       t[i].id, t[i].name, t[i].seats, t[i].price, total);
            }
            break;

        case 3:
            printf("Enter Ticket ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (t[i].id == id) {
                    printf("\nTicket Found!\n");
                    printf("Name: %s\nSeats: %d\nTotal: %.2f\n",
                           t[i].name,
                           t[i].seats,
                           t[i].seats * t[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Ticket not found!\n");
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