#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch ((num > 0) - (num < 0)) {
        case 1:
            printf("The number is positive.\n");
            break;
        case -1:
            printf("The number is negative.\n");
            break;
        case 0:
            printf("The number is zero.\n");
            break;
        default:
            printf("Error: Invalid input.\n");
            break;
    }

    return 0;
}