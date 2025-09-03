#include <stdio.h>

int main()
{
    float mantant;
    float tax;
    float total;

    printf("entrez un montant en dollars et en cents : ");
    scanf("%f", &mantant);
    tax = mantant * 0.05;
    total = mantant + tax;
    printf("le mantant avec tax ajoutee : $%.2f", total);

}