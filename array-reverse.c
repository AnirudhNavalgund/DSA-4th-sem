#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int range[5];
    printf("Enter an array of 5 elements: \n");
    for (int i=0;i<5;i++)
        scanf("%d", &range[i]);
    int inv_range[5];
    for (int i=0;i<5;i++)
        inv_range[i] = range[5-1-i];
    for (int i=0;i<5;i++)
        printf("%d ", inv_range[i]);
}
