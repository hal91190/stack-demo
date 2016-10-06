#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int value;
    struct element *suivant;
} element_t;

typedef element_t *stack_t;

void stack_create(stack_t *stack) {
    *stack = NULL;
}

void stack_push(stack_t *stack, int top_value) {
    stack_t top = malloc(sizeof(element_t));
    top->value = top_value;
    top->suivant = *stack;
    *stack = top;
}

void stack_print(stack_t stack) {
    if (stack == NULL) {
        puts("EOS");
    } else {
        printf("%d ", stack->value);
        stack_print(stack->suivant);
    }
}

int main() {
    stack_t stack;
    stack_create(&stack);
    stack_print(stack);

    for (int i = 0; i < 10; ++i) {
        stack_push(&stack, i);
    }
    stack_print(stack);

    return 0;
}