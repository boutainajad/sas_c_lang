#include <stdio.h>

int main()
{
    int mantant;
    int billets_20;
    int billets_10;
    int billers_5;
    int billets_1;

    printf("d'entrez un montant en dollars américains : ");
    scanf("%d", &mantant);

    billets_20 = mantant / 20;
    mantant = mantant % 20;

    billets_10 = mantant / 10;
    mantant = mantant % 10;

    billers_5 = mantant / 5;
    mantant = mantant % 5;

    billets_1 = mantant;

    printf("billets de 20 $ : %d\n", billets_20);
    printf("billets de 10 $ : %d\n", billets_10);
    printf("billets de 5 $ : %d\n", billers_5);
    printf("billets de 1 $ : %d\n", billets_1);

}