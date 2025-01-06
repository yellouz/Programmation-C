#include <stdio.h>

enum genre {masculin, femminun};

enum niveau {licence, master, doctorat};

typedef struct etudiant
{
    char nom[20];
    //char prenom[20];
    int age;
    enum genre mon_genre;
    enum niveau mon_niveau;

}s_e;

void printEtudiant(s_e*p)
{
    printf("Creation avec success : ");

    switch(p->mon_genre)
    {
        case(masculin) : printf("Mr.");break;
        case(femminun) : printf("Mme.");break;
    };

    printf("%s votre age : %d, et votre niveau : ",p->nom,p->age);

    switch(p->mon_niveau)
    {
        case(licence) : printf("licence");break;
        case(master) : printf("Master");break;
        case(doctorat) : printf("Doctorat");break;
    };
}

int main()
{
    s_e etu;

    puts("Donner votre nom et votre age :");
    gets(etu.nom);
    scanf("%d",&etu.age);

    puts("Quel est votre genre? (Masculin = 0 / Femminun = 1)");
    scanf("%d",&etu.mon_genre);

    puts("Quel est votre niveau? (Licence = 0 / Master = 1 / Doctorat = 2)");
    scanf("%d",&etu.mon_niveau);

    printEtudiant(&etu);

    return 0;
}
