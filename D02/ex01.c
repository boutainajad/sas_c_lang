#include <stdio.h>

int main()
{
    int isbn;
    int prefix_de_groupe;
    int idetifiant_de_groupe;
    int code_de_editeur;
    int numero_de_article;
    int chifre_de_controle;

    printf("entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d", &prefix_de_groupe, &idetifiant_de_groupe, &code_de_editeur, &numero_de_article, &chifre_de_controle);
    printf(" prefix de group : %d\n", prefix_de_groupe);
    printf(" idetifiant de groupe : %d\n", idetifiant_de_groupe);
    printf("code d'editeur : %d\n", code_de_editeur);
    printf(" numero de article : %d\n", numero_de_article);
    printf("chifre de controle : %d\n", chifre_de_controle);

}