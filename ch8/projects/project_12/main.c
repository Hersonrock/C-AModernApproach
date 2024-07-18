#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_SIZE 30
#define N_LETTERS 26
void init_letter_values(int array[N_LETTERS + 1]);
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE];
        int letter_val[N_LETTERS + 1];
        int points = 0;
        memset(buffer, '\0', MAX_SIZE);

        printf("Enter a word: ");
        fgets(buffer, MAX_SIZE, stdin);
        init_letter_values(letter_val);

        for(size_t i = 0; i < MAX_SIZE; i++){
                if(buffer[i] == '\0' || buffer[i] == '\n'){
                        break;
                }
                char tmp = buffer[i];
                buffer[i] = toupper(tmp);
                points += letter_val[buffer[i] - 65]; 
                        //65 is 'A' DEC value in ASCII
        }

        printf("Scrabble value: %d\n", points);        

        return EXIT_SUCCESS;
}
void init_letter_values(int array[N_LETTERS + 1]){
        for(size_t i = 0; i < N_LETTERS; i++){
                switch(i){
                        case 0: //A
                        case 4: //E
                        case 8: //I
                        case 11: //L
                        case 13: //N
                        case 14: //O
                        case 17: //R
                        case 18: //S
                        case 19: //T
                        case 20: //U
                                array[i] = 1;
                                break;
                        case 3: //D
                        case 6: //G
                                array[i] = 2;
                                break;
                        case 1: //B
                        case 2: //C
                        case 12: //M
                        case 15: //P
                                array[i] = 3;
                                break;
                        case 5: //F
                        case 7: //H
                        case 21: //V
                        case 22: //W
                        case 24: //Y
                                array[i] = 4;
                                break;
                        case 10: //K
                                array[i] = 5;
                                break;
                        case 9: //J
                        case 23: //X
                                array[i] = 8;
                                break;
                        case 16: //Q
                        case 25: //Z
                                array[i] = 10;
                                break;
                        default:
                                break;
        for(size_t i = 0 ; i < N_LETTERS; i++){
                printf("Letter value %d\n", letter_val[i]);
        }
                }
                
        }
}
