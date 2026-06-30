//code to find longest word
#include <stdio.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                for (j = 0; j < len; j++) {
                    longest[j] = str[start + j];
                }
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}