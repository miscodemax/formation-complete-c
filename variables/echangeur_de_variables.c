// EXO 2: ECHANGER LES VALEURS DE DEUX VARIABLES DISTINCTS

#include <stdio.h>

int main(void) {

    // INITIALISATION : C'EST DECLARER ET AFFECTER UNE VALEUR EN MEME TEMPS
    int x = 2;
    int y = 3;
    int temp;
    
    temp = x;

    x = y;

    y = temp;

    printf("x deviens : %d\n", x);
    printf("y deviens : %d\n", y);

    // COMPILER AVEC gcc -Wall echangeur_de_variables.c -o echangeur_de_variables

    return 0;
}