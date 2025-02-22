#include <stdio.h>

void sortArray(int arr[], int n, int ascending) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ascending = 1;

    printf("Original array: ");
    printArray(arr, n);

    sortArray(arr, n, ascending);

    if (ascending) {
        printf("Sorted array in ascending order: ");
    } else {
        printf("Sorted array in descending order: ");
    }
    printArray(arr, n);

    return 0;
}