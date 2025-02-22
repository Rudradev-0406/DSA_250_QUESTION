#include <stdio.h>
#define PI 3.14159

double calculateDiameter(double radius);
double calculateCircumference(double radius);
double calculateArea(double radius);

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Diameter of the circle: %.2lf\n", calculateDiameter(radius));
    printf("Circumference of the circle: %.2lf\n", calculateCircumference(radius));
    printf("Area of the circle: %.2lf\n", calculateArea(radius));

    return 0;
}

double calculateDiameter(double radius) {
    return 2 * radius;
}

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

double calculateArea(double radius) {
    return PI * radius * radius;
}