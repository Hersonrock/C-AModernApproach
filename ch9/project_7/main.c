#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_INPUT 10
double power(double n, int exp){
        double result = n;

        if(exp == 0){
                return 1;
        }else if(exp == 1){
                return n;
        }else if(exp % 2 == 0){
                double tmp = power(n, exp / 2);
                result = tmp * tmp;
        }else if(exp % 2 != 0){
                double tmp2 = power(n , (exp - 1));
                result = tmp2 * n;
        }
        return result;
}
int main(int argc, char *argv[]){
        char input[MAX_INPUT];
        double n;
        int exp;
        double result = 0;

        printf("Enter a value for x: ");
        fgets(input, MAX_INPUT, stdin);
        n = strtod(input, NULL); 
        memset(input, '\0', MAX_INPUT);

        printf("Enter exponent: ");
        fgets(input, MAX_INPUT, stdin);
        exp = strtod(input, NULL); 
        
        result = power(n, exp);
        
        printf("Result: %0.2f\n", result);

        return EXIT_SUCCESS;
}
