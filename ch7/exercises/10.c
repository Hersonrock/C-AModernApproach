#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        int i = 6;
        long j = 2;
        unsigned int k = 5;        

        printf("Type i + (int)j * k: %d\n", i + (int)j * k);
        // operation is an unsigned int

        return EXIT_SUCCESS;
}
