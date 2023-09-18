#include <stdio.h>
#include <stdlib.h>

int main()
{
    menu();

}
 int menu(){
     int opperation;
     printf("choisissez une opperation :\n 1:Addition \n 2: Soustration \n 3: Multiplication \n 4: Division \n 5:Carre \n 6: Racine_carre \n 7: MenuTableau \n 8:Quitter \n");
     scanf("%d",&opperation);
     switch (opperation){
     case 1: Addition();
     break;
     case 2: Soustraction();
     break;
     case 3: Multiplication();
     break;
     case 4: Division();
     break;
     case 5: Carre();
     break;
     case 6: Racine_carre();
     break;
     case 7: MenuTableau();
     break;
     case 8: printf("Quitter");
     break;
     }
 }
 int MenuTableau(){
     int T[10]={1,3,55,8,4,11,7,0,22,3};
     int i;
     int max=T[0];
     int min=T[0];
     double moy;
     float S=0;
     for (i=0;i<10;i++){
     if (T[i]>max){
        max =T[i];
     }
     if (T[i]<min){
        min=T[i];
     }
     S=S+T[i];
 }
 printf("le max est %d \n",max);
 printf("le min est %d \n",min);
 printf("la moyenne est %f \n",S/10);
 }

 int Addition(){
   int a,b;
   printf("entrer leurs valeurs ");
   scanf("%d+%d",&a,&b);
   int solution=a+b;
   printf("solution est %d\n",solution);
 }
 int Soustraction(){
   int a,b;
   printf("entrer leurs valeurs ");
   scanf("%d-%d",&a,&b);
   int solution=a-b;
   printf("solution est %d\n",solution);
 }
 int Multiplication(){
   int a,b;
   printf("entrer leurs valeurs ");
   scanf("%d*%d",&a,&b);
   int solution=a*b;
   printf("solution est %d\n",solution);
 }
 int Division(){
   int a,b;
   printf("entrer leurs valeurs ");
   scanf("%d/%d",&a,&b);
   int solution=a/b;
   printf("solution est %d\n",solution);
 }
 int Carre(){
   int a;
   printf("entrer leurs valeurs ");
   scanf("%d",&a);
   int solution=a*a;
   printf("solution est %d\n",solution);
 }
 int Racine_carre(){
   int a;
   printf("entrer leurs valeurs ");
   scanf("%d",&a);
   int solution= sqrt (a);
   printf("solution est %d\n",solution);
 }
