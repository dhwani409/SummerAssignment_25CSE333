//code to check anagram string
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, temp;
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Find length of first string
    while (str1[len1] != '\0' && str1[len1] != '\n')
        len1++;

    // Find length of second string
    while (str2[len2] != '\0' && str2[len2] != '\n')
        len2++;

    if (len1 != len2) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    // Count frequency of characters
    for (i = 0; i < len1; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;

        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
    }

    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}