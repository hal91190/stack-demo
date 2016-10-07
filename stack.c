#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"

typedef struct element {
    value_t value;
    struct element *suivant;
} element_t;

void stack_create(stack_t *stack) {
    *stack = NULL;
}

void stack_delete(stack_t *stack) {
    if (*stack) {
        stack_t to_free = *stack;
        *stack = (*stack)->suivant;
        free(to_free);
        stack_delete(stack);
    }
}

void stack_push(stack_t *stack, value_t top_value) {
    stack_t top = malloc(sizeof(element_t));
    top->value = top_value;
    top->suivant = *stack;
    *stack = top;
}

value_t stack_pop(stack_t *stack) {
    if (*stack == NULL)
        return INT_MAX;
    stack_t old_top = *stack;
    *stack = (*stack)->suivant;
    value_t value = old_top->value;
    free(old_top);
    return value;
}

void stack_print(stack_t stack) {
    if (stack == NULL) {
        puts("EOS");
    } else {
        printf("%d ", stack->value);
        stack_print(stack->suivant);
    }
}
