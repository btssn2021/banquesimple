#include <stdio.h>

int main() {
    float solde;
    int choix;
    float depot;
    float retrait;
    debut: //étiquette de debut de programme
    printf("\n1-depot\n");
    printf("2-retrait\n");
    scanf("%d",&choix);
    if(choix==1)
    {
        printf("Combien voulez-vous deposez?\n");
        scanf("%f",&depot);
        solde+=depot; //obligatoire
        printf("Nouveau solde %0.2f\n",solde);
    }
    else //equivalent choix==2
   {
       retrait:
        printf("Combinen voulez-vous retirer?\n");
        scanf("%f",&retrait);
        if(solde>=retrait)
        {
            solde-=retrait;
            printf("Nouveau solde %0.2f\n",solde);
        }
        else
        {
            printf("Solde insuffisant\n");
            goto retrait;
        }
    }
    goto  debut; //retourne à la ligne 5


    return 0;
}
