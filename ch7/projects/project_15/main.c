#include<stdio.h>
#include<stdlib.h>

//C Programming: A Modern Approach, 2nd Edition
//Write a program that computes the factorial of a positive integer
long long get_factorial(long long n){
        long long result = 1;
        for(int i = 1; i <= n; i++){
                result *= (long long)i;
        }
        return result;
}

#define MAX_SIZE 10
int main(int argc, char *argv[]){
        char input[MAX_SIZE];
        long long result;
        long long n;
       
        printf("Enter a positive integer: ");
        fgets(input, MAX_SIZE, stdin);
        n = (long long)strtol(input, NULL, 10);
        
        result = get_factorial(n);
         
        printf("Factorial of %lld: %lld\n", n, result);
        return EXIT_SUCCESS;
}
