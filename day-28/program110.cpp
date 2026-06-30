//code to create bank account system
#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc[100];
    int n = 0, choice, i, accNo, found;
    float amount;

    do {
        printf("\n=== BANK ACCOUNT SYSTEM ===\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &acc[n].accNo);

            printf("Enter Name: ");
            scanf(" %s", acc[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc[n].balance);

            n++;
            printf("Account created successfully!\n");
            break;

        case 2:
            printf("\n=== ACCOUNT DETAILS ===\n");
            printf("AccNo\tName\tBalance\n");

            for (i = 0; i < n; i++) {
                printf("%d\t%s\t%.2f\n",
                       acc[i].accNo,
                       acc[i].name,
                       acc[i].balance);
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;
            for (i = 0; i < n; i++) {
                if (acc[i].accNo == accNo) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);

                    if (amount > 0) {
                        acc[i].balance += amount;
                        printf("Deposit successful!\n");
                    } else {
                        printf("Invalid amount!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account not found!\n");
            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;
            for (i = 0; i < n; i++) {
                if (acc[i].accNo == accNo) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);

                    if (amount > 0 && amount <= acc[i].balance) {
                        acc[i].balance -= amount;
                        printf("Withdrawal successful!\n");
                    } else {
                        printf("Insufficient balance or invalid amount!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account not found!\n");
            break;

        case 5:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;
            for (i = 0; i < n; i++) {
                if (acc[i].accNo == accNo) {
                    printf("Current Balance: %.2f\n", acc[i].balance);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account not found!\n");
            break;

        case 6:
            printf("Thank you for using Bank System!\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}