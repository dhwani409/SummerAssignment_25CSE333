//code to create inventory management system
#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n = 0, choice, i, id, found;
    int qty;

    do {
        printf("\n=== INVENTORY MANAGEMENT SYSTEM ===\n");
        printf("1. Add Product\n");
        printf("2. View Products\n");
        printf("3. Search Product\n");
        printf("4. Update Stock\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Product ID: ");
            scanf("%d", &p[n].id);

            printf("Enter Product Name: ");
            scanf(" %s", p[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &p[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &p[n].price);

            n++;
            printf("Product added successfully!\n");
            break;

        case 2:
            printf("\n=== PRODUCT LIST ===\n");
            printf("ID\tName\tQty\tPrice\tTotal\n");

            for (i = 0; i < n; i++) {
                printf("%d\t%s\t%d\t%.2f\t%.2f\n",
                       p[i].id,
                       p[i].name,
                       p[i].quantity,
                       p[i].price,
                       p[i].quantity * p[i].price);
            }
            break;

        case 3:
            printf("Enter Product ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    printf("\nProduct Found!\n");
                    printf("Name: %s\nQuantity: %d\nPrice: %.2f\n",
                           p[i].name,
                           p[i].quantity,
                           p[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found!\n");
            break;

        case 4:
            printf("Enter Product ID to update stock: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    printf("Enter quantity to add: ");
                    scanf("%d", &qty);

                    p[i].quantity += qty;
                    printf("Stock updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found!\n");
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