#include <stdio.h>

int main()
{
    int m;
    int n;
    int reste;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &m, &n);
    while (n != 0)
    {
        reste = m % n;
        m = n;
        n = reste;
    }
    printf("le plus grande diviseur est : %d\n", m);
}