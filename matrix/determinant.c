#include <stdio.h>

#define MAX 10

void getCofactor(int mat[MAX][MAX], int temp[MAX][MAX], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinantOfMatrix(int mat[MAX][MAX], int n) {
    int D = 0;
    if (n == 1)
        return mat[0][0];

    int temp[MAX][MAX];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1);
        sign = -sign;
    }

    return D;
}

int main() {
    int n;
    int mat[MAX][MAX];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Determinant of the matrix is: %d\n", determinantOfMatrix(mat, n));

    return 0;
}
