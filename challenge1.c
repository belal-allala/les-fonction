#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int A, B, resultat;

    printf("Entrer le premier nombre : ");
    scanf("%d", &A);

    printf("entrer le deuxieme nombre : ");
    scanf("%d", &B);

    resultat = somme(A, B);

    printf("La somme de %d et %d est : %d\n", A, B, resultat);

    return 0;
}