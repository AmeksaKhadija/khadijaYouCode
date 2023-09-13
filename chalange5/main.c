#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
   printf("les coordonnees de la premier place est:");
   scnanf("%d",a);
   scnanf("%d",b);
   printf("les coordonnees de la deuxieme place est:");
   scnanf("%d",c);
   scnanf("%d",d);
   e=c-a;
   f=d-b;
   distance=sqrt(pow(e,2)+pow(f,2));
   printf("la distance entre les deux points est:"%d,distance);


    return 0;
}
