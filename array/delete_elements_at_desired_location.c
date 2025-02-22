// WITH AI

#include <stdio.h>

void deleteElement(int arr[], int *n, int position) {
    if (position >= *n || position < 0) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int arr[100], n, position;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);

    deleteElement(arr, &n, position);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}