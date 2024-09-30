#include <stdio.h>

int estPair(int nombre) {
    return nombre % 2 == 0;}

int main() {
    int nombre;
    printf("entrer un nombre entier : ");
    scanf("%d", &nombre);

    if (estPair(nombre)) {
        printf("%d est un nombre pair.\n", nombre);} else {
        printf("%d est un nombre impair.\n", nombre);}
    return 0;}