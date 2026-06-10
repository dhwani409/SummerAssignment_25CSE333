//code to find sum of digit of a number
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;   // Get the last digit
        sum = sum + digit;  // Add it to the sum
        num = num / 10;     // Remove the last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}