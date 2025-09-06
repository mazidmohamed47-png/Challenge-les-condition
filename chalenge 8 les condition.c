#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moyenne ;
    printf("veuillez entrer la Moyenne :");
    scanf("%f",&moyenne);
    if (moyenne<10)
    printf("Echec (Recale)");
    else if (moyenne>=10 && moyenne<12)
    printf("Passable");
    else if (moyenne>=12 && moyenne<14)
    printf("Assez bien");
    else if (moyenne>=14 && moyenne<16)
    printf("Bien");
    else
    printf("Tres bien");
    return 0;
}
