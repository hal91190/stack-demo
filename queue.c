#include "queue.h"

void queue_create(queue_t *queue) {
    linkedlist_create(queue);
}

void queue_delete(queue_t *queue) {
    linkedlist_delete(queue);
}

void queue_enqueue(queue_t *queue, value_t value) {
    linkedlist_add_to_end(queue, value);
}

value_t queue_dequeue(queue_t *queue) {
    return linkedlist_remove_from_end(queue);
}

void queue_print(queue_t queue) {
    linkedlist_print(queue);
}
