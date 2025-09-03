#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2,S,T;
    printf("veuillez entrer le nommber 1 :");
    scanf("%d",&N1);
    printf("veuillez entrer le nommber 2 :");
    scanf("%d",&N2);
    if (N1==N2){
            S=N1+N2;
            T=S*3;
        printf("la resultat est : %d",T);
    }
    else {
        S=N1+N2;
        printf("la resultat est : %d ",S);
    }

    return 0;
}
