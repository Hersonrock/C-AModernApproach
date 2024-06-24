#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<limits.h>


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
long inputGet(char *arg){
        long k = strtol(arg, NULL, 0);
        einvalCheck(k);
        erangeCheck(k);
        
        return k;
}
int main(int argc, char *argv[]){
        
        if(argc != 3){
                printf("USAGE: ./gcd [m] [n] \n");
                return EXIT_SUCCESS;
        }
        long m = inputGet(argv[1]); 
        long n = inputGet(argv[2]); 
        long r = 0;
        printf("values of (m,n): (%ld,%ld)\n", m, n);
        
        if( m < n ){
                m = m^n;
                n = m^n;
                m = m^n;
        }
        do {
                r = m%n;
                m = n;
                n = r;
        }while( r != 0 );

        printf("gcd = %ld\n", m); 

        return EXIT_SUCCESS;
}
