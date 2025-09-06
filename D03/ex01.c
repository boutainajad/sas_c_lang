#include <stdio.h>

int main()
{
    int digit_seen[10] = {0};
    int digit_repeated[10] = {0};
    int n, digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit] == 1)
        {
            digit_repeated[digit] = 1;
        }
        digit_seen[digit] = 1;
        n /= 10;
    }
    int i;
    for (i = 0; i < 10; i++)
    {
        if (digit_repeated[i])
        printf("%d", i);
    }
    printf("\n");
    return 0;
}