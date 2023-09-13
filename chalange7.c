#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int n1=0,n2=0,n3=0;
    printf("entrer un nombre de trois chiffre:");
    scanf("%d",&n);
    n3=n/100;
    n2=(n%100)/10;
    n1=n%10;
    printf("le mot inverse est:");
    printf("%d%d%d",n1,n2,n3);
    return 0;
}
