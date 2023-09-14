#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annees,mois,jours,heurs,minutes,secondes,year;
    printf("entrer l'annee");
    scanf("%d", &annees);
    year=2023-annees;
    mois=year*12;
    jours=year*12*30;
    heurs=year*12*30*24;
    minutes=year*12*30*24*60;
    secondes=year*12*30*24*60*60;
    printf("l'annee est %d");
    printf("les mois est %d");
    printf("les jours est %d");
    printf("les heurs est %d");
    printf("les minutes est %d");
    printf("les secondes est %d");

    return 0;
}
