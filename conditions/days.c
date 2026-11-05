// DONNER LE JOUR SELON LE NUMERO DONNE PAR LE USER DE 1 A 7

#include <stdio.h>

int main(void) {

    int n;

    printf("donne un chiffre entre 1 et 7 : ");
    scanf("%d", &n);


    switch (n) {
        case 1: printf("lundi"); break;
        case 2: printf("mardi"); break;
        case 3: printf("mercredi"); break;
        case 4: printf("jeudi"); break;
        case 5: printf("vendredi"); break;
        case 6: printf("samedi"); break;
        case 7: printf("dimanche"); break;
        default: print("nekkal nitt!");
    }

    return 0;
}