#include <stdio.h>
#include <stdlib.h>

int ** alloc_mat_triangle(int rang)
{
    int ** p = malloc(rang * sizeof(int*)); //rang = nbr_lignes

    for(int i = 0; i < rang; i++)
        p[i] = malloc((i+1) * sizeof(int)); //i+1 = nbr_colonnes

    puts("allocation avec succes");

    return p;
}


int ** remplir_mat_pascal(int rang)
{
    printf("%d",__LINE__);
    int **p = alloc_mat_triangle(rang);


       int i,j;
    p[0][0]=1;
    for(i=1; i<rang; i++)
    {
        p[i][0]=1;
        p[i][i]=1;
        for(j=1; j<i; j++)
        {
            p[i][j]=p[i-1][j]+p[i-1][j-1];
        }
    }

    printf("%d",__LINE__);
    return p; //probablement fonction de type void
}


void affich(int ** mat, int rang)
{
     printf("%d",__LINE__);
    for(int i = 0; i < rang; i++)
    {
        printf("\n");

        for(int j = 0; j <= i; j++)
            printf("%d\t", mat[i][j]);

    }


}


void free_mat(int ** mat, int rang)
{
    int i;
    for(i = rang; i > 0; i--);
        free(mat[i]);
    free(mat);
    puts("success!!!!!!!!!!!!!!!!!");
}


int main()
{
    int ** p = remplir_mat_pascal(8);



    affich(p, 8);


    free_mat(p,8);


    return 0;
}
