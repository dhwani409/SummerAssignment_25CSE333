//code to find LCM of two numbers
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    /* Find GCD using Euclidean algorithm */
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    /* Find LCM */
    lcm = (num1 * num2) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}