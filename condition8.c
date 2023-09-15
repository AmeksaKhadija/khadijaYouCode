#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moyenne;
    printf("entrer la moyenne");
    scanf("%d",& moyenne);
    if (moyenne< 10){
        printf("eleve recale");
    }
    else if (moyenne>10 && moyenne<12){
        printf("eleve prond montion passable");
    }
    else if (moyenne >12 && moyenne<14){
        printf("eleve prond montion assez bien");
    }
     else if (moyenne >14 && moyenne<16){
        printf("eleve prond montion bien");
    }
    else printf("eleve prond tres bien");
    return 0;
}
