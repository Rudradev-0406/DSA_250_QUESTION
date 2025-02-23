#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = findMax(num1, num2);
    int min = findMin(num1, num2);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}