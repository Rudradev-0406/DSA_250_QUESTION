// with AI
#include <stdio.h>

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;
    
    int result = searchElement(arr, size, element);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", element, result);
    } else {
        printf("Element %d not found in the array\n", element);
    }
    
    return 0;
}