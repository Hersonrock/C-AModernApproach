#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int main(int argc, char *argv[argc + 1]){
        int value;
        char input[SIZE];

        printf("Enter a dollar amount: ");

        fgets(input, SIZE, stdin);
        value = strtof(input, NULL);

        printf("$20 bills: %d\n", value / 20);
        value -= (value / 20) * 20;
        printf("$10 bills: %d\n", value / 10);
        value -= (value / 10) * 10;
        printf("$5 bills: %d\n", value / 5);
        value -= (value / 5) * 5;
        printf("$1 bills: %d\n", value / 1);
        value -= (value / 1) * 1;

        return EXIT_SUCCESS;

}
