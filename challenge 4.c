#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,delta,x,x1,x2;
    printf("veuillez entrer la valeur de a : ");
    scanf("%f",&a);
    printf("veuillez entrer la valeur de b : ");
    scanf("%f",&b);
    printf("veuillez entrer la valeur de c : ");
    scanf("%f",&c);
    delta=pow(b,2)-4*a*c;
    if (delta>0){
        x1=(-b-sqrt(delta))*1/2*a;
        x2=(-b+sqrt(delta))*1/2*a;
        printf("Deux solutions reelles distinctes : \n x1= %.2f \n x2= %.2f",x1,x2);
    }
    else if (delta==0){
        x=-b/(2*a);
         printf("Une solution double :\n x=%.2f",x);
    }
    else
        printf("Pas de solution reelle");
    return 0;
}
