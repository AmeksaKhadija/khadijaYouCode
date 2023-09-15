#include <stdio.h>
#include <stdlib.h>

int main()
{
  menu ();

    }

int menu(){
    int opperation;
    printf("choisissez une opperation:\n 1. Addition \n .2 Soustraction \n 3. Multiplication \n 4. Division \n 5.Carre \n 6 . Racine carre \n 7. Quitter \n");
    scanf("%d",&opperation);
    switch (opperation){
        case 1:Addition();
        break;
        case 2:Soustraction();
        break;
        case 3:Multiplicatin();
        break;
        case 4:Division();
        break;
        case 5:Carre();
        break;
        case 6:racine_carre();
        break;
        case 7: printf("Qetter");
        break;
    }
   }
   int Addition(){
       int a,b ;
       printf("entrer leurs valeurs");
       scanf("%d+%d",&a,&b);
       int solution = a+b;
       printf(" solution est %d\n",solution);
       main();
   }
   int Soustraction(){
       int a,b ;
       printf("entrer leurs valeurs");
       scanf("%d-%d",&a,&b);
       int solution = a-b;
       printf(" solution est %d\n",solution);
       main();
   }
   int Multiplicatin(){
       int a,b ;
       printf("entrer leurs valeurs");
       scanf("%d*%d",&a,&b);
       int solution = a*b;
       printf(" solution est %d\n",solution);
       main();
   }
    int Division(){
       int a,b ;
       printf("entrer leurs valeurs");
       scanf("%d/%d",&a,&b);
       int solution = a*b;
       printf(" solution est %d\n",solution);
       main();
   }
   int Carre(){
       int a ;
       printf("entrer leurs valeurs");
       scanf("%d",&a);
       int solution = a*a;
       printf(" solution est %d\n",solution);
       main();
   }
   int racine_carre(){
       int a ;
       printf("entrer leurs valeurs");
       scanf("%d",&a);
       int solution = sqrt (a);
       printf(" solution est %d\n",solution);
       main();
   }

