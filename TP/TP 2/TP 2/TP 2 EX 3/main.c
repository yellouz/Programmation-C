#include <stdio.h>

enum genre {masculin, femminun};


typedef struct employe
{
    char nom_etab[20];
    int num_somme;
}s_emp;


typedef struct etudiant
{
    int code_apogee;
}s_etu;


union status
{
    s_etu etudiant;
    s_emp employe;
}mon_status;


typedef struct Personne
{
    char nom[20];
    char prenom[20];
    enum genre mon_genre;
    union status mon_status;
    int temoin;
}s_p ;


void afficheinfo(s_p*p)
{
    switch(p->mon_genre)
    {
        case masculin : printf("Bonjour! Mr.%s %s, ",p->prenom,p->nom);break;
        case femminun : printf("Bonjour! Mme.%s %s, ",p->prenom,p->nom);break;
    };

    switch(p->temoin)
    {
        case 0 : printf("votre code apogee est %d",p->mon_status.etudiant.code_apogee);break;
        case 1 : printf("votre numero de somme est %d, et le nom de votre etablissement est %s",p->mon_status.employe.num_somme,p->mon_status.employe.nom_etab);break;
    };
}

int main()
{
    s_p P1;

    printf("Donner votre nom, puis le prenom\n");
    gets(P1.nom);
    gets(P1.prenom);

    printf("Quelle est votre genre? (Masculin = 0 / Femminun = 1)\n");
    scanf("%d",&P1.mon_genre);

    ici :
    printf("Quelle est votre status? Etudiant = 0 / Employe = 1\n");
    scanf("%d",&P1.temoin);

    switch(P1.temoin)
    {
    case 0 :
        {
            printf("donner votre code apogee\n");
            scanf("%d",&P1.mon_status.etudiant.code_apogee);
        };break;

    case 1 :
        {
            printf("donner votre numero de somme, puis votre nom d'etablissement\n");
            scanf("%d",&P1.mon_status.employe.num_somme);
            gets(P1.mon_status.employe.nom_etab);
        };break;

    default : goto ici ;break;
    };

    afficheinfo(&P1);

    return 0;
}
