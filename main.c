#include <stdio.h>

int main() {
    int choix;
    debut: //étiquette de debut de programme
    printf("1-choix");
    scanf("%d",&choix);
    goto  debut; //retourne à la ligne 5
    return 0;
}
