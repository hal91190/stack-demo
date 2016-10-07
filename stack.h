#ifndef STACK_DEMO_STACK_H
#define STACK_DEMO_STACK_H

#include "linkedlist.h"

typedef linkedlist_t stack_t;

void stack_create(stack_t *stack);
void stack_delete(stack_t *stack);
void stack_push(stack_t *stack, value_t top_value);
value_t stack_pop(stack_t *stack);
void stack_print(stack_t stack);

#endif //STACK_DEMO_STACK_H
