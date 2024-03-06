#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    char lcase[100], ucase[100];
    printf("Enter a string in lowercase: ");
    scanf("%s", lcase);
    for (int i=0;i<strlen(lcase);i++)
        ucase[i] = lcase[i] - 32;
    for (int i=0;i<strlen(ucase);i++)
        printf("%c", ucase[i]);
}
