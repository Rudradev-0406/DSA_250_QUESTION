#include <stdio.h>

#define ROWS 3
#define COLS 3

int isSparse(int matrix[ROWS][COLS], int rows, int cols) {
    int zeroCount = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if (zeroCount > totalElements / 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 0, 0},
        {0, 0, 3},
        {0, 4, 0}
    };

    if (isSparse(matrix, ROWS, COLS)) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}