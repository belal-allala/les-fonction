#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int A, B, resultat;

    printf("Entrer le premier nombre : ");
    scanf("%d", &A);

    printf("entrer le deuxieme nombre : ");
    scanf("%d", &B);

    resultat = produit(A, B);

    printf("Le produit de %d et %d est : %d\n", A, B, resultat);

    return 0;
}