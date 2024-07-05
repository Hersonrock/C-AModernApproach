#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

double factorial(int n){
        double result = 1;

        if(n == 0){
                return 1.0f;
        }

        for(int i = 1; i <= n; i++){
                result *= i;
        }
        return result;
}

int main(int argc, char *argv[]){

        char buffer[SIZE];
        double n = 0;
        double result = 1;
        int i = 1;
        double term; 
        
        printf("Provide a precision value for e calculation: ");
        fgets(buffer, SIZE, stdin);
        n = strtod(buffer, NULL);

        do{
                term = 1 / factorial(i);
                printf("term: %f\n", term);
                result += term;
                i++;
        }while(term > n);

        printf("the value of e aproximated by %f is : %f\n", n, result);

        return EXIT_SUCCESS;
}
