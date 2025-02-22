#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_CHAR 256

void findLowestFrequencyChar(char *str) {
    int freq[MAX_CHAR] = {0};
    int minFreq = INT_MAX;
    char result;

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] < minFreq && freq[(unsigned char)str[i]] > 0) {
            minFreq = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    printf("The lowest frequency character is '%c' with frequency %d\n", result, minFreq);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    findLowestFrequencyChar(str);

    return 0;
}
