#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_or_loss;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    profit_or_loss = selling_price - cost_price;

    if (profit_or_loss > 0) {
        printf("Profit: %.2f\n", profit_or_loss);
    } else if (profit_or_loss < 0) {
        printf("Loss: %.2f\n", -profit_or_loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}