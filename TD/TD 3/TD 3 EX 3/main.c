#include <stdio.h>
#include "arithmetique.h"
//#include "arithmetique.c"
int main()
{
    float a,b;
    int c;
    ici :
    printf("donner deux nombres a et b : \n");
    scanf("%f%f",&a,&b);
    printf("choisissez l'operation : \n");
    printf("0 : addition\n");
    printf("1 : soustraction\n");
    printf("2 : multiplication\n");
    printf("3 : division\n");
    ici2 :
    scanf("%d",&c);
    switch(c)
    {
        case 0 : printf("a + b = %f",add(a,b));break;
        case 1 : printf("a - b = %f",sous(a,b));break;
        case 2 : printf("a * b = %f",mult(a,b));break;
        case 3 :
            {
                if(b)
                {
                    printf("%f",divis(a,b));break;
                }else
                {
                    printf("Erreur division sur 0 !!");
                    goto ici;
                }

            }
        default :
            {
                printf("operation n'est pas valide! \n");
                goto ici2;
            }

    }
    return 0;
}
