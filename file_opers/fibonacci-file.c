#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int N;
    int a=0, b=1;
    int c;
    int i;

    // Read upper limit from fibo-input.txt
    printf("No of elements for sequence read from fibo-input.txt\n\n");
    FILE *inputFile = fopen("fibo-input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error: Unable to open input.txt for reading.\n");
        return 1;
    }
    fscanf(inputFile, "%d", &N);
    fclose(inputFile);

    // Write Fibonacci sequence to fibo-output.txt
    FILE *outputFile = fopen("fibo-output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error: Unable to open output.txt for writing.\n");
        return 1;
    }

    fprintf(outputFile, "%d\n", a);
    fprintf(outputFile, "%d\n", b);

    for (i=1; i<N; i++)
    {
        c = a+b;
        fprintf(outputFile, "%d\n", c);
        a = b;
        b = c;
    }
    printf("Fibonacci Sequence written to fibo-output.txt");

    fclose(outputFile);

    return 0;
}
