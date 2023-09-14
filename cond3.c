#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float S;
    printf("entrer la valeur de x");
    scanf("%d",&x);
    printf("entrer la valeur de y");
    scanf("%d",&y);
    S=x+y;
    if (x==y){
      printf("les valeurs sont identiques");
      printf("le triple de leur somme est:%f",S*3);
    }
    else {
      printf("la somme de x et y est =%f",S);
    }
    return 0;
}

