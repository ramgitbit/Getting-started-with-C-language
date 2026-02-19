#include <stdio.h>

// Question: Calculate the area of a circle from the radius.
int main(void) {
    double radius;
    const double PI = 3.141592653589793;
    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) == 1) {
        double area = PI * radius * radius;
        printf("Area = %.4f\n", area);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
