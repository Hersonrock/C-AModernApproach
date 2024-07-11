#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_SIZE 100    
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE] = {};
        int n_vowels = 0;

        printf("Enter a sentence: ");
        fgets(buffer, MAX_SIZE, stdin);

        for(size_t i = 0; i < MAX_SIZE ; i++){
                switch(toupper(buffer[i])){
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U':
                                n_vowels++;
                                break;
                        default:
                                break;
                }
        }

        printf("Your sentence contains %d vowels.\n", n_vowels);

        return EXIT_SUCCESS;
}
