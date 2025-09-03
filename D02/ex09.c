#include <stdio.h>
#include <ctype.h>

int main() 
{
    char word[100];
    int score = 0;
    int i = 0;

    printf("Entrez un mot : ");
    scanf("%s", word);

    while (word[i] != '\0') 
	{
        char c = toupper(word[i]);

        if (c == 'A' || c == 'E' || c == 'I' || c == 'L' ||
            c == 'N' || c == 'O' || c == 'R' || c == 'S' ||
            c == 'T' || c == 'U')
            score += 1;
        else if (c == 'D' || c == 'G')
            score += 2;
        else if (c == 'B' || c == 'C' || c == 'M' || c == 'P')
            score += 3;
        else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y')
            score += 4;
        else if (c == 'K')
            score += 5;
        else if (c == 'J' || c == 'X')
            score += 8;
        else if (c == 'Q' || c == 'Z')
            score += 10;
        i++;
    }
    printf("Valeur Scrabble : %d\n", score);
    return 0;
}