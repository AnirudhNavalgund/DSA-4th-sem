#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void count(char *ptr);
int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);
    //ptr = (char*)malloc(strlen())
    //fgets(str, sizeof(str), stdin);
    char *ptr;
    ptr = str;
    count(ptr);
}
void count(char *ptr)
{
    char c;
    int count = 0;
    printf("enter the character to be counted: ");
    scanf(" %c", &c);
    for (int i=0;*(ptr+i)!='\0';i++){
        if (*(ptr+i) == c)
            count += 1;
        else
            continue;
    }
    printf("%c is repeated %d times", c, count);
}
