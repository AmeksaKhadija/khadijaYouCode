#include <stdio.h>
#include <stdlib.h>

int main()
{   int A,B,mod;
   float S,Df,P,Dv;

    printf("entrer la valeur de A:");
    scanf("%d",&A);
    printf("entrer la valeur de B:");
    scanf("%d",&B);
    S=A+B;
    Df=A-B;
    P=A*B;
    Dv=A/B;
    mod=A%B;
    printf("la somme de A et B est =%f",S);
    printf("ls soustraction de A et B est =%f",Df);
    printf("la multiplication de A et B est=%f",P);
    printf("la division de A et B est=%f",Dv);
    printf("modulus de A et B est=%d",mod);
    return 0;
}
