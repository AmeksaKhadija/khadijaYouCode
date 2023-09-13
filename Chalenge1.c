#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[30],prenom[30];
    int age,numdetele;
    float sexe[30];
    printf("voullez entrer votre nom:\n");
    scanf("%s",nom);
    printf("voullez entrer votre prenom:\n");
    scanf("%s",prenom);
    printf("voullez entrer votre age:\n");
    scanf("%d",&age);
    printf("voullez entrer votre num de tele:\n");
    scanf("%d",&numdetele);
    printf("voullez entrer votre sexe:\n");
    scanf("%s",sexe);
    return 0;
}
