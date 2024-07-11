#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//C Programming: A Modern Approach
//Write a program that takes a first name and last name entered by the user
//and displays the last name, a comma, and the first initial, followed by a 
//period.
//
//The user's input may contain extra spaces before the first name, between the 
//first and last names, and after the last name.
#define MAX_SIZE 50
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE] = {};
        
        printf("Enter a first and last name: ");
        fgets(buffer, MAX_SIZE, stdin);
        char *first_name = strtok(buffer, " ");
        char *lastname = strtok(first_name, " ");

        printf("%s, %c.\n", lastname, toupper(first_name[0]));

        return EXIT_SUCCESS;
}
