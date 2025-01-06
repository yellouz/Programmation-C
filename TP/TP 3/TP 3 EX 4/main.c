#include <stdio.h>
#include "header.h"

int mode_r,mode_a,l,c,mat[100][100];

int main()
{
    //int l,c;
    printf("Donner le nombre des lignes : \n");
    scanf("%d",&l);
    printf("Donner le nombre des colonnes : \n");
    scanf("%d",&c);

    //int mat[l][c];

    //enum est mieux

    puts("Donner le mode de remplissage :");
    puts("Nombre unique? (= 0)");
    puts("Nombres aleatoires? (= 1)");
    puts("Saisie manuelle? (= 2)");

    ici :
    scanf("%d",&mode_r);

    if(mode_r != 0 && mode_r != 1 && mode_r != 2)
    {
        puts("erreur!");
        goto ici;
    }

    remplir();

    puts("Donner le mode de d'affichage :");
    puts("Seule ligne? (= 0)");
    puts("Seule colonne? (= 1)");
    puts("Matrice? (= 2)");

    ici2 :
    scanf("%d",&mode_a);

    if(mode_a != 0 && mode_a != 1 && mode_a != 2)
    {
        puts("erreur!");
        goto ici2;
    }

    affichage();

    return 0;
}
