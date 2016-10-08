#ifndef STACK_DEMO_QUEUE_H
#define STACK_DEMO_QUEUE_H

#include "linkedlist.h"

typedef linkedlist_t queue_t;

void queue_create(queue_t *queue);
void queue_delete(queue_t *queue);
void queue_enqueue(queue_t *queue, value_t value);
value_t queue_dequeue(queue_t *queue);
void queue_print(queue_t queue);

#endif //STACK_DEMO_QUEUE_H
