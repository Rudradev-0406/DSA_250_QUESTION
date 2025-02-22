#include <stdio.h>

void concatenate(char *s1, char *s2) {
    while (*s1) {
        s1++;
    }
    while (*s2) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    
    concatenate(str1, str2);
    
    printf("Concatenated String: %s\n", str1);
    
    return 0;
}