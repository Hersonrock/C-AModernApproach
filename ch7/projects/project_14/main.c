#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//C Programming: A Modern Approach, 2nd Edition
//Write a program that uses Newton's method to compute the square root of a
//positive floating-point number
//Let x be the number entered by the users. Newton's method require an initial 
//guess y for the square root of x(we'll use y=1). Success guesses are found
//by computing the average of y and x/y.
#define MAX_SIZE 10
int main(int argc, char *argv[]){
        char input[MAX_SIZE] = {};
        double x;
        double x0 = 1;
        double result = 0;
        double diff = 1;

        printf("Enter a positive number: ");
        fgets(input, MAX_SIZE, stdin);
        x = strtod(input, NULL);

        while(diff > 0.00001f){
                //Newton's/Raphson Method
                result = x0 - (x0 * x0 - x) / (2 * x0);
                diff = fabs(x0 - result);
                x0 = result;
        }
        printf("Square root: %f\n", result);

        return EXIT_SUCCESS;
}
