#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
int main(int argc, char *argv[]){
        char buff[MAX] = {'\0'};
        char *new_line;
        printf("Enter a message: ");
        fgets(buff, MAX, stdin);
        new_line = strchr(buff, '\n');
        if(new_line != NULL) *new_line = '\0';

        printf("Reversal is: ");
        for(size_t i = MAX - 1; i > 0 ; i--){
                if(buff[i] == '\0') continue;
                printf("%c",buff[i]);
        }
                printf("%c",buff[0]);
                printf("\n");


        return EXIT_SUCCESS;
}
