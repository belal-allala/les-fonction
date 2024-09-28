#include <stdio.h>

int max(int a, int b) {
    if (a<b){
        return b;
    } else {
        return a;
    }
}

int main() {
    int A, B, resultat;

    printf("entrer le premier nombre : ");
    scanf("%d", &A);

    printf("entrer le deuxieme nombre : ");
    scanf("%d", &B);

    resultat = max(A, B);

    printf("Le max de %d et %d est : %d\n", A, B, resultat);

    return 0;
}