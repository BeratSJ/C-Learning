#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14;
    double radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = PI * radius * radius; 
    circumference = 2 * PI * radius; 
    printf("Area of the circle: %.2lf\n", area); 
    printf("Circumference of the circle: %.2lf\n", circumference); 
    return 0;

}