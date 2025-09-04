#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
    printf("veuillez entrer une lettre : ");
    scanf("%c",&lettre);
    if (lettre<=90 && lettre>=65)
        printf("le lettre est majuscule");
    else
        printf("la lettre est minuscule");
    return 0;
}
