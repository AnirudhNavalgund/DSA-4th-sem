#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n, bin=0, i=1, dec, m;
    printf("Enter decimal no: ");
    scanf("%d", &n);
    dec = n;
    while (n>0)
    {
        m = (n%2)*i;
        bin = bin + m;
        i = i*10;
        n = n/2;
    }
    printf("Binary = %d", bin);
}
