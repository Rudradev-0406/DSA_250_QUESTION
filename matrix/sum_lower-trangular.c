#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 0, 0},
        {4, 5, 0},
        {7, 8, 9}
    };
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of lower triangular matrix: %d\n", sum);

    return 0;
}