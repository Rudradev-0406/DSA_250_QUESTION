#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    int length = strlen(str);
    char temp;
    
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    int start = 0, end = 0;
    while (end <= length) {
        if (str[end] == ' ' || str[end] == '\0') {
            for (int i = start, j = end - 1; i < j; i++, j--) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            start = end + 1;
        }
        end++;
    }
}

int main() {
    char str[] = "Hello world this is a test";
    printf("Original string: %s\n", str);
    
    reverseWords(str);
    printf("Reversed word order: %s\n", str);
    
    return 0;
}