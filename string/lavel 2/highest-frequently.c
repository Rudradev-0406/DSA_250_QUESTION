#include <stdio.h>
#include <string.h>

char getMaxFrequencyChar(char *str) {
    int count[256] = {0};
    int max = 0;
    char result;

    for (int i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
        if (max < count[(unsigned char)str[i]]) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[] = "example string";
    printf("The highest frequency character is '%c'\n", getMaxFrequencyChar(str));
    return 0;
}