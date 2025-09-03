#include <stdio.h>

int main()
{
    int num ;
    int n1;
    int n2;

    printf("Entrez un nombre à deux chiffres : ");
    scanf("%d", &num);
    n1 = num % 10;
    n2 = num / 10;
    num = n1 * 10 + n2 ;
    printf("%d", num);

    return 0;
}