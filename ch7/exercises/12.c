#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        int i = 6;
        float f = 2;
        double d = 5;        

        d = i + f;
        printf("Result of d: %s\n", i + f);
        // operation is a double

        return EXIT_SUCCESS;
}
