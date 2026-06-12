//code to write function for palindrome
#include <stdio.h>

int isPalindrome(int num)
{
    int original = num, reverse = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.", num);
    else
        printf("%d is not a palindrome number.", num);

    return 0;
}