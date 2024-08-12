#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
void pay_amount(int dollars, int  *twenties, int *tens, int *fives, int *ones);
int main(int argc, char *argv[argc + 1]){
        int value;
        char input[SIZE];
        int twenties = 0;
        int tens = 0;
        int fives = 0;
        int ones = 0;

        printf("Enter a dollar amount: ");

        fgets(input, SIZE, stdin);
        value = strtof(input, NULL);

        pay_amount(value, &twenties, &tens, &fives, &ones);
        printf("Amount to pay...\n");
        printf("|twenties|tens|fives|ones\n");
        printf("|%8d|%4d|%5d|%4d|\n", twenties, tens, fives, ones);


        return EXIT_SUCCESS;

}
void pay_amount(int dollars, int  *twenties, int *tens, int *fives, int *ones){

        *twenties = dollars / 20;
        dollars -= (dollars / 20) * 20;
        *tens = dollars / 10;
        dollars -= (dollars / 10) * 10;
        *fives = dollars / 5;
        dollars -= (dollars / 5) * 5;
        *ones = dollars / 1;
}
