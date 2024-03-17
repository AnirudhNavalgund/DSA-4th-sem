#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    FILE *revnoFile = fopen("rev-no.txt", "w");
    if (revnoFile == NULL)
    {
        printf("Error: Unable to open rev-no-input.txt for writing.\n");
        return 1;
    }
    printf("Enter a multi-digit no: ");
    scanf("%d", &n);
    //fprintf(revnoFile, "%d\n\n", n);

    int reverse = 0;

    while (n != 0) {
        int remainder = n % 10; // get last digit
        reverse = reverse * 10 + remainder;
        n = n/10; // remove last digit
    }

    // Write the reversed number to output.txt
    revnoFile = fopen("rev-no.txt", "a");
    if (revnoFile == NULL)
    {
        printf("Error: Unable to open rev-no-output.txt for writing.\n");
        return 1;
    }
    fprintf(revnoFile, "Reversed number = %d", reverse);
    fclose(revnoFile);

    return 0;
}
