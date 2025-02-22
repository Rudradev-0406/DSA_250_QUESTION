#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ptr = &array[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(ptr + i * cols + j));
        }
        printf("\n");
    }

    return 0;
}