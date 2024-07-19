#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 80
int main(int argc, char *argv[]){
        char input[MAX_SIZE];
        char input_shift[MAX_SIZE];
        int i = 0;
        printf("Enter message to be encrypted: ");
        fgets(input, MAX_SIZE, stdin);
        printf("Enter shift amount(1 - 25): ");
        fgets(input_shift, MAX_SIZE, stdin);
        int shift = atoi(input_shift);
        do{
                if(input[i] <= 'Z' && input[i] >= 'A'){ // A-Z 
                        input[i] = 'A' + ((input[i] - 'A' ) + shift) % 26;
                }
                else if(input[i] < 123 && input[i] > 96){ // A-Z 
                        input[i] = 'a' + ((input[i] - 'a' ) + shift) % 26;
                }
                i++;
        }while(input[i] != '\n' && input[i] != '\0');

        printf("Encrypted message: %s\n", input);

        return EXIT_SUCCESS;
}
