#include <stdio.h>

#define SIZE 3

void interchangeDiagonals(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][SIZE - i - 1];
        matrix[i][SIZE - i - 1] = temp;
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    interchangeDiagonals(matrix);

    printf("\nMatrix after interchanging diagonals:\n");
    printMatrix(matrix);

    return 0;
}