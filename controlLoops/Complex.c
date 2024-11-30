#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, r1, r2, realPart, imaginaryPart;
    int choice;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    printf("Choose the type of roots to find:\n");
    printf("1. Real and Different\n");
    printf("2. Real and Same\n");
    printf("3. Complex\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (D > 0) {
                r1 = (-b + sqrt(D)) / (2 * a);
                r2 = (-b - sqrt(D)) / (2 * a);
                printf("Roots are: %f and %f\n", r1, r2);
            } else {
                printf("Discriminant is not positive. Cannot find real and different roots.\n");
            }
            break;
        case 2:
            if (D == 0) {
                r1 = r2 = -b / (2 * a);
                printf("Roots are: %f and %f\n", r1, r2);
            } else {
                printf("Discriminant is not zero. Cannot find real and same roots.\n");
            }
            break;
        case 3:
            if (D < 0) {
                realPart = -b / (2 * a);
                imaginaryPart = sqrt(-D) / (2 * a);
                printf("Roots are: %f + %fi and %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
            } else {
                printf("Discriminant is not negative. Cannot find complex roots.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}