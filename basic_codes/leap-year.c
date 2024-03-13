#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d", &year);
    if (year%400==0)
        printf("Leap");
    else if (year%100==0)
        printf("Not Leap");
    else if (year%4==0)
        printf("Leap");
    else if (year<=0)
        printf("Invalid Input");
    else
        printf("Not Leap");
}
