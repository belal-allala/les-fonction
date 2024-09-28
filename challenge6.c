#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return -1; 
    } else if (n == 1 || n == 2) {
        return 1; 
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;

    printf("entrer l indice du terme de fibonacci a calculer : ");
    scanf("%d", &n);

    int resultat = fibonacci(n);

    if (resultat == -1) {
        printf("erreur : l indice doit etre positif.\n");
    } else {
        printf("le %d-ieme terme de la suite de Fibonacci est : %d\n", n, resultat);
    }
    return 0;
}