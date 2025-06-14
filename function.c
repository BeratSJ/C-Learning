#include <stdio.h>

double circle(double rds) {
    const double PI = 3.14;

double radius, area, circumference;
area = PI * radius * radius; 
radius = rds;
circumference = 2 * PI * radius; 
printf("Area of the circle: %.2lf\n", area); 
printf("Circumference of the circle: %.2lf\n", circumference); 
return circumference;
}

int factors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
int main() {
    char request;
    printf("Enter what you want to do (c,m):");
    scanf("%c", &request);
    switch (request)
    {
    case 'c':
    printf("Enter the radius of the circle: ");
        double radius;
        scanf("%lf", &radius);
    circle(5); // Example radius
        break;
    case 'm':
    int number;
    printf("Type the number you want to find the factors of:");
    scanf("%lf", &number);
    factors(number);
    break;
    
    default:
        break;
    }
    return 0;
}
