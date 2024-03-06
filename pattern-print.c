#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int row=5;
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<=row-i-1;j++)
           printf(" ");

        for(int j=0;j<=i;j++)
           printf("*");

        for(int j=0;j<i;j++)
           printf("*");

        for(int j=0;j<=row-i-1;j++)
           printf(" ");

        printf("\n");
    }
    return 0;
}
