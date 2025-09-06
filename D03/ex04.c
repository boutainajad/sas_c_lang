#include <stdio.h>

int main(void) 
{
    int a[10];
    int i;
    int longueur = (int)(sizeof(a) / sizeof(a[0]));
    
    printf("Entrez %d nombres : ", longueur);
    for (i = 0; i < longueur; i++)
        scanf("%d", &a[i]);
    
    printf("Dans l'ordre inverse :");
    for (i = longueur - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");
    
    return 0;
}