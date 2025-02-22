#include <stdio.h>
#include <string.h>

int findLastOccurrence(char *str, char ch) {
    int lastIndex = -1;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            lastIndex = i;
        }
    }
    return lastIndex;
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    
    int index = findLastOccurrence(str, ch);
    
    if (index != -1) {
        printf("The last occurrence of '%c' is at index %d.\n", ch, index);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
    
    return 0;
}