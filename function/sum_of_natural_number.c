#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturalNumbers(n);
        printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);
    }

    return 0;
}