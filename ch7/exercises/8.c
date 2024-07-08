#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        printf("This:\b:is a backspace\n");
        printf("This:\x8:is a backspace\n");
        
        printf("This:\n:is a new line\n");
        printf("This:\xA:is a new line\n");

        printf("This:\r:is a carriage return\n");
        printf("This:\xD:is a carriage return\n");

        printf("This:\t:is a tab\n");
        printf("This:\x9:is a tab\n");

        return EXIT_SUCCESS;
}
