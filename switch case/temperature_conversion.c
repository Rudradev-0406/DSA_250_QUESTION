#include <stdio.h>

void convertTemperature(float temp, char scale) {
    switch (scale) {
        case 'C':
        case 'c':
            printf("%.2f Celsius is %.2f Fahrenheit\n", temp, (temp * 9/5) + 32);
            break;
        case 'F':
        case 'f':
            printf("%.2f Fahrenheit is %.2f Celsius\n", temp, (temp - 32) * 5/9);
            break;
        default:
            printf("Invalid scale. Use 'C' for Celsius or 'F' for Fahrenheit.\n");
            break;
    }
}

int main() {
    float temperature;
    char scale;

    printf("Enter temperature: ");
    scanf("%f", &temperature);
    printf("Enter scale (C/F): ");
    scanf(" %c", &scale);

    convertTemperature(temperature, scale);

    return 0;
}