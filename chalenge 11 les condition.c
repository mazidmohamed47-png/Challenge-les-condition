#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int x = (rand()%7)+1;
    switch (x){
    case 1 :
    printf("Lundi");
    break;
    case 2 :
    printf("Mardi");
    break;
    case 3 :
    printf("Mercredi");
    break;
    case 4 :
    printf("Joudi");
    break;
    case 5 :
    printf("Vendredi ");
    break;
    case 6 :
    printf("Samedi ");
    break;
    case 7 :
    printf("Demench");
    break;
    default :
        printf("Erreur");
        break;}






    return 0;
}
