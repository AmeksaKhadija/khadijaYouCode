#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    printf("entrer la valeur de X");
    scanf("%d",&X);
    if (X%2==0){
        printf("le nombre %d est pair",X);
    }
    else {
        printf("le nombre %d est impaire",X);
    }
    return 0;
}
