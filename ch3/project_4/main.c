#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
int main(int argc, char *argv[argc + 1]){
        char input[SIZE];
        int areaC, id1, id2;
        char *endptr;

        printf("Enter phone number [(xxx) xxx-xxxx]: ");
        fgets(input, SIZE, stdin);
        
        areaC = strtof((input + 1), &endptr); // skips over '('
        endptr++; // skips over ')'
        
        id1 = strtof(endptr, &endptr);
        endptr++; // skips over '-'

        id2 = strtof(endptr, &endptr);

        printf("You entered %d.%d.%d\n", areaC, id1, id2);
        return EXIT_SUCCESS;
}
