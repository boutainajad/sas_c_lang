#include <stdio.h>

#define NOMBRE_TAUX ((int)(sizeof(valeurs) / sizeof(valeurs[0])))
#define SOLDE_INITIAL 100.00

int main(void) {
    int i, taux_min, nombre_annees, annee;
    double valeurs[5];
    int mois;

    printf("Taux d'intérêt (en entier, par ex. 5 pour 5%%) : ");
    scanf("%d", &taux_min);

    printf("Nombre d'années : ");
    scanf("%d", &nombre_annees);

    printf("\nAnnées");
    for (i = 0; i < NOMBRE_TAUX; i++) {
        printf("%6d%%", taux_min + i);
        valeurs[i] = SOLDE_INITIAL;
    }
    printf("\n");

    for (annee = 1; annee <= nombre_annees; annee++) {
        printf("%3d    ", annee);
        for (i = 0; i < NOMBRE_TAUX; i++) {
            for (mois = 0; mois < 12; mois++) {
                valeurs[i] += (taux_min + i) / 100.0 / 12.0 * valeurs[i];
            }
            printf("%7.2f", valeurs[i]);
        }
        printf("\n");
    }

    return 0;
}