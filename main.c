#include <stdio.h>

#include "stack.h"
#include "queue.h"

int main() {
    puts("Stack test");
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

    stack_delete(&stack);

    puts("Queue test");
    queue_t queue;
    queue_create(&queue);
    queue_print(queue);

    for (int i = 0; i < 10; ++i) {
        queue_enqueue(&queue, i);
    }
    queue_print(queue);

    for (int i = 0; i < 11; ++i) {
        printf("%d | ", queue_dequeue(&queue));
        queue_print(queue);
    }

    queue_delete(&queue);

    return 0;
}
