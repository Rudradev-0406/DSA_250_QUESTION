#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 1; i <= n - 2; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Number of terms should be at least 2.\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}