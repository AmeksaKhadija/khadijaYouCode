#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,circonference;
    const float Pi=3.14;
    printf("entrer la valeur de r");
    scanf("%f",&r);
    circonference = 2*Pi*r;
    printf("la circonférence du cercle est:%f",circonference);
    return 0;
}
