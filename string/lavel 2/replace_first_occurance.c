#include <stdio.h>

void replaceAllOccurrences(char *str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100];
    char oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to be replaced: ");
    scanf(" %c", &oldChar);

    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    replaceAllOccurrences(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}
