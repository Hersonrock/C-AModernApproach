#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define STACK_SIZE 100
#define MAX_INPUT 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
int stack_overflow();
int stack_underflow();

int main(int argc, char *argv[]){
        char input[MAX_INPUT];
        char *ptr;
        printf("Enter parentheses and/or braces: ");
        fgets(input, MAX_INPUT, stdin);
        ptr = strchr(input, '\n'); 
        if(ptr != NULL) *ptr = '\0';
                
        ptr = input;
        printf("String: %s\n", input);

        while( *ptr != '\0'){
                switch(*ptr){
                        case '(':
                        case '{':
                                push(*ptr);
                                break;
                        case ')':
                                if(pop() != '('){
                                        printf("Parentheses are " 
                                                "not nested properly\n");
                                        return EXIT_SUCCESS;
                                }
                                break;
                        case '}':
                                if(pop() != '{'){
                                        printf("braces are " 
                                                "not nested properly\n");
                                        return EXIT_SUCCESS;
                                }
                                break;
                        default:
                                fprintf(stderr, "Invalid character\n");
                                return EXIT_FAILURE; 
                }
                ptr++;
        }
        pop(); //poping '\0'
        if(!is_empty()){
                printf("Parentheses/braces are not nested properly\n");
                return EXIT_SUCCESS;
        }
        printf("Parentheses/braces are nested properly\n");

        return EXIT_SUCCESS;
}

void make_empty(void){
        top = 0;
}
bool is_empty(void){
        return top == -1;
}
bool is_full(void){
        return top == STACK_SIZE;
}
void push(char c){
        if(is_full()){
                stack_overflow();
        }
        else{
                contents[top++] = c;
        }
}
char pop(void){
        if(is_empty()){
                stack_underflow();
                return '\0';
        }
        else{
                return contents[--top];
        }
}
int stack_overflow(){
        printf("Stack Overflow\n");
        return EXIT_FAILURE;
}
int stack_underflow(){
        printf("Stack Underflow\n");
        return EXIT_FAILURE;
}
