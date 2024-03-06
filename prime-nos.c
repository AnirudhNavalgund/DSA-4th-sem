#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int a = sqrt(num);
    int i=2;
    int flag=0;
    while (i<=a) {
        if (num%i==0) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag==1)
        printf("Not Prime");
    else
        printf("Prime");
}
