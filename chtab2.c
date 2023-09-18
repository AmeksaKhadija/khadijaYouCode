#include <stdio.h>
#include <stdlib.h>

int main()
{
     int T[10];
     int i;
     int max=T[0];
     int min=T[0];

     for (i=0;i<10;i++){
      printf("entrer 10 nombres entier : \n");
      scanf("%d",&T[i]);

       if (T[i]>max){
        max =T[i];
     }
        if (T[i]<min){
          min=T[i];
       }
     }
       printf("le max est %d: \n",max);
       printf("le min est %d:\n",min);
    return 0;
}
