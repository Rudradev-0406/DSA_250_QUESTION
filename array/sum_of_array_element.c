#include <stdio.h>

int sumOfArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfArray(arr, n);
    printf("Sum of array elements: %d\n", sum);
    return 0;
}