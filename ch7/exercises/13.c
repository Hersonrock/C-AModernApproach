#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

        char c = '\1';
        short s = 2;
        int i = -3;
        long  m  = 5;
        float f = 6.5f;
        double d = 7.5;

        printf("c * i: %d\n", c * i); //-3 int
        printf("s + m: %ld\n", s + m); //7 long
        printf("f / c: %f\n", f / c); //6.5 double
        printf("d / s: %f\n", d / s); //3.75 double
        printf("f - d: %f\n", f - d); //-1 double
        printf("(int)f: %d\n", (int)f); //6 int


        return EXIT_SUCCESS;
}
