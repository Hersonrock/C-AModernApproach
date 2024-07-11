#include<stdio.h>
#include<stdlib.h>
//C Programming: A Modern Approach, 2nd Edition
//Project 12
//Write a program that evaluates an expression
//The operands in the expression are floating-point numbers; the operators are 
//+, -, *, and /.
//The expression is evaluated from left to right( no operator take precedence 
//over any other operator.

#define MAX_SIZE 100
#define SIZE 5
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE] = {};
        double number = 0;
        double result = 0;
        char *next_char = buffer;

        printf("Enter an expression: ");
        fgets(buffer, MAX_SIZE, stdin);

        for(size_t i = 0; i < SIZE; i++){
                if(i == 0){
                        result = strtod(next_char, &next_char);
                        continue;
                }
                char c = next_char[0];
                next_char++;
                number = strtod(next_char, &next_char);
                switch(c){
                        case '+':
                                result += number;
                                break;
                        case '-':
                                result -= number;
                                break;
                        case '*':
                                result *= number;
                                break;
                        case '/':
                                result /= number;
                                break;
                        case '\n':
                        case '\0':
                                break;
                        default:
                                fprintf(stderr, "Invalid characters %c\n", c);
                                return EXIT_FAILURE;
                }
                if(*next_char == '\n' || *next_char == '\0'){
                        break;
                }
        }

        printf("Value of expression: %f\n", result);

        return EXIT_SUCCESS;
}
