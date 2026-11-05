// Module avec des fonctions contenant ttous les algorithms du livre
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "module_of_algorithm.h"


void mystery_number(void) {

    int essai, count = 0;
    srand(time(NULL));
    int number = rand() % 100 + 1; // nombre entre 1 et 100

    do {
        printf("donne un nombre entre 1 et 100\n");
        scanf("%d", &essai);

        if (number < essai) printf("Plus petit!\n");
        else if (number > essai) printf("Plus grand!\n");

        count++;
    }while(essai != number);

    printf("Vouys avez trouve %d en %d tentatives\n", number, count);

}

int convertisseur_de_devises() 
{

    const int devise = 650;
    double a;

    printf("donne la somme en fcfa à convertir : ");
    scanf("%lf", &a);

    return (double) devise * a;

}



