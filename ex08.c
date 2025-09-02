#include <stdio.h>

int main()
{
    float montant_pret;
    float taux_interet;
    float paiement_mensuel;
    float taux_interet_mensuel;
    float solde1;
    float solde2;
    float solde3;

    printf("entrez le montant du pret : ");
    scanf("%f", &montant_pret);

    printf("entrez le tax d'interet : ");
    scanf("%f", &taux_interet);

    printf("entrez paiement mensuel : ");
    scanf("%f", &paiement_mensuel); 

    taux_interet_mensuel = (taux_interet / 100)/12;
    solde1 = montant_pret * (1 + taux_interet_mensuel) - paiement_mensuel;
    solde2 = solde1 * (1 + taux_interet_mensuel) - paiement_mensuel;
    solde3 = solde3 * (1 + taux_interet_mensuel) - paiement_mensuel;

    printf("solde restant apres le premier paiement : $%.2f\n", solde1);
    printf("solde restant apres deuxieme paiement : $%.2f\n", solde2);
    printf("sold restant apres la troisieme paiement : $%.2f\n", solde3);
}