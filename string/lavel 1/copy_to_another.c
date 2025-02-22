#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[50];

    copyString(source, destination);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}