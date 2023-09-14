#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    printf("entrer la valeur de x");
    scanf("%d",&X);
    if (X<0){
        printf("le nombre est negatif");
      }
    else if (X>0){
        printf("le nombre est positif");
    }
    else {
        printf("le nombre est null");
    }
    return 0;
}
