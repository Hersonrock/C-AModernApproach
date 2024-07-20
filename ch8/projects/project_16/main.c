#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 50
#define N_LETTERS 26
int main(int argc, char *argv[]){
        char buffer1[MAX_SIZE];
        char buffer2[MAX_SIZE];
        int letter_count[N_LETTERS] = {};
        int i = 0;
        
        printf("Enter first word: ");
        fgets(buffer1, MAX_SIZE, stdin);
        printf("Enter second word: ");
        fgets(buffer2, MAX_SIZE, stdin);

        do{
                letter_count[buffer1[i++] - 'a'] += 1;
        
        }while(buffer1[i] != '\n' && buffer1[i] != '\0');
        
        i = 0;
        do{
                letter_count[buffer2[i++] - 'a'] -= 1;
        
        }while(buffer2[i] != '\n' && buffer2[i] != '\0');
        
        for(size_t i = 0; i < N_LETTERS; i++){
                if(letter_count[i] != 0){
                        printf("The words are not anagrams\n");
                        return EXIT_SUCCESS;
                }
        }
        printf("The words are anagrams\n");
        
        return EXIT_SUCCESS;
}
