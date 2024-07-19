#include<stdio.h>
#include<stdlib.h>

#define MAX_INPUT 100
int main(int argc, char *argv[]){
        char input_buffer[MAX_INPUT] = {};
        char tmp;
        int i = 0;
        char end;

        printf("Enter a sentence: ");
        fgets(input_buffer, MAX_INPUT, stdin);
        do{
                tmp = input_buffer[i++];
        } while(tmp != '.' && tmp != '?' && tmp != '!');
        i--; //bringing the index back as I moved past the terminating char.
        end = input_buffer[i];
        input_buffer[i] = '\0';
        
        while(1){
                while(1){
                        if(i - 1 != 0){
                                tmp = input_buffer[--i];
                                if(tmp == ' '){
                                        i++;
                                        break;
                                }
                        }else if(i - 1 == 0){
                                printf("%s%c\n", input_buffer, end);
                                return EXIT_SUCCESS;
                        }
                }
                printf("%s ", input_buffer + i);
                input_buffer[--i] = '\0';
        }


        return EXIT_SUCCESS;
}
