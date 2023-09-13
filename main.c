#include <stdio.h>
#include <stdlib.h>

int main()
{
   float C,F;
    printf("entrer la temperature en Fahrenheit");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("la temperature en  Celsius est:%f",C);

    return 0;
}

