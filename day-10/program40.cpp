//code to print character pyramid
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        /* Print leading spaces */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        /* Print increasing characters */
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        /* Print decreasing characters */
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
