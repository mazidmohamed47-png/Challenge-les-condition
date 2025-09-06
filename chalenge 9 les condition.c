#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracteres;
    printf("Entrer un caracteres : ");
    scanf("%c",&caracteres);
    if (caracteres>=65 && caracteres<=90)
    printf("le caracter %c est Majuscules ",caracteres);
    else if (caracteres>=97 && caracteres<=122)
    printf("le caracter %c est Minuscules ",caracteres);
    else
    printf(" Erour : il nya pas une lettre alphabetique ");
    return 0;
}
