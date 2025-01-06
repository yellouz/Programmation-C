#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Pi 3.14
#define cube(r) pow(r,3)
#define volume(r) (4*Pi*cube(r))/3

int main()
{
    int r;
    printf("donner le rayon\n");
    scanf("%d",&r);

    printf("le volume est : %f", volume(r));

    return 0;
}
