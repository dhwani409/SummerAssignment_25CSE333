//code to find maximum occuring character
#include <stdio.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count = 1;

        if (str[i] == '*')   // Skip already counted characters
            continue;

        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '*';   // Mark duplicate characters
            }
        }

        if (count > max) {
            max = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", max);

    return 0;
}