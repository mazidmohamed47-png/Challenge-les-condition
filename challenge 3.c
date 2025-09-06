#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nommber1,Nommber2,Somme,Triple;
    printf("veuillez entrer le Nommber 1 :");
    scanf("%d",&Nommber1);
    printf("veuillez entrer le Nommber 2 :");
    scanf("%d",&Nommber2);
    if (Nommber1==Nommber2){
            Somme=Nommber1+Nommber2;
            Triple=Somme*3;
        printf("la resultat est : %d",Triple);
    }
    else {
        Somme=Nommber1+Nommber2;
        printf("la resultat est : %d ",Somme);
    }

    return 0;
}
