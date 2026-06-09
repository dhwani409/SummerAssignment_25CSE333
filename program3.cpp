//code to find factorial of a given number
#include <stdio.h>
int main()
 {
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", N, factorial);

    return 0;
