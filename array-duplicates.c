#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
void dup(int arr[], int n);
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    dup(arr, n);
}
void dup(int arr[], int n)
{
    printf("enter the elements:\n");
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i] == arr[j])
                printf("%d", arr[i]);
            else
                continue;
        }
    }
}
