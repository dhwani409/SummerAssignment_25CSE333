//code to reverse a number
#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;               // Get the last digit
        reverse = reverse * 10 + digit; // Build the reversed number
        num = num / 10;                 // Remove the last digit
    }

    printf("Reversed number = %d", reverse);

    return 0;
}