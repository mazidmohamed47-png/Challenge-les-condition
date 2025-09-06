#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee,option;
    printf("veullez entrer une annee : ");
    scanf("%d",&annee);
    printf("pour optio de mois entrer le nomber : 1 \n");
    printf("pour optio de jours entrer le nomber : 2 \n");
    printf("pour optio de mois entrer le nomber : 3 \n");
    printf("pour optio de mois entrer le nomber : 4 \n");
    printf ("pour optio de mois entrer le nomber : 5 \n");
    scanf("%d",&option);
    switch (option){
case 1 :
    printf("lannee en mois est : %d mois ",annee*12);
    break;
case 2 :
    printf("lannee en Jours est : %d Jours ",annee*365 );
    break;
case 3 :
    printf("lannee en Heures est : %d Heures ",annee*365*24 );
    break;
case 4 :
    printf("lannee en Minutes est : %d Minutes ",annee*365*24*60 );
    break;
case 5 :
    printf("lannee en Secondes est : %d Secondes ",annee*365*24*60*60 );
    break;
    }
    return 0;
}
