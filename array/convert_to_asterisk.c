#include <stdio.h>
#include <string.h>

void convertToAsterisk(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = '*';
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    convertToAsterisk(input);
    printf("Converted string: %s\n", input);

    return 0;
}
