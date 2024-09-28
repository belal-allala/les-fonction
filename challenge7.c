#include <stdio.h>
#include <string.h>

char* inverser(char *chaine) {
    int longueur = strlen(chaine);
    int i;
    char b;

    for (i = 0; i < longueur / 2; i++) {
        b = chaine[i];
        chaine[i] = chaine[longueur - i - 1];
        chaine[longueur - i - 1] = b;
    }

    return chaine;
}

int main() {
    char chaine[100];
    printf("entrer une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);

    //chaine[strcspn(chaine, "\n")] = '\0';

    printf("La chaîne inversée est : %s\n", inverser(chaine));

    return 0;
}