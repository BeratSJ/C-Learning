#include <stdio.h>
#include <math.h>

int main() {
    char unit;
    float temp;

    printf("Enter temperature (C or F): ");
    scanf("%c", &unit);

    if (unit = 'C')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32; 
        printf("Temperature in Fahrenheit: %.2f\n", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("Temperature in Celsius: %.2f\n", temp);
    }
    else
    {
        printf("Invalid unit. Please enter 'C' for Celsius or 'F' for Fahrenheit.\n");
         
        printf("Enter temperature in Fahrenheit: ");
    }



    return 0;
}