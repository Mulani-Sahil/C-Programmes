#include <stdio.h>

int main() {
    double x, y;

    // Input the coordinates
    printf("Enter the x-coordinate: ");
    scanf("%lf", &x);

    printf("Enter the y-coordinate: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0) {
        printf("The point (%.2lf, %.2lf) is in Quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2lf, %.2lf) is in Quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2lf, %.2lf) is in Quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2lf, %.2lf) is in Quadrant IV.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point is at the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    }

    return 0;
}

