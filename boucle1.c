#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M ,i;
    printf("entrer un nombre");
    scanf("%d", &M);
    for(i=0;i<=10;i++){
        M*i;
        printf("LA TABLE DE MULTIPLICATION DE %d*%d est %d\n",M,i,M*i);
    }
    return 0;
}
