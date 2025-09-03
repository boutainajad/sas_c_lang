#include <stdio.h>

int main()
{   
    float x;
    float result;

    printf("entrez une valeur pour x : ");
    scanf("%f", &x);
    
    result = 3 * x * x * x * x * x + 2 *x * x * x * x  - 5 *x *x *x -x * x + 7 * x - 6;
    printf("%.2f", result);
}