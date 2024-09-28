#include <stdio.h>

int facto(int a) {
    int fact=a;
    while (a > 1) {
        fact =fact * (a-1) ;
        a = a - 1;
    }
}

int main() {
    int A, resultat;

    printf("entrer le nombre : ");
    scanf("%d", &A);

    resultat = facto(A);

    printf("Le factorielle de %d est : %d\n", A, resultat);

    return 0;
}