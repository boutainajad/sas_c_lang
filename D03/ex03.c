#include <stdio.h>

int main() 
{
    int n;
    
    while (1) 
    {
        printf("Entrez un nombre : ");
        scanf("%d", &n);
        if (n <= 0) 
        {
            break;
        }
        int digit_seen[10] = {0};
        int has_repeated = 0;
        while (n > 0) 
        {
            int digit = n % 10;
            if (digit_seen[digit] == 1) 
            {
                has_repeated = 1;
                break;
            }
            digit_seen[digit] = 1;
            n /= 10;
        }
        if (has_repeated == 1) 
        {
            printf("Chiffre répété trouvé\n");
        }
        else 
        {
            printf("Aucun chiffre répété\n");
        }
    }
    return 0;
}