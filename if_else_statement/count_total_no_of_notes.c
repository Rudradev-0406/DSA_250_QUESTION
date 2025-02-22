#include <stdio.h>

void countNotes(int amount) {
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int noteCounter[10] = {0};

    for (int i = 0; i < 10; i++) {
        if (amount >= notes[i]) {
            noteCounter[i] = amount / notes[i];
            amount = amount - noteCounter[i] * notes[i];
        }
    }

    printf("Currency Count ->\n");
    for (int i = 0; i < 10; i++) {
        if (noteCounter[i] != 0) {
            printf("%d : %d\n", notes[i], noteCounter[i]);
        }
    }
}

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    countNotes(amount);
    return 0;
}