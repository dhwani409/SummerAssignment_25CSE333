//code to count digit in a number
#include <stdio.h>

int main() {
    int N, count = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (N != 0) {
        N = N / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}