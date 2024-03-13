#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    float weight, height;
    float bmi;
    printf("Enter your weight(kg) and height(m):\n");
    scanf("%f%f", &weight, &height);
    bmi = weight/(height*height);
    printf("BMI: %f - ", bmi);
    if (bmi < 18)
        printf("Underweight");
    else if (bmi > 25)
        printf("Overweight");
    else
        printf("Normal");
}
