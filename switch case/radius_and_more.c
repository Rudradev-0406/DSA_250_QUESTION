#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, height, circumference, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    circumference = 2 * PI * radius;
    volume = PI * radius * radius * height;

    printf("Circumference of the cylinder: %.2lf\n", circumference);
    printf("Volume of the cylinder: %.2lf\n", volume);

    return 0;
}
