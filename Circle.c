#include <stdio.h>
int main() {
    float radius, area, circumference;
    const float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);
    return 0;
}