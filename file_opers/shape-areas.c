#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int figure;
    float side, base, length, breadth, height, area, radius;
    FILE *outputFile = fopen("shapeAreas-output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Unable to open output.txt for writing.\n");
        return 1;
    }

    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Square\n");
    printf("Enter the figure code: ");
    scanf("%d", &figure);

    switch (figure) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.142 * radius * radius;
            fprintf(outputFile, "Area of Circle: %.2f square units\n", area);
            printf("Area of Shape written to shapeAreas-output.txt\n");
            break;
        case 2:
            printf("Enter the breadth and length of the rectangle: ");
            scanf("%f %f", &breadth, &length);
            area = breadth * length;
            fprintf(outputFile, "Area of Rectangle: %.2f square units\n", area);
            printf("Area of Shape written to shapeAreas-output.txt\n");
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            fprintf(outputFile, "Area of Triangle: %.2f square units\n", area);
            printf("Area of Shape written to shapeAreas-output.txt\n");
            break;
        case 4:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            fprintf(outputFile, "Area of Square: %.2f square units\n", area);
            printf("Area of Shape written to shapeAreas-output.txt\n");
            break;
        default:
            printf("Invalid figure code. Please choose a valid option.\n");
    }

    return 0;
}
