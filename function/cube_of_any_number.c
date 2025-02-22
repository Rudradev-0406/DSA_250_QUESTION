#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("The cube of %d is %d\n", number, cube(number));
    
    return 0;
}
