#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    if (num == 0) {
        return 1;
    }
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int digits = countDigits(num);
    printf("Number of digits: %d\n", digits);
    return 0;
}