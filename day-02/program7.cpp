//code to find product of digits
#include <stdio.h>

int main() {
    int num, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;        // Get the last digit
        product = product * digit; // Multiply with product
        num = num / 10;          // Remove the last digit
    }

    printf("Product of digits = %d", product);

    return 0;
}