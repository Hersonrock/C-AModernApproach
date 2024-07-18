#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 30
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE];
        memset(buffer, '\0', MAX_SIZE);

        printf("Enter phone number: ");
        fgets(buffer, MAX_SIZE, stdin);

        for(size_t i = 0; i < MAX_SIZE; i++){
                if(buffer[i] == '\0' || buffer[i] == '\n'){
                        break;
                }
                switch(buffer[i]){
                        case 'A':
                        case 'B':
                        case 'C':
                                buffer[i] = '2';
                                break;
                        case 'D':
                        case 'E':
                        case 'F':
                                buffer[i] = '3';
                                break;
                        case 'G':
                        case 'H':
                        case 'I':
                                buffer[i] = '4';
                                break;
                        case 'J':
                        case 'K':
                        case 'L':
                                buffer[i] = '5';
                                break;
                        case 'M':
                        case 'N':
                        case 'O':
                                buffer[i] = '6';
                                break;
                        case 'P':
                        case 'R':
                        case 'S':
                                buffer[i] = '7';
                                break;
                        case 'T':
                        case 'U':
                        case 'V':
                                buffer[i] = '8';
                                break;
                        case 'W':
                        case 'X':
                        case 'Y':
                                buffer[i] = '9';
                                break;
                        default:
                                break;
                }
        }

        
        for(size_t i = 0; i < MAX_SIZE; i++){
                if(buffer[i] == '\0' || buffer[i] == '\n'){
                        break;
                }
                printf("%c",buffer[i]);
        }
        printf("\n");

        return EXIT_SUCCESS;
}
