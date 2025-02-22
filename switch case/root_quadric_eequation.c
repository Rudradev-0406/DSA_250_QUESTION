#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    int flag;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        flag = 1;
    } else if (discriminant == 0) {
        flag = 2;
    } else {
        flag = 3;
    }

    switch (flag) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;

        case 2:
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and the same.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
            break;

        case 3:
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
            break;

        default:
            printf("Error! Invalid input.\n");
    }

    return 0;
}