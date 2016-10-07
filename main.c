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

    // Pour tester les autres méthodes de la liste chaînée
    for (int i = 0; i < 10; ++i) {
        linkedlist_add_to_end(&stack, i);
    }
    stack_print(stack);

    for (int i = 0; i < 11; ++i) {
        printf("%d | ", linkedlist_remove_from_end(&stack));
        stack_print(stack);
    }

    stack_delete(&stack);

    return 0;
}