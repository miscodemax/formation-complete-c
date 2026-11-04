// EXO 1: AJOUTER 10 ANS A L'AGE

#include <stdio.h>

int main(void) {

    // DECLARATION DE LA VARIABLE AGE
    int age;

    // DEMANDER AU USER DE DONNER SON AGE
    printf("donne ton age : ");
    scanf("%d", &age);

    // FAIRE LE CALCUL ET AFFICHER

    printf("Vous aurez %d ans dans 10 ans", age + 10);

    // gcc -Wall variables_exo_1.c -o variables_exo_1 pour compiler

    return 0;
}