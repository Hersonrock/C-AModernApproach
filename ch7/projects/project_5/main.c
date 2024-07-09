#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_SIZE 30
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE];
        int points = 0;
        memset(buffer, '\0', MAX_SIZE);

        printf("Enter a word: ");
        fgets(buffer, MAX_SIZE, stdin);

        for(size_t i = 0; i < MAX_SIZE; i++){
                if(buffer[i] == '\0' || buffer[i] == '\n'){
                        break;
                }
                char tmp = buffer[i];
                buffer[i] = toupper(tmp);
                switch(buffer[i]){
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'L':
                        case 'N':
                        case 'O':
                        case 'R':
                        case 'S':
                        case 'T':
                        case 'U':
                                points += 1;
                                break;
                        case 'D':
                        case 'G':
                                points += 2;
                                break;
                        case 'B':
                        case 'C':
                        case 'M':
                        case 'P':
                                points += 3;
                                break;
                        case 'F':
                        case 'H':
                        case 'V':
                        case 'W':
                        case 'Y':
                                points += 4;
                                break;
                        case 'K':
                                points += 5;
                                break;
                        case 'J':
                        case 'X':
                                points += 8;
                                break;
                        case 'Q':
                        case 'Z':
                                points += 10;
                                break;
                        default:
                                break;
                }
        }

        printf("Scrabble value: %d\n", points);        

        return EXIT_SUCCESS;
}
