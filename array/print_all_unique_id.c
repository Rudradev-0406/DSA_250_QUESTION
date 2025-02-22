#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    int isUnique;

    printf("Unique elements in the array are: ");
    for (int i = 0; i < size; i++) {
        isUnique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, size);

    return 0;
}