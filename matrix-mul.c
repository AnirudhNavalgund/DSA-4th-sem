#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int a[3][3], b[3][3], i,j;
    int mul[3][3] = {0};
    printf("Order of matrix is 3\n");
    printf("Enter matrix A:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter matrix B:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++)
            scanf("%d", &b[i][j]);
    }

    // MULTIPLICATION
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            for (int k=0;k<3;k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("Product Matrix:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d  ", mul[i][j]);
            if (j==2)
                printf("\n");
        }
    }
}
