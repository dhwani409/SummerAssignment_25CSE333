//code to remove duplicate character
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j]) {
                // Shift characters to the left
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                j--; // Check the current position again
            }
        }
    }

    printf("String after removing duplicate characters: %s", str);

    return 0;
}