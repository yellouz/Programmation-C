#include <stdio.h>
#include <stdlib.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main()
{
    BOOL a = TRUE;
    switch(a)
    {
        case 0 : printf("FAUX!");break;
        case 1 : printf("VRAI!");break;
        default : printf("ERREUR!");
    }
    return 0;
}
