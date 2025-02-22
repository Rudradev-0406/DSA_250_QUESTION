#include <stdio.h>

void printIdentityMatrix(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the identity matrix: ");
    scanf("%d", &size);

    printIdentityMatrix(size);

    return 0;
}