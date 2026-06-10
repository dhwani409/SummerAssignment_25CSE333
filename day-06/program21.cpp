//code to convert decimal to binary
#include <stdio.h>

int main() {
    int num, binary[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary equivalent: 0");
    } else {
        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }

        printf("Binary equivalent: ");
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    return 0;
}