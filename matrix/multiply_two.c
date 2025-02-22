// WITH AI
#include <stdio.h>

#define MAX 100

void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int matrix[MAX][MAX], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d  ", matrix[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    // Check if multiplication is possible
    while (columnFirst != rowSecond) {
        printf("Error! column of first matrix not equal to row of second.\n");

        printf("Enter rows and columns for the first matrix: ");
        scanf("%d %d", &rowFirst, &columnFirst);

        printf("Enter rows and columns for the second matrix: ");
        scanf("%d %d", &rowSecond, &columnSecond);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply two matrices.
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    // Displaying the multiplication of two matrix.
    printf("\nOutput Matrix:\n");
    display(result, rowFirst, columnSecond);

    return 0;
}