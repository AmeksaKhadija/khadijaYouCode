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
  char statut[80];
  struct deadline deadline;
  };
  struct tache tache1[200];
  int compteur=0;
  int ID;
 void add_nouvelle_tache(){

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
  scanf("%s",tache1[compteur].statut);
  compteur++;
 }
 void Add_plusieurs_tache(){
 int A,i;
 printf("entre le nombre des autres taches :");
 scanf("%d",&A);
 for (i=0;i<A;i++){
    add_nouvelle_tache();
 }
 }
 //affichage:
 void afficher_tous_les_taches(){
 int i;
 for (i=0;i<compteur;i++){
    printf("\n tache %d: \n id = %d \n titre = %s \n descrption = %s \n deadline : %d jour ,%d heur , %d minute \n statut = %s ",i+1,tache1[i].id,tache1[i].titre,tache1[i].descrption,tache1[i].deadline.jour,tache1[i].deadline.heur,tache1[i].deadline.minute,tache1[i].statut);
 //triage
 }
 }
 //modification
 void Modifier_tache(struct tache tache1[200],int compteur,int ID){
   int found=0;

   for(int i=0;i<compteur;i++){
    if (tache1[compteur].id==ID){
        found = 1;
        printf("modifier tache de ID : %d\n",ID);
        printf("1.modifier la description \n");
        printf("2.modifier le statut \n");
        printf("3.modifier le deadline \n");
        printf("entrer votre choix :");
        int choix;
        scanf("%d",&choix);
        switch(choix){
        case 1:
            printf("entrer un nouvelle description :");
            getchar();
            gets(tache1[compteur].descrption);
            printf("la description est modifier.\n");
            break;
        case 2:
            printf("entrer un nouvelle statut :");
            getchar();
            gets(tache1[compteur].statut);
            printf("le statut est modifier.\n");
            break;
        case 3:
            printf("entrer un nouvelle deadline :\n");
            printf("jour :");
            scanf("%d",&tache1[compteur].deadline.jour);
            printf("heur :");
            scanf("%d",&tache1[compteur].deadline.heur);
            printf("minute :");
            scanf("%d",&tache1[compteur].deadline.minute);
            printf("entrer leur statut : \n[1]=TODO \n[2]=DOING \n[3]=DONE \n");
            scanf("%s",tache1[compteur].statut);
            compteur++;
            break;
        default:
            printf("choix n'existe pas .\n");
        }
        break;
    }
   }
   if(!found){
    printf("tache avec ID %d n'existe pas .\n",ID);
   }
 }
//menu
 int menu(){
   int selection;
    do {

        printf("-----------------------------------------------Tache to do--------------------------------------------------------------------------");
        printf("choisissez un selection : \n 1.Add nuvelle tache :\n 2.Add plusieurs tache :\n 3.Afficher la liste de toutes les taches :\n 4.Modifier une tâche: \n 5.Supprimer une tâche par identifiant: \n 6.Rechercher les Tâches :\n 7.Statistiques :\n 8.quitter\n");
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
     case 5:printf("hello");
     break;
     case 6:printf("hello");
     break;
     case 7:printf("hello");
     break;
 }
    }while(selection!=8);




 }
