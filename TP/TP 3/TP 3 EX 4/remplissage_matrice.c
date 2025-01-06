#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void remplir()
{
    switch(mode_r)
    {
    case 0 : //seul nbr
        {
            int c;
            puts("donner le nbr");
            scanf("%d",&c);
            for(int i = 0; i<l; i++)
            {
                for(int j = 0; j<c; j++)
                    mat[i][j] = c;
            }
        }break;
    case 1 : //nbrs aleatoires
        {
            for(int i = 0; i<l; i++)
            {
                for(int j = 0; j<c; j++)
                    mat[i][j] = rand()%101;
            }
        }break;
    case 2 : //saisie manuel
        {
            for(int i = 0; i<l; i++)
            {
                for(int j = 0; j<c; j++)
                {
                    printf("mat[%d][%d]=",i,j);
                    scanf("%d",&mat[i][j]);
                    printf("\n");
                }
            }
        }break;
    }

}
