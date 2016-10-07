#include "stack.h"

void stack_create(stack_t *stack) {
    linkedlist_create(stack);
}

void stack_delete(stack_t *stack) {
    linkedlist_delete(stack);
}

void stack_push(stack_t *stack, value_t top_value) {
    linkedlist_add_in_front(stack, top_value);
}

value_t stack_pop(stack_t *stack) {
    return linkedlist_remove_from_front(stack);
}

void stack_print(stack_t stack) {
    linkedlist_print(stack);
}
