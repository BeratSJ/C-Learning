#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;


    printf("Enter the lengths of the three sides of the triangle: ");
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

}