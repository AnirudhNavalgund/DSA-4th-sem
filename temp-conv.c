#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    float celsius, kelvin, fahr;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    fahr = (celsius*1.8)+32;
    printf("Kelvin: %f\n", kelvin);
    printf("Fahrenheit: %f", fahr);
}
