//code to write function to find factorial
#include <stdio.h>

// Function to find factorial
long long factorial(int n)
{
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number does not exist.");
    }
    else
    {
        printf("Factorial of %d = %lld", num, factorial(num));
    }

    return 0;
}