#include <stdio.h>
#include "header.h"

void affichage()
{
    switch(mode_a)
    {
    case 0 : //matrice ligne
        {
            for(int i = 0; i<l; i++)
            {
                for(int j = 0; j<c; j++)
                {
                    printf("mat[%d][%d]=%d ",i,j,mat[i][j]);
                }
                printf("|");
            }
        }break;
    case 1 : //matrice colonne
        {
            for(int i = 0; i<l; i++)
            {
                for(int j = 0; j<c; j++)
                    printf("mat[%d][%d]=%d\n",i,j,mat[i][j]);
            }
            printf("|||||||||||||||||||||\n");
        }break;
    case 2 : //matrice
        {
            for(int i = 0; i<l; i++)
            {
                for(int j = 0; j<c; j++)
                {
                    printf("mat[%d][%d]=%d\t",i,j,mat[i][j]);
                }
                printf("\n");
            }
        }break;
    }
}


