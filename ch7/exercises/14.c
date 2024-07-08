#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        float f = 3.42;
        float frac_part = 0.32;

        // This wont compute the fractional part as the casting to int 
        // discards the fractional part of "frac_part" making this
        // f - 0 
        printf("result: %f\n", f - (int)frac_part);

        return EXIT_SUCCESS;
}
