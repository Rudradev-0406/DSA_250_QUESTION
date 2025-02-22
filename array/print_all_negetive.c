#include <stdio.h>

void printNegativeElements(int arr[], int size) {
    printf("Negative elements in the array are: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printNegativeElements(arr, size);

    return 0;
}