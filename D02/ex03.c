#include <stdio.h>

int main()
{
    int mm1;
    int mm2;
    int jj1;
    int jj2;
    int aa1;
    int aa2; 
    int total1;
    int total2;
    int diff;

    printf("Entrez la première date : ");
    scanf("%d/%d/%d", &mm1, &jj1, &aa1);
    printf("Entrez la deuxième date : ");
    scanf("%d/%d/%d", &mm2, &jj2, &aa2);
    total1 = mm1 * 30 + jj1 + aa1 * 365;
    total2 = mm2 * 30 + jj2 + aa2 * 365;
    diff = total1 - total2;
    if (diff < 0)
    printf("%d/%d/%d plus tard que %d/%d/%d", mm1,jj1,aa1,mm2,jj2,aa2);
    else if (diff > 0)
    printf("%d/%d/%d plus tôt que %d/%d/%d", mm1,jj1,aa1,mm2,jj2,aa2); 
    else
    printf("%d/%d/%d egal %d/%d/%d\n", mm1,jj1,aa1,mm2,jj2,aa2); 

}