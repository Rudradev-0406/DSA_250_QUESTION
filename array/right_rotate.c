// with ai
#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of rotations

    printf("Original array: ");
    printArray(arr, n);

    rightRotate(arr, n, k);

    printf("Array after right rotation: ");
    printArray(arr, n);

    return 0;
}