#include <stdio.h>
#include <string.h>

void removeFirstOccurrence(char *str, char ch) {
    int i, j;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            break;
        }
    }
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    removeFirstOccurrence(str, ch);
    printf("String after removing first occurrence of '%c': %s\n", ch, str);
    return 0;
}