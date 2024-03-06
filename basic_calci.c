#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    while (1) {
        int num1, num2;
        char oper;
        printf("\nBASIC CALCULATOR\n");
        printf("Operations: + - * / 1111\n");
        printf("Enter 1st number: ");
        scanf("%d", &num1);
        if (num1 == 1111)
            break;
        printf("Enter 2nd number: ");
        scanf("%d", &num2);
        printf("Enter the operator: ");
        scanf(" %c", &oper);

        switch (oper)
        {
            case '+':
                printf("Sum: %d", (num1+num2));
                break;
            case '-':
                printf("Difference: %d", (num1-num2));
                break;
            case '*':
                printf("Product: %d", (num1*num2));
                break;
            case '/':
                printf("Quotient: %d", (num1/num2));
                break;
        }
        printf("\n");
    }
}
