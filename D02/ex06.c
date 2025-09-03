#include <stdio.h>

int main()
{
    int num;
    int den;
    printf("entrer deux entiers : ");
    scanf("%d/%d", &num, &den);
   int  a = num;
    int b = den;
    while (a != 0)
    {
       int rest = a % b;
       b = a;
       a = rest;
    }
    num = num / b;
    den = den / b;
    printf("%d %d", num, den);
}