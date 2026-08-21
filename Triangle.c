#include <stdio.h>
int main() {
    float a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if( a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || b + c <= a || a + c <= b) {
            printf("Invalid triangle\n");

    } else if( a == b && b == c) {
        printf("The triangle is an equilateral triangle\n");
   
    } else if( a == b || b == c || c == a) {
        printf("The triangle is an isosceles triangle\n");

    } else {
        printf("The triangle is a scalene triangle\n");
    
    }

    return 0;
}