#include <stdio.h>

int main()
{
    int compteur_chiffre[10] = {0};
    int chiffre;
    int number;
    int i;

    printf("entrez un number : ");
    scanf("%d", &number);

    while (number > 10)
    {
        chiffre = number % 10;
        compteur_chiffre[chiffre]++;
        number /= 10;
    }
    printf("number : ");
    for (i = 0; i < 0; i++)
    {
        printf("%d", i);
    }
    printf("occurrences : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d", compteur_chiffre[i]);
    }
    return 0;
}