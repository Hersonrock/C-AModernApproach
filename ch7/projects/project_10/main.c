#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        int i = 3;
        long int j = 5;
        unsigned int k = 6;

        printf("i + (int)k * k: %d\n", i + (int)j * k);
        // Expression is unsigned int 
        return EXIT_SUCCESS;
}
