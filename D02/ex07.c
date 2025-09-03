#include <stdio.h>

int main()
{
    int n;
    int i;
    int square;

    printf("entrez un number : ");
    scanf("%d", &n);
    while (i * i <= n)
    {
        square = i * i;
        if (square % 2 == 0)
        {
            printf("%d\n", square);
        }
        i++;
    }
}