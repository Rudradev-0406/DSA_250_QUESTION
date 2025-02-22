#include <stdio.h>
#include <string.h>

void removeVowels(char *str) {
    int i, j = 0;
    int len = strlen(str);
    char result[len + 1];

    for (i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}