#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Nommber ;
    printf("veuillez entrer un nommber : ");
    scanf("%f",&Nommber);
    if (Nommber>0)
    printf("le nommber et positif");
    else if (Nommber<0)
    printf("le nommber et negatif ");
    else
    printf(" le nommber et nul");
    return 0;
}
