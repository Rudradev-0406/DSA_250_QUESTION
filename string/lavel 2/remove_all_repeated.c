#include <stdio.h>
#include <string.h>

void removeRepeatedChars(char *str) {
    int hash[256] = {0};
    int currentIndex = 0;
    int resultIndex = 0;

    while (*(str + currentIndex)) {
        char temp = *(str + currentIndex);
        if (hash[temp] == 0) {
            hash[temp] = 1;
            *(str + resultIndex) = *(str + currentIndex);
            resultIndex++;
        }
        currentIndex++;
    }
    *(str + resultIndex) = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    removeRepeatedChars(str);
    printf("String after removing repeated characters: %s\n", str);

    return 0;
}