#include <stdio.h>

#include "stack.h"

int main() {
    stack_t stack;
    stack_create(&stack);
    stack_print(stack);

    for (int i = 0; i < 10; ++i) {
        stack_push(&stack, i);
    }
    stack_print(stack);

    for (int i = 0; i < 11; ++i) {
        printf("%d | ", stack_pop(&stack));
        stack_print(stack);
    }

    for (int i = 0; i < 10; ++i) {
        stack_push(&stack, i);
    }
    stack_print(stack);

    stack_delete(&stack);

    return 0;
}