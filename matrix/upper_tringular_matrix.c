#include <stdio.h>

#define SIZE 3

void printUpperTriangularMatrix(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i > j) {
                printf("0 ");
            } else {
                printf("%d ", matrix[i][j]);
            }
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

    printf("Upper Triangular Matrix:\n");
    printUpperTriangularMatrix(matrix, SIZE);

    return 0;
}