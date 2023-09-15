#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("entrer la valeur de caractere");
    scanf("%c",&caractere);
    if (caractere >65 && caractere<90){
        printf("caractere est majuscule");
    }
    else{
        printf("caractere est miniscule");
    }

    return 0;
}
