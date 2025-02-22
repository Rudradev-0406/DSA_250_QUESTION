#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = i; j < SIZE; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of the upper triangular matrix: %d\n", sum);

    return 0;
}