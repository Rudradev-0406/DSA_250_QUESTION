#include <stdio.h>

void findMaxMin(int arr[], int n, int index, int *max, int *min) {
    if (index == n) {
        return;
    }
    if (arr[index] > *max) {
        *max = arr[index];
    }
    if (arr[index] < *min) {
        *min = arr[index];
    }
    findMaxMin(arr, n, index + 1, max, min);
}

int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    findMaxMin(arr, n, 0, &max, &min);

    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);

    return 0;
}