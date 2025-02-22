#include <stdio.h>

int sumEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 == 0) {
        return start + sumEven(start + 2, end);
    } else {
        return sumEven(start + 1, end);
    }
}

int sumOdd(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 != 0) {
        return start + sumOdd(start + 2, end);
    } else {
        return sumOdd(start + 1, end);
    }
}

int main() {
    int start, end, choice;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Enter 1 to sum even numbers or 2 to sum odd numbers: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Sum of even numbers: %d\n", sumEven(start, end));
    } else if (choice == 2) {
        printf("Sum of odd numbers: %d\n", sumOdd(start, end));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}