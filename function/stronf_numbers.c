#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}

void printStrongNumbers(int start, int end) {
    printf("Strong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrongNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printStrongNumbers(start, end);

    return 0;
}