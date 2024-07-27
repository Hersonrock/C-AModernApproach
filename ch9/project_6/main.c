#include<stdio.h>
#include<stdlib.h>

#define MAX_INPUT 10
double power(double n, int exp){
        double result = n;

        if(exp == 0){
                return 1;
        }else if(exp == 1){
                return n;
        }

        for(int i = 1; i < exp; i++){
                result *= n;
        }
        return result;
}
int main(int argc, char *argv[]){
        char input[MAX_INPUT];
        double n;
        double result = 0;

        printf("Enter a value for x: ");
        fgets(input, MAX_INPUT, stdin);
        n = strtod(input, NULL); 

        printf("Value of x entered %0.2f\n", n);
        printf("Calculating function 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6...\n");
        result += 3 * power(n,5);
        result += 2 * power(n,4);
        result -= 5 * power(n,3);
        result -= 1 * power(n,2);
        result += 7 * power(n,1);
        result -= 6;

        printf("Result: %0.2f\n", result);


        return EXIT_SUCCESS;
}
