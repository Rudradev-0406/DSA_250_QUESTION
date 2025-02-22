#include <stdio.h>

int countOccurrences(char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    
    int count = countOccurrences(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, count);
    
    return 0;
}