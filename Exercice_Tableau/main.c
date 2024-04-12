#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Tab[100], Moy=0, Som=0;
    int n, i, compt=0;

    /* L'utilisation de DO While est utilisée pour ne pas executer le programme
    avec erreur*/
    do
    {
        printf("Donne le nombre de note ou eleve :   ");
        scanf("%d", &n);
    }while(n<=0 || n>100);
    printf("\n Saisir a present toutes les notes \n   ");

    // Généralement le boucle For est utilisée lorsqu'on connais le debut et la fin d'une repetion
    for (i=0; i<n; i++)
    {
        printf("\nDonne la %de Note  \n", i+1);
        scanf("%f", &Tab[i]);
    }
    printf("\n Le resultat a present de la somme");

    // Boucle pour calculer la Somme

    for (i=0; i<n; i++)
    {
        Som=Som+Tab[i];
    }
    printf("\nLa somme est : %.1f", Som);

    // Le calcule de la moyenne ne nécessite pas la boucle

    printf("\n Le resultat de la moyenne sera \n");
    Moy=Som/n;
    printf("\n La valeur de la Moyenne est  : %.1f", Moy);

    printf("\n \n Verifions les notes supperieur a la Moyenne\n");

    // Compte est déclaré pour compter les nombres de valeurs supperieur

    for(i=0; i<n; i++)
    {
        if(Tab[i]>Moy)
        {
            compt=compt+1;
        }
    }
    printf("\n \n Les notes supperieur a la moyenne sont : %d", compt);

    return 0;
}
