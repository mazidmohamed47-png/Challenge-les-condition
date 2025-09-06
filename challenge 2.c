#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("veuillez entrer un caractere : ");
    scanf("%c",&c);
    switch (c){
case 'a': case 'A':
    printf("le caractere %c est une voyelle .",c);
    break;
case 'e': case 'E':
    printf("le caractere %c est une voyelle .",c);
    break;
case 'i': case 'I':
    printf("le caractere %c est une voyelle .",c);
    break;
case 'o': case 'O':
    printf("le caractere %c est une voyelle .",c);
    break;
    case 'u': case 'U':
    printf("le caractere %c est une voyelle .",c);
    break;
    default:
    printf("le caractere %c il nya pas une voyelle .",c);
    }
    return 0;
}
