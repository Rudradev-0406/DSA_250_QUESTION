#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num && num != 1;
}

void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
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

    printPerfectNumbers(start, end);

    return 0;
}
