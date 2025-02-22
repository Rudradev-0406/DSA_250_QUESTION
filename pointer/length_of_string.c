#include <stdio.h>

int stringLength(char *str) {
    char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    char str[] = "Hello, World!";
    int length = stringLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}