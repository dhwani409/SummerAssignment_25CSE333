//code to find largest prime factor
#include <stdio.h>

int main() {
    int num, i, largestPrimeFactor = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %d", largestPrimeFactor);

    return 0;
}