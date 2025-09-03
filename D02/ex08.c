#include <stdio.h>
#include <ctype.h>

int main() {
    char phone[100];
    int i;

    printf("Entrez un numéro de téléphone : ");
    scanf("%s", phone);

    for (i = 0; phone[i] != '\0'; i++) {
        char c = toupper(phone[i]);

        if (c >= 'A' && c <= 'C') 
            printf("2");
        else if (c >= 'D' && c <= 'F') 
            printf("3");
        else if (c >= 'G' && c <= 'I') 
            printf("4");
        else if (c >= 'J' && c <= 'L') 
            printf("5");
        else if (c >= 'M' && c <= 'O') 
            printf("6");
        else if (c == 'P' || c == 'R' || c == 'S') 
            printf("7");
        else if (c >= 'T' && c <= 'V') 
            printf("8");
        else if (c >= 'W' && c <= 'Y') 
            printf("9");
        else 
            printf("%c", phone[i]);  
    }

    printf("\n");
    return 0;
}