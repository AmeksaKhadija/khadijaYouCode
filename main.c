#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cara;
    printf("entrer la valeur du cara");
    scanf("%c",&cara);
    if (cara >65 && cara<90){
        printf("le caractere %c est un alphabet majuscule", cara);
    }
    else if (cara >97 && cara<133){
        printf("le caractere est miniscule ");
    }
    else {
        printf("le caractere pas un alphabet");
    }
    return 0;

}
