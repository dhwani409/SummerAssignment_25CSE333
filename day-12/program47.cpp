//code to write functions for fibonacci
#include <stdio.h>

void fibonacci(int n)
{
    int first = 0, second = 1, next, i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci(n);

    return 0;
}
