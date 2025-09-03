#include <stdio.h>

int main()
{   
    float x;
    float result;

    printf("entrez une valeur pour x : ");
    scanf("%f", &x);
    
    result = ((((3 * x + 2) * x - 5) *x - 1) *x + 7) * x - 6;
    printf("%2.f", result);
}