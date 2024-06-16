#include<stdio.h>
#include<stdlib.h>

#define SIZE 3
int main(void){
        char input[SIZE];
        int i, a, b;
        printf("Enter a two-digit number: ");
        fgets(input , SIZE, stdin);
        i = (int)strtof(input, NULL);
        a = i % 10;
        b = (i - a) / 10;

        printf("The reversal is: %d%d\n", a, b);
        return EXIT_SUCCESS;
}
