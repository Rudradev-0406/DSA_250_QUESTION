#include <stdio.h>

void deleteDuplicates(int arr[], int *n) {
    int i, j, k;
    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteDuplicates(arr, &n);

    printf("Array after deleting duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}