#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int lower, upper;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (int)result == num;
}