#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char calculation;
    printf("Which shape will you calculate? C(ircle) or T(riangle): \n");
    scanf("%c", calculation);
    if (calculation == 'C' || calculation == 'c') {
        const double PI = 3.14;
        double radius, area, circumference;
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);
        area = PI * radius * radius; 
        circumference = 2 * PI * radius; 
        printf("Area of the circle: %.2lf\n", area); 
        printf("Circumference of the circle: %.2lf\n", circumference); 
    } else if (calculation == 'T' || calculation == 't') {
        int a, b, c;
        printf("Enter the lengths of the two sides of the triangle: ");
        scanf("%d %d", &a, &b);
        c = sqrt(a * a + b * b); 
        printf("The length of the hypotenuse is: %d\n", c);
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("Invalid shape selection.\n");
    }
}