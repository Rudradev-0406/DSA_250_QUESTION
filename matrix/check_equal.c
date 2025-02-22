#include <stdio.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 3

bool areMatricesEqual(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (areMatricesEqual(matrix1, matrix2)) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}