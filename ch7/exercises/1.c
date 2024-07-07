#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        
        int n1 = 077;
        int n2 = 0x77;
        int n3 = 0XABC;

        printf("n1: %d\n", n1);
        printf("n2: %d\n", n2);
        printf("n3: %d\n", n3);

        return EXIT_SUCCESS;
}
        
