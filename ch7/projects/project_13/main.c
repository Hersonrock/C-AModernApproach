#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//C Programming: A Modern Approach, 2nd Edition
//Project 13
//Write a program that calculates the average word length for a sentence:
//For simplicity, your program should consider a punctuation mark to be part
//of the word to which it is attached. Display the average word lenght to one
//decimal place.
#define MAX_SIZE 256
int count_char(char *word){
        int tmp = 0;
        while(1){
                if(word[tmp] == '\0' || word[tmp] == '\n'){
                       break; 
                }
                tmp++;
        }
        return tmp;
}
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE];
        double result = 0;
        char *word;
        int count = 0;
        double acum = 0;

        printf("Enter a sentence: ");
        fgets(buffer, MAX_SIZE, stdin);

        word = strtok(buffer, " "); 
        while(word != NULL){
                acum += count_char(word);
                word = strtok(NULL, " "); 
                count++;
        }
        result = acum / (double)count;
        printf("Average word length: %.1f\n", result); 
        return EXIT_SUCCESS;

}
