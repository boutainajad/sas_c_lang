#include <stdio.h>

int main()
{
    int note;
    printf("Entrez une note numérique : ");
    scanf("%d", &note);
    if (note < 0 || note > 100)
        printf("Erreur : note invalide\n");
        else 
    {
    int dizaine = note / 10;
    switch (dizaine)
        {
        case 10:
        case 9 : printf("Note littérale : A\n");
        break ;
        case 8 : printf("Note littérale : B\n");
        break;
        case 7 : printf("Note littérale : C\n");
        break;
        case 6 : printf("Note littérale : D\n");
        break;
        default: 
                printf("Note litterale : F\n");
                break;
    }
}
}