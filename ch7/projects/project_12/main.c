#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        int i = 3;
        float f = 4.5f;
        double d = 3.5f;
        
        d = i + f;

        printf("d = i + f: %f\n", i + f);
        printf("d : %f\n", d);
        // i + f is a double 
        //d is a double
        return EXIT_SUCCESS;
}
