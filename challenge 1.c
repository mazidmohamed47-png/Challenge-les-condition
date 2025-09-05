#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int N ;
    printf("veuillez entrer le nommber : ");
    scanf("%d",&N);
    if (N % 2==0)
        printf("le nober %d est pair .",N);
    else
        printf("le nomber %d est impair .",N);
    return 0;
}
