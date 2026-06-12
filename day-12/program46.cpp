//code to write function for armstrong
#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int original = num, remainder, digits = 0;
    int sum = 0, temp = num;

    /* Count the number of digits */
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    /* Calculate sum of digits raised to the power of digits */
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}