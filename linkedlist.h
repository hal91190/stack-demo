#ifndef STACK_DEMO_LINKEDLIST_H
#define STACK_DEMO_LINKEDLIST_H

typedef int value_t;
typedef struct element element_t;
typedef struct element *linkedlist_t;

void linkedlist_create(linkedlist_t *linkedlist);
void linkedlist_delete(linkedlist_t *linkedlist);
void linkedlist_add_in_front(linkedlist_t *linkedlist, value_t value);
value_t linkedlist_remove_from_front(linkedlist_t *linkedlist);
void linkedlist_add_to_end(linkedlist_t *linkedlist, value_t value);
value_t linkedlist_remove_from_end(linkedlist_t *linkedlist);
void linkedlist_print(linkedlist_t linkedlist);

#endif //STACK_DEMO_LINKEDLIST_H
