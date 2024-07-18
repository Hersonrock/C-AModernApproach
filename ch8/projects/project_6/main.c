#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_SIZE 50
int main(int argc, char *argv[]){
        char input_buffer[MAX_SIZE] = {};
        int i = 0;
        int flag = 1;

        printf("Input a message to translate: ");
        fgets(input_buffer, MAX_SIZE, stdin);
        printf("Input: %s\n", input_buffer);
        
        while(flag){
                switch(toupper(input_buffer[i])){
                        case 'A':
                                input_buffer[i] = '4';
                                break;
                        case 'B':
                                input_buffer[i] = '8';
                                break;
                        case 'E':
                                input_buffer[i] = '3';
                                break;
                        case 'I':
                                input_buffer[i] = '1';
                                break;
                        case 'O':
                                input_buffer[i] = '0';
                                break;
                        case 'S':
                                input_buffer[i] = '5';
                                break;
                        case '\n':
                        case '\0':
                                input_buffer[i] = '\0';
                                flag = 0;
                                break;
                        default:
                                input_buffer[i] = toupper(input_buffer[i]);
                                break;
                }
                i++;
        }

        printf("In B1FF-speak: %s !!!!!!!!!!!!!!\n", input_buffer);
        
        return EXIT_SUCCESS;
}
