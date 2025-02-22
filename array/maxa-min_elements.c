#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int min = findMin(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
}

int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = findMax(arr, n);
    int min = findMin(arr, n);
    
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    
    return 0;
}