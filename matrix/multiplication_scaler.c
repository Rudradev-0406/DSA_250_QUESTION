#include <stdio.h>

#define ROWS 3
#define COLS 3

void scalarMultiply(int matrix[ROWS][COLS], int scalar) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int scalar = 2;

    printf("Original Matrix:\n");
    printMatrix(matrix);

    scalarMultiply(matrix, scalar);

    printf("\nMatrix after scalar multiplication by %d:\n", scalar);
    printMatrix(matrix);

    return 0;
}