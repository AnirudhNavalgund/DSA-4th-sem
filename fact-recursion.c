#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int fact(int num);
int main()
{
    int a;
    printf("enter the no to find factorial: ");
    scanf("%d", &a);
    if (a<0){
        printf("invalid input");
        exit(0);
    }
    a = fact(a);
    printf("factorial = %d", a);
}
int fact(int num)
{
    int factorial = 1;
    if (num==1 || num==0)
        return factorial;
    else
        factorial = num * fact(num-1);
    return factorial;
}
