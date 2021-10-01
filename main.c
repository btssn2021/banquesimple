#include <stdio.h>

int main() {
    float solde;
    int choix;
    float depot;
    debut: //étiquette de debut de programme
    printf("\n1-depot\n");
    printf("2-retrait\n");
    scanf("%d",&choix);
    if(choix==1)
    {
        printf("Combien voulez-vous deposez?\n");
        scanf("%f",&depot);
        solde+=depot; //obligatoire
        printf("Nouveau solde %0.2f",solde);
    }
    else
    {
        //retrait
    }
    goto  debut; //retourne à la ligne 5


    return 0;
}
