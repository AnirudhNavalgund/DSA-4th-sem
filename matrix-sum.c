#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 3
int main()
{
    int A[size][size], B[size][size], i,j;
    printf("Order of matrix is 3\n");

    printf("Enter elements of A:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of B:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Resultant Matrix:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d\t", (A[i][j]+B[i][j]));
            if(j==2)
                printf("\n");
        }
    }
}
