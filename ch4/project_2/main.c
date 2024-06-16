#include<stdio.h>
#include<stdlib.h>

#define SIZE 4
int main(void){
        char input[SIZE];
        int i, a, b, c;
        printf("Enter a three-digit number: ");
        fgets(input , SIZE, stdin);
        i = (int)strtof(input, NULL);
        a = i % 10;
        b = (i - a) / 10  % 10;
        c = ((i - a) - (b * 10)) / 100;
        printf("The reversal is: %d%d%d\n", a, b, c);
        return EXIT_SUCCESS;
}
