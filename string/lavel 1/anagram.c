// with ai
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char *str1, char *str2) {
    int count[256] = {0};

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    if (isAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}