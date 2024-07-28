/*
 * Write a game that simlulates the game of craps. Which is played with two dice
 * On the first roll, the player wins if the sum of the dice is 7 or 11.
 *
 * The player loses if the sum is 2,3 or 12
 *
 * Any other roll is called the "point" and the game continues.
 *
 * On each subsecuent roll, the player wins if he or she rolls the point again.
 * The player loses by rolling 7.
 *
 * Any other roll is ignored and the game continues.
 *
 * At the end of each game, the programs will ask the user whether or not to
 * play again.
 * If not the program will display the number of wins and losses then terminate.
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<ctype.h>

#define MAX_INPUT 10 
int roll_dice();
int play_game();
int main(int argc, char *argv[]){
        char input[MAX_INPUT];
        int play_flag = 1;
        int wins = 0;
        int losses = 0;

        srand(time(NULL));

        while(play_flag){
                play_game() ? wins++ : losses++;
                printf("\nPlay again?(y): ");
                fgets(input, MAX_INPUT, stdin);
                play_flag = toupper(input[0]) == 'Y';
                printf("\n");
        }
        printf("Wins: %d, losses: %d\n", wins, losses);

        return EXIT_SUCCESS;
}
int roll_dice(){
        int roll, d1, d2;

        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        roll = d1 + d2;

        return roll;
}
int play_game(){
        int point = 0;
        int roll = 0;

        roll = roll_dice();
        printf("You rolled : %d\n", roll);

        switch(roll){
                case 7:
                case 11:
                        printf("You win!\n");
                        return 1;
                case 2:
                case 3:
                case 12:
                        printf("You lose!\n");
                        return 0;
                default:
                        point = roll;
                        printf("Your point is %d\n", point);
                        break;
        }

        while(1){
                roll = roll_dice();
                printf("You rolled : %d\n", roll);
                if(roll == 7){
                        printf("You lose!\n");
                        return 0;
                }
                else if(roll == point){
                        printf("You win!\n");
                        return 1;
                }
        }

}
