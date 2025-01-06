#include <stdio.h>
#include <stdlib.h>

enum CodeErreur{SUCCES, INDEX_ERROR, OTHER_ERROR};

struct Liste
{
    int liste[20];
    int taille;
};

enum CodeErreur obtenirElement(struct Liste *liste, int indice, int *resultat)
{
    if(indice < 0 || indice >= liste->taille)
        return INDEX_ERROR;

    *resultat = liste->liste[indice];
    return SUCCES;
};

int main()
{
    struct Liste liste1 = {{2,5,6}, 3};

    int indice = 2;
    int resultat;

    int c = obtenirElement(&liste1, indice, &resultat);

    if(c == SUCCES)
        printf("Success liste[%d] = %d",indice,liste1.liste[indice]);
    else
        printf("erreur");



    return 0;
}
