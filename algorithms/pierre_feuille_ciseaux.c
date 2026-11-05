#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int choice, machine_choice = 1, score = 0, machine_score = 0;
    char count;
    srand(time(NULL));
    
    do 
    {

        
        machine_choice = rand() % 3 + 1;

        printf("pierre 1, feuille 2 ou ciseaux 3 : ");
        scanf("%d", &choice);

        bool user_win = (machine_choice == 1 && choice == 2) || (machine_choice == 2 && choice == 3) || (machine_choice == 3 && choice == 1);
        bool machine_win = (machine_choice == 2 && choice == 1) || (machine_choice == 3 && choice == 2) || (machine_choice == 1 && choice == 3);

        if (machine_choice == choice) printf("match nul!\n");
        else if (user_win == 1)
        {
            score++;
            printf("Vous gagnez un point!\n");
        }else if (machine_win == 1)
        {
            machine_score++;
            printf("vous avez perdus la machine gagne un point!\n");
        }

        printf("tapez q pour quitter et entree ou n'importe quel touche pour continuer : \n");
        scanf(" %c", &count);

    } while (count != 'q');

    printf("score : %d\n", score);
    printf("machine score : %d\n", machine_score);
   return 0; 
}