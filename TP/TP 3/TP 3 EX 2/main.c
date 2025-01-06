#include <stdio.h>

#define TVA(montant) montant/4

#define TTC

int main()
{
    int montant;
    printf("montant?\n");
    scanf("%d",&montant);

    #ifdef TTC
    printf("le montant TTC : %d",montant + TVA(montant));
    #elif define HT
    printf("le montant HT : %d",montant);
    #else
    printf("veuiller verifier le parametrage des macros");
    #endif // TTC




    /*switch(c)
    {
        case 0 : printf("montant finale : %d",TTC);break;
        case 1 : printf("montant finale : %d",HT);break;
        default :
            {
                printf("invalide!\n");
                goto ici;
            }
    }*/




    /*if (c = 0)
    {
        printf("montant finale : %d",TTC);
    } else if (c = 1)
    {
        printf("montant finale : %d",HT);
    } else if (c != 1 && c != 0)
    {
        printf("invalide!\n");
        goto ici;
    }*/
    return 0;
}
