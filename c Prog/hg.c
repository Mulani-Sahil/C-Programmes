#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("The triangle with sides %.2f, %.2f, and %.2f is valid.\n", side1, side2, side3);
    } else {
        printf("The triangle with sides %.2f, %.2f, and %.2f is not valid.\n", side1, side2, side3);
    }

    return 0;
}

