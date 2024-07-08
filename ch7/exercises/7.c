#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        printf("This:\b:is a backspace\n");
        printf("This:\010:is a backspace\n");
        
        printf("This:\n:is a new line\n");
        printf("This:\012:is a new line\n");

        printf("This:\r:is a carriage return\n");
        printf("This:\015:is a carriage return\n");

        printf("This:\t:is a tab\n");
        printf("This:\011:is a tab\n");

        return EXIT_SUCCESS;
}
