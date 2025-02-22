#include <stdio.h>

void separateEvenOdd(int arr[], int size, int even[], int *evenSize, int odd[], int *oddSize) {
    *evenSize = 0;
    *oddSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[*evenSize] = arr[i];
            (*evenSize)++;
        } else {
            odd[*oddSize] = arr[i];
            (*oddSize)++;
        }
    }
}

int main() {
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even[size], odd[size];
    int evenSize, oddSize;

    separateEvenOdd(arr, size, even, &evenSize, odd, &oddSize);

    printf("Even elements: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}