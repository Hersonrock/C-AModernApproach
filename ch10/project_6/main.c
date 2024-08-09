#include"./stack_op.h"
#include<string.h>
#include<ctype.h>

#define STACK_SIZE 20

int main(int argc, char *argv[]){
        int stack[STACK_SIZE] = {0};
        int top = -1;
        int operand_a, operand_b, result;
        char buff[STACK_SIZE];
        
        printf("Enter an RPN expression: ");
        fgets(buff, STACK_SIZE, stdin);
        char *ptr = strchr(buff, '\n');
        if(ptr != NULL) *ptr = '\0';
        ptr = buff;
        
        while(*ptr != '\0'){
                if(isdigit(*ptr)){
                        if(push(*ptr - 48, STACK_SIZE, &top, stack))
                                return EXIT_FAILURE;
                }
                else{
                        if(pop(&top, stack, &operand_b))
                                return EXIT_FAILURE;
                        if(pop(&top, stack, &operand_a))
                                return EXIT_FAILURE;
                        switch(*ptr){
                                case '+':
                                        result = operand_a + operand_b; break;
                                case '-':
                                        result = operand_a - operand_b; break;
                                case '*':
                                        result = operand_a * operand_b; break;
                                case '/':
                                        result = operand_a / operand_b; break;
                                default:
                                        fprintf(stderr, "invalid operator\n");
                                        return EXIT_FAILURE;
                        }
                        if(push(result, STACK_SIZE, &top, stack))
                                return EXIT_FAILURE;
                }
                ptr++;
        }
        printf("result: %d\n", stack[0]);
        return EXIT_SUCCESS;
}
