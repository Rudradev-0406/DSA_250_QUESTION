#include <stdio.h>

int firstOccurrence(char *str, char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find: ");
    scanf("%c", &ch);

    int index = firstOccurrence(str, ch);
    if (index != -1) {
        printf("The first occurrence of '%c' is at index %d.\n", ch, index);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}