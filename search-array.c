#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
void search(int *ptr, int n);
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements:\n");
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int *ptr;
    ptr = arr;
    search(ptr, n);
}
void search (int *ptr, int n)
{
    int x;
    printf("enter the element to be searched: ");
    scanf("%d", &x);
    for (int i=0;i<n;i++) {
        if(*(ptr+i)==x)
            printf("%d is at index %d", *(ptr+i), i);
        else
            continue;
    }
}
