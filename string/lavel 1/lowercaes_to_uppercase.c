#include <stdio.h>
#include <ctype.h>

void toUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase string: %s", str);
    return 0;
}