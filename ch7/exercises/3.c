#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        short unsigned int a = 3;
        //short float b; [Invalid]
        long double c = 84.2L;
        unsigned long d = 3254;
        

        printf("a: %d\n", a);
        printf("c: %Lf\n", c);
        printf("d: %ld\n", d);
        return EXIT_SUCCESS;
}
