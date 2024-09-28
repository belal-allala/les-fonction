#include <stdio.h>

int min(int a, int b) {
    if (a<b){
        return a;
    } else {
        return b;
    }
}

int main() {
    int A, B, resultat;

    printf("entrer le premier nombre : ");
    scanf("%d", &A);

    printf("entrer le deuxieme nombre : ");
    scanf("%d", &B);

    resultat = min(A, B);

    printf("Le min de %d et %d est : %d\n", A, B, resultat);

    return 0;
}