#ifndef STACK_OP
#define STACK_OP
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>

bool is_empty(int top);
bool is_full(size_t stack_size, int top);
int push(int c, size_t stack_size, int *top, int *stack);
int pop(int *top, int *stack, int *operand);
#endif // STACK_OP
