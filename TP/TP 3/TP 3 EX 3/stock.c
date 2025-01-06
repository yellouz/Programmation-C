#include <stdio.h>

int quantite;

void affiche_stock()
{
    printf("le stock actuelle est : %d \n",quantite);
}

void ajout_stock(int a)
{
    printf("%d est ajoutee au stock \n",a);
    quantite += a;
    affiche_stock();
}

void diminuer_stock(int a)
{
    if (a > quantite)
    {
        printf("alerte! \n");
    } else
    {
        printf("%d est diminuee du stock \n",a);
        quantite -= a;
        affiche_stock();
    }
}

void initialisation()
{
    quantite = 0;
}
