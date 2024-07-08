#include<stdio.h>
#include<stdlib.h>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;
int main(int argc, char *argv[]){

        Int8 i = 4;
        Int16 j = 3;
        Int32 k = 5;
        
        printf("Size of Int8: %lu\n", sizeof(i)); // Size 1;
        printf("Size of Int16: %lu\n", sizeof(j)); // Size 2;
        printf("Size of Int32: %lu\n", sizeof(k)); // Size 4;
        return EXIT_SUCCESS;
}
