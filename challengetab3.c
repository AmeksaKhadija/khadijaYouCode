#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int i,n;
     printf("entrer un tableau de 10 cases : \n");
     scanf("%d",&n);
      for(i=0;i<n;i++){
        printf("entrer element %d \n",i+1);
        scanf("%d",&T[i]);
      }
      printf("avant le trie :\n ");
      for(i=0;i<n;i++){
       printf("%d",T[i]);
       printf("\n");
      }
      int echange ;
      printf("apres le trie :\n ");
      do{
         echange=0;
        for(i=0;i<n-1;i++){
            if (T[i]<T[i+1]){
             int temporaire;
             temporaire=T[i];
             T[i]=T[i+1];
             T[i+1]=temporaire;
             echange++;
            }
        }
      } while(echange>0);
      for(i=0;i<n;i++){
      printf("%d \n",T[i]);
      }
    return 0;
}
