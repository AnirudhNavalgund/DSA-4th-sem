#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int number1, number2, sum;

    // Read two integers from twoSum-input.txt
    FILE *inputFile = fopen("twoSum-input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error: Unable to open input.txt for reading.\n");
        return 1;
    }
    fscanf(inputFile, "%d %d", &number1, &number2);
    fclose(inputFile);

    // Calculate the sum
    sum = number1 + number2;

    // Write the sum to twoSum-output.txt
    FILE *outputFile = fopen("twoSum-output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error: Unable to open output.txt for writing.\n");
        return 1;
    }
    fprintf(outputFile, "%d + %d = %d\n", number1, number2, sum);
    printf("Sum of %d & %d written to twoSum-output.txt", number1, number2);
    fclose(outputFile);

    return 0;
}
