#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

node *inserer_tete(node *tete, int value)
{
    node *new = malloc(sizeof(node));
    if (new == NULL) return NULL;

    new->value = value;

    new->next = tete;

    return new;
}

void afficher_liste(node *tete)
{
    node *actuel = tete;

    while (actuel != NULL) 
    {
        printf("[%d] -> ", actuel->value);
        actuel = actuel->next;
    }

    printf("NULL\n"); 
}

int main(void)
{

    node *node_list = NULL;

    node_list = inserer_tete(node_list, 5);
    node_list = inserer_tete(node_list, 45);
    node_list = inserer_tete(node_list, 7);

    afficher_liste(node_list);


    return 0;
}