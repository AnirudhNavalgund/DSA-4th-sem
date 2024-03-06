#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 7
void sort_arr (int arr[size]);
int main()
{
    int arr[size];
    int i;
    printf("Enter any 7 elements of the array: \n");
    for (i=0;i<7;i++)
        scanf("%d", &arr[i]);
    sort_arr(arr);
}
void sort_arr (int arr[size])
{
    printf("Ascending Order:\n");
    int i,j;
    for (i=0;i<7;i++) {
        for (j=0;j<7-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i=0;i<7;i++)
        printf("%d ",arr[i]);

    printf("\nDescending Order:\n");
    for (i=0;i<7;i++) {
        for (j=0;j<7-i-1;j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i=0;i<7;i++)
        printf("%d ",arr[i]);
}
