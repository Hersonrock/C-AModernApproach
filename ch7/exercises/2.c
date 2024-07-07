#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        //010E2[Invalid] 
        //looks like an octal but E is not a valid octal digit representation
        printf("octal?: %f\n", 011E2); //Invalid octal but can be seen as double
        printf("octal?: %f\n", 11E2); //Valid Double with scientific notation
        printf("octal?: %o\n", 011); //valid octal printed as octal 11
        printf("octal?: %d\n", 011); //valid octal printed as decimal 9
                                     
        //32.1E+5[Valid]
        printf("double?: %lf\n", 32.1E+5); //valid double

        //0790[Invalid]
        //printf("octal?: %o\n", 0790); //invalid octal 9 is not a valid digit 
        printf("octal?: %f\n", 0790E0); //valid double???
        //printf("octal?: %d\n", 0790E); //ivalid double no exponent
        //It seems octal will be enforced unless there is an 'E' in which case 
        //there must be an exponent and the number will be read as a decimal.

        //100_000[Invalid]
        //printf("integer?: %d\n", 100_000); //Invalid '_' cannot be used in C
                                             //as a digit separator 
        
        //3.978e-2[Valid]
        printf("double?: %f\n", 3.978e-2);
        


        return EXIT_SUCCESS;
}
