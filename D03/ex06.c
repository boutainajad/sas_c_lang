#include <stdio.h>

int main(void)
{
    char message[100];
    int i = 0;
    char caractere;

    printf("Entrez votre message : ");
    scanf("%s", message);
    printf("En B1FF-speak : ");
    while (message[i] != '\0')
    {
        caractere = message[i];

        if (caractere >= 'a' && caractere <= 'z')
        {
            caractere = caractere - 32;
        }

        if (caractere == 'A')
            caractere = '4';
        else if (caractere == 'B')
            caractere = '8';
        else if (caractere == 'E')
            caractere = '3';
        else if (caractere == 'I')
            caractere = '1';
        else if (caractere == 'O')
            caractere = '0';
        else if (caractere == 'S')
            caractere = '5';

        printf("%c", caractere);
        i++;
    }

    printf("!!!!!!!!!!\n");

    return (0);
}