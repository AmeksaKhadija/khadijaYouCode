#include <stdio.h>
#include <stdlib.h>
int main()
{
    menu();
}
//structure deadline
struct deadline{
  int jour;
  int heur;
  int minute;
  };
//structure id/titre/discrp/deadline/statut
struct tache{
  int id;
  char titre[30];
  char descrption[150];
  int statut;
  struct deadline deadline;
  };
  struct tache tache1[200];
  int compteur=0;
  int ID;
  int IDdel;
  int IDrecherche;
  int TITRErecherche;
  int complet=0;
  int incomplet=0;
  int i,j;
  struct tache temporaire;
 void add_nouvelle_tache(){
printf("\n---------------------------------ajouter une tache-------------------------------------\n");
  printf("entrer un identifiant unique : ");
  scanf("%d",&tache1[compteur].id);
  printf("entrer un titre :");
  getchar();
  gets(tache1[compteur].titre);
  printf("entrer un description :");
  gets(tache1[compteur].descrption);
  printf("donnez un deadline :\n");
  printf("jour :");
  scanf("%d",&tache1[compteur].deadline.jour);
  printf("heur :");
  scanf("%d",&tache1[compteur].deadline.heur);
  printf("minute :");
  scanf("%d",&tache1[compteur].deadline.minute);
  printf("entrer leur statut : \n[1]=TODO \n[2]=DOING \n[3]=DONE \n");
  scanf("%d",&tache1[compteur].statut);
  compteur++;
 }
 void Add_plusieurs_tache(){
     printf("\n-------------------------------ajouter plusieurs taches------------------------------------------\n");
 int A,i;
 printf("entre le nombre des autres taches :");
 scanf("%d",&A);
 for (i=0;i<A;i++){
    add_nouvelle_tache();
 }
 }
 //affichage avec triage:
 void afficher_tous_les_taches(){
     printf("\n---------------------------------------affichage--------------------------------------------\n");
   int i;
   int choix;
     printf("entrer votre choix :\n");
     printf("1: Afficher toutes les lestes \n");
     printf("2: Afficher la leste de toutes les taches avec un ordre alphabetique \n");
     printf("3: Afficher la leste de toute les taches avec un ordre par deadline \n");
     printf("4: Afficher les t�ches dont le deadline est dans 3 jours ou moins.\n");
     scanf("%d",&choix);
   switch(choix){
       case 1:
          for (i=0;i<compteur;i++){
    printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %d ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);
    }
        break;
       case 2:
        for(i=0;i<compteur;i++){
        for(j=0;j<compteur-i-1;j++){
        if (strcmp (tache1[j].titre , tache1[j+1].titre) >0){
            temporaire=tache1[j];
            tache1[j]=tache1[j+1];
            tache1[j+1]=temporaire;
            }
          }
        }
        for(i=0;i<compteur;i++){
          printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %d ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);
        }
        case 3:
          for(i=0;i<compteur;i++){
          for(j=0;j<compteur-i-1;j++){
           if (tache1[j].deadline.jour < tache1[j+1].deadline.jour){
              temporaire=tache1[j];
              tache1[j]=tache1[j+1];
              tache1[j+1]=temporaire;
              }
           else if (tache1[j].deadline.jour == tache1[j+1].deadline.jour){
            if (tache1[j].deadline.heur < tache1[j+1].deadline.heur){
              temporaire=tache1[j];
              tache1[j]=tache1[j+1];
              tache1[j+1]=temporaire;
              }
              }
           else if (tache1[j].deadline.heur == tache1[j+1].deadline.heur){
            if (tache1[j].deadline.minute < tache1[j+1].deadline.minute){
              temporaire=tache1[j];
              tache1[j]=tache1[j+1];
              tache1[j+1]=temporaire;
              }
             }
           }
           }
           for(i=0;i<compteur;i++){
          printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %d ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);
        }
        case 4:
          for(i=0;i<compteur;i++){
           if (tache1[i].deadline.jour <= 3){
            printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %d ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);
        }
     }
     }
  }
 //modification

 void Modifier_tache(struct tache tache1[200],int compteur,int ID){
     printf("\n-----------------------------modification-------------------------------\n");
   int found=0;
    printf("entrer ID de la tache qui tu veux modifier :\n");
    scanf("%d",&ID);
   int choix;
   for(int i=0;i<compteur;i++){
    if (tache1[i].id==ID){
        found = 1;
        printf("modifier tache de ID : %d\n",ID);
        printf("1.modifier la description \n");
        printf("2.modifier le statut \n");
        printf("3.modifier le deadline \n");
        printf("entrer votre choix :");
        scanf("%d",&choix);
        switch(choix){
        case 1:
            printf("entrer un nouvelle description :");
            getchar();
            gets(tache1[i].descrption);
            printf("la description est modifier.\n");
            break;
        case 2:
            printf("entrer leur statut : \n[1]=TODO \n[2]=DOING \n[3]=DONE \n");
            scanf("%d",&tache1[i].statut);
            printf("le statut est modifier.\n");
            break;
        case 3:
            printf("entrer un nouvelle deadline :\n");
            printf("jour :");
            scanf("%d",&tache1[i].deadline.jour);
            printf("heur :");
            scanf("%d",&tache1[i].deadline.heur);
            printf("minute :");
            scanf("%d",&tache1[i].deadline.minute);

            compteur++;
            break;
        default:
            printf("choix n'existe pas .\n");
        break;
        }
    }
   }
   if(!found){
    printf("tache avec ID %d n'existe pas .\n",ID);
   }
 }
 //suprimer une tache
 void suprimer_tache(struct tache tache1[200],int IDdel){

printf("\n-------------------------suprimer une tache------------------------------\n");
   int found=0;
   printf("entrer ID de la tache qui tu veux suprimee :\n");
   scanf("%d",&IDdel);
   for(int i=0;i<compteur;i++){
    if (tache1[i].id==IDdel){
        found = 1;
        for (int N=i;N<compteur-1;N++){
            tache1[N]=tache1[N+1];
          }
        compteur--;
        printf(" la tache de ID=%d est supprime \n",IDdel);
        break;
    }
    }
     if(!found){
        printf("la tache avec ID=%d n'existe pas.\n",IDdel);
    }
    }
 //rechercher les taches
void recherche_tache(struct tache tache1[200],int compteur,int IDrecherche,int TITRErecherche){
printf("\n------------------------rechercher une tache----------------------------\n");
int choix;
int found=0;
 printf("entrer votre choix :\n");
 printf("1:rechercher par ID .\n",IDrecherche);
 printf("2.rechercher par le titre .\n",TITRErecherche);
 scanf("%d",&choix);
 switch(choix){
   case 1:
     printf("entrer un ID pour rechercher une tache");
     scanf("%d",&IDrecherche);
     for(int i=0;i<compteur;i++){
    if (tache1[i].id==IDrecherche){
        found = 1;
    printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %d ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);

 }
}
  break;
   case 2:
     printf("entrer un titre pour rechercher une tache");
     scanf("%d",&TITRErecherche);
     for(int i=0;i<compteur;i++){
    if (tache1[i].id==TITRErecherche){
        found = 1;
    printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %d ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);
 }
}
break;
}
}
//statistique
void statistiques(struct tache tache1[200],int compteur){
printf("\n---------------------------------les statistiques------------------------------------\n");
int choix;

printf("entrer votre choix :\n");
 printf("1:Afficher le nombre total des taches.\n");
 printf("2:Afficher le nombre de taches completes et incompletes.\n");
 printf("3:Afficher le nombre de jours restants jusque au delai de chaque tache.\n");
 scanf("%d",&choix);

 switch(choix){
   case 1:
       printf(" le nombre total des taches est : %d",compteur);
       break;
   case 2:
       for(int i=0;i<compteur;i++){
          if (tache1[i].statut== 1 || tache1[i].statut==2){
            incomplet++;
          }
          if (tache1[i].statut == 3){
            complet++;
          }
        }
       printf("le nombre des taches incomplets est :%d \n",incomplet);
       printf("le nombre des taches complets est :%d",complet);
     break;
 }
 }
//menu
 int menu(){

   int selection;

    do {
        printf("\n-----------------------------------Tache to do-----------------------------------------\n");
        printf("choisissez un selection : \n 1.Add nuvelle tache :\n 2.Add plusieurs tache :\n 3.Afficher la liste de toutes les taches :\n 4.Modifier une tache: \n 5.Supprimer une tache par identifiant: \n 6.Rechercher les Taches :\n 7.Statistiques :\n 8.quitter\n");
      scanf("%d",&selection);
   switch (selection){
     case 1:add_nouvelle_tache();
     break;
     case 2:Add_plusieurs_tache();
     break;
     case 3:afficher_tous_les_taches();
     break;
     case 4:Modifier_tache( tache1, compteur, ID);
     break;
     case 5:suprimer_tache( tache1, IDdel);
     break;
     case 6:recherche_tache( tache1,compteur, IDrecherche, TITRErecherche);
     break;
     case 7:statistiques(tache1,compteur);
     break;
 }
    }while(selection!=8);

}

