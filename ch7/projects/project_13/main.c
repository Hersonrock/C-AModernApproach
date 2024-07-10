#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        char c = '\1';
        short s = 2;
        int i = -3;
        long m = 5;
        float f = 6.5f;
        double d = 7.5;

        //int
        printf("c * i: %d\n", c * i);
        //long int
        printf("s + m: %ld\n", s + m);
        //double
        printf("f / c: %f\n", f / c);
        //double
        printf("d / s: %f\n", d / s);
        //double
        printf("f - s: %f\n", f - s);
        //double
        printf("(int)f: %d\n", (int)f);
        //int

        return EXIT_SUCCESS;
}
