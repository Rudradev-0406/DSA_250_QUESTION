//with AI
#include <stdio.h>

void insertElement(int arr[], int size, int element, int position) {
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
}

int main() {
    int arr[100], size, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d", &position);

    insertElement(arr, size, element, position);

    printf("Array after insertion:\n");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}