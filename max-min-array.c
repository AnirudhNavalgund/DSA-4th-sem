#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
void min_max(int *ptr, int n);
int main()
{
    int n, *ptr;
    printf("Enter no of array elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for (int i=0;i<n;i++) {
        scanf("%d", (ptr+i));
    }
    min_max(ptr, n);
}
void min_max(int *ptr, int n)
{
    int max = *ptr;
    int min = *ptr;
    for (int i=0;i<n;i++) {
        if (*(ptr+i) > max)
            max = *(ptr+i);
        else if (*(ptr+i) < min)
            min = *(ptr+i);
    }
    printf("Max Element = %d\n", max);
    printf("Min Element = %d", min);
}
