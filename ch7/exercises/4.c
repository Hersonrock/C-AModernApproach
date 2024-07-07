#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
        char c = 'a';
        int i = 7;

        i += c;

        printf("%d\n", i);

        /*
        c = 2 * c - 1; // UB, Invalid because of overflow
        printf("%c\n", c);
        printf("%d\n", c);
        printf("%lu\n", sizeof(c));
        */


        putchar(c);
        printf("\n");
        
        //printf(c); // UB,  printf is expecting a pointer to a format string

        return EXIT_SUCCESS;
}
