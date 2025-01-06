#include<stdio.h>
#include<math.h>

typedef struct point
{
    int C1;
    int C2;
}s_p ;


float distance(s_p*P1,s_p*P2)
{
    int d1 = pow(P2->C1 - P1->C1, 2);
    int d2 = pow(P2->C2 - P1->C2, 2);

    return sqrt(d1 + d2);
}


int main()
{
    s_p P1;
    s_p P2;
    s_p P3;

    printf("Donner les coordonnes du P1 :\n");
    scanf("%d%d",&P1.C1,&P1.C2);
    printf("Donner les coordonnes du P2 :\n");
    scanf("%d%d",&P2.C1,&P2.C2);
    printf("Donner les coordonnes du P3 :\n");
    scanf("%d%d",&P3.C1,&P3.C2);

    printf("%f",distance(&P1,&P2) + distance(&P2,&P3) + distance(&P1,&P3));


    return 0;
}
