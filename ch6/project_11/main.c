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
        int n = 0;
        double result = 1;
        
        printf("Provide a precision value for e calculation: ");
        fgets(buffer, SIZE, stdin);
        n = atoi(buffer);

        for(int i = 1; i <= n; i++){
                result += 1 / factorial(i);
        }

        printf("the value of e aproximated by %d is : %f\n", n, result);

        return EXIT_SUCCESS;
}
