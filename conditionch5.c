#include <stdio.h>
#include <stdlib.h>

int main()
{
int annees,mois,jours,heurs,minutes,secondes,ann;
    printf("entrer l'annee \n");
    scanf("%d", &annees);
    ann = 2023-annees;
    mois = ann*12;
    jours = ann*12*30;
    heurs = ann*12*30*24;
    minutes = ann*12*30*24*60;
    secondes = ann*12*30*24*60*60;
    printf("l'annee est %dmois\n%d jours \n%d heurs \n%d minutes \n%d secondes \n%d",ann,mois,jours,heurs,minutes,secondes);
    return 0;
}
