#include<stdio.h>
#include<stdlib.h>

#define typeof(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    default: "unknown")

int main(int argc, char *argv[]){
        int i = 6;
        int j = 2;
        char a = 'a';
        
        printf("Type i/j + 'a': %s\n", typeof(i/j + a));


        return EXIT_SUCCESS;
}
