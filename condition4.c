#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float D,X1,X2;
    printf("entrer la valeur de a");
    scanf("%d",&a);
    printf("entrer la valeur de b");
    scanf("%d",&b);
    printf("entrer la valeur de c");
    scanf("%d",&c);
    D=(pow(b,2)-4*a*c);
    if (D==0){
            printf("la solution de equation est %f:/n,-b/2*a");
    }
    else if (D>=0){
             X1=(-b-sqrt(D))/2*a;
             X2=(-b+sqrt(D))/2*a;
        printf("la solution de equation est %f %f /n",X1,X2);

    }
    else {
        printf("equation pas de solution");
    }




    return 0;
}
