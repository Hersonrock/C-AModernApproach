// STACK OPERATIONS
#include"./stack_op.h"
bool is_empty(int top){
        return top == -1;
}
bool is_full(size_t stack_size, int top){
        return top >= (int)stack_size;
}
int push(int c, size_t stack_size, int *top, int *stack){
        if(is_full(stack_size, *top)){
                printf("Stack Overflow\n");
                return -1;
        }
        stack[++(*top)] = c;
        return 0;
}
int pop(int *top, int *stack, int *operand){
        if(is_empty(*top)){
                printf("Stack Underflow\n");
                return -1;
        }
        *operand = stack[(*top)--];
        return 0;
}
