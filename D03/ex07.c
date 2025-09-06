#include <stdio.h>

int main(void)
{
    int matrice[5][5];
    int somme_ligne;
    int somme_colonne;
    int i;
    int j;

    i = 0;
    while (i < 5)
    {
        printf("Entrez la ligne %d : ", i + 1);
        j = 0;
        while (j < 5)
        {
            scanf("%d", &matrice[i][j]);
            j++;
        }
        i++;
    }

    printf("Totaux des lignes : ");
    i = 0;
    while (i < 5)
    {
        somme_ligne = 0;
        j = 0;
        while (j < 5)
        {
            somme_ligne = somme_ligne + matrice[i][j];
            j++;
        }
        printf("%d ", somme_ligne);
        i++;
    }
    printf("\n");

    printf("Totaux des colonnes : ");
    j = 0;
    while (j < 5)
    {
        somme_colonne = 0;
        i = 0;
        while (i < 5)
        {
            somme_colonne = somme_colonne + matrice[i][j];
            i++;
        }
        printf("%d ", somme_colonne);
        j++;
    }
    printf("\n");
    return (0);
}
