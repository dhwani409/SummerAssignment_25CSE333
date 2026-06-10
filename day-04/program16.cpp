//code to print armstrong number in a range
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, original, digit;
    int count, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        original = num;
        temp = num;
        count = 0;
        sum = 0;

        /* Count the number of digits */
        while (temp != 0) {
            count++;
            temp = temp / 10;
        }

        temp = num;

        /* Find the sum of digits raised to the power of count */
        while (temp != 0) {
            digit = temp % 10;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }

        if (sum == original)
            printf("%d ", original);
    }

    return 0;
}