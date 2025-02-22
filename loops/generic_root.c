#include <stdio.h>

int findGenericRoot(int num) {
    int sum = 0;
    
    while (num > 0 || sum > 9) {
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int genericRoot = findGenericRoot(num);
    printf("The generic root of %d is %d\n", num, genericRoot);
    
    return 0;
}