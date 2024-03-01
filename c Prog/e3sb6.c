#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, d, r1, r2, realPart, imaginaryPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    if (d > 0) {
        // Real and distinct roots
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %f and %f\n", r1, r2);
    } else if (d == 0) {
        // Real and equal roots
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal: %f and %f\n", r1, r2);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);
        printf("Roots are complex: %f + %fi and %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}

