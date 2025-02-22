#include <stdio.h>
#include <string.h>

int findFirstOccurrence(char *str, char *word) {
    char *pos = strstr(str, word);
    if (pos != NULL) {
        return pos - str;
    }
    return -1;
}

int main() {
    char str[100], word[50];
    printf("Enter the string: ");
    gets(str);
    printf("Enter the word to find: ");
    gets(word);

    int index = findFirstOccurrence(str, word);
    if (index != -1) {
        printf("The first occurrence of the word '%s' is at index %d.\n", word, index);
    } else {
        printf("The word '%s' is not found in the string.\n", word);
    }

    return 0;
}