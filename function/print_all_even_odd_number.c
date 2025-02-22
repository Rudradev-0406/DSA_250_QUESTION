#include <stdio.h>

void printEvenNumbers(int start, int end) {
    if (start > end) {
        return;
    }
    if (start % 2 == 0) {
        printf("%d ", start);
    }
    printEvenNumbers(start + 1, end);
}

void printOddNumbers(int start, int end) {
    if (start > end) {
        return;
    }
    if (start % 2 != 0) {
        printf("%d ", start);
    }
    printOddNumbers(start + 1, end);
}

int main() {
    int start, end;
    char choice;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Do you want to print even or odd numbers? (e/o): ");
    scanf(" %c", &choice);

    if (choice == 'e') {
        printf("Even numbers between %d and %d are: ", start, end);
        printEvenNumbers(start, end);
    } else if (choice == 'o') {
        printf("Odd numbers between %d and %d are: ", start, end);
        printOddNumbers(start, end);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}