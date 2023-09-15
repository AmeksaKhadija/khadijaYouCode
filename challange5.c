#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distance ;
    int x1,x2,y1,y2;
    printf("entrer la valeur de x1");
    scanf("%d",&x1);
    printf("entrer la valeur de x2");
    scanf("%d",&x2);
    printf("entrer la valeur de y1");
    scanf("%d",&y1);
    printf("entrer la valeur de y2");
    scanf("%d",&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("la distance entre deux points est %f",distance);
    return 0;
}
