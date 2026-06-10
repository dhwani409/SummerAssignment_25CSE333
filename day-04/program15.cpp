//code to check armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, count = 0;
    int sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    /* Count the number of digits */
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    /* Calculate the sum of digits raised to the power of count */
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}