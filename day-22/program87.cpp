//code to character frequency
#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count = 1;

        if (str[i] == '*')   // Skip already counted characters
            continue;

        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '*';   // Mark duplicate character
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}