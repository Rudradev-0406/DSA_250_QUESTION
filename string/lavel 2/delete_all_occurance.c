#include <stdio.h>
#include <string.h>

void deleteAllOccurrences(char *str, char ch) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter the character to delete: ");
    scanf("%c", &ch);
    
    deleteAllOccurrences(str, ch);
    
    printf("String after deleting '%c': %s\n", ch, str);
    
    return 0;
}