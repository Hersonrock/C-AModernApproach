#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<limits.h>


#define SIZE 10
void erangeCheck( long in ) {
        if ( in == LONG_MAX && errno == ERANGE){
                perror("Error");
                _Exit(-1);
        }
}
void einvalCheck( long in ) {
        if ( in <= 0 ){
                printf("Invalid Entry, n,m must be > 0\n");
                _Exit(-1);
        }
}
long inputGet(char *arg, char **endptr){
        long k = strtol(arg, endptr, 10);
        einvalCheck(k);
        erangeCheck(k);
        
        return k;
}
void reduce(long numerator, long denominator, 
            long *reduced_numerator,
            long *reduced_denominator);
int main(int argc, char *argv[]){
        
        char input[SIZE];
        char *endptr = NULL;
        int flag = 0;

        printf("Enter a fraction: ");
        fgets(input, SIZE, stdin);
        long n = inputGet(input, &endptr); 
        endptr++;
        long d = inputGet(endptr, &endptr); 
        
        if( n < d ){
                flag = 1;
                n = n^d;
                d = n^d;
                n = n^d;
        }
        reduce(n, d, &n, &d);

        if(flag){
                printf("In lowest terms: %ld/%ld\n", d, n);
        } else {
                printf("In lowest terms: %ld/%ld\n", n, d);
        }

        return EXIT_SUCCESS;
}
void reduce(long numerator, long denominator, 
            long *reduced_numerator,
            long *reduced_denominator){

        long r, gdc;

        while(1){
                r = numerator % denominator;
                if(r == 0) break;
                numerator = denominator;
                denominator = r;
        }
        gdc = denominator;
        *reduced_numerator /= gdc;
        *reduced_denominator /= gdc;
}
