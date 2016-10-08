#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "linkedlist.h"

typedef struct element {
    value_t value;
    struct element *suivant;
} element_t;

linkedlist_t element_create(value_t value, linkedlist_t suivant) {
    linkedlist_t new_element = malloc(sizeof(element_t));
    new_element->value = value;
    new_element->suivant = suivant;
    return new_element;
}

value_t element_delete(linkedlist_t *linkedlist, linkedlist_t new_linkedlist) {
    linkedlist_t to_free = *linkedlist;
    value_t value = to_free->value;
    free(to_free);
    *linkedlist = new_linkedlist;
    return value;
}

void linkedlist_create(linkedlist_t *linkedlist) {
    *linkedlist = NULL;
}

void linkedlist_delete(linkedlist_t *linkedlist) {
    if (*linkedlist) {
        element_delete(linkedlist, (*linkedlist)->suivant);
        linkedlist_delete(linkedlist);
    }
}

void linkedlist_add_in_front(linkedlist_t *linkedlist, value_t value) {
    *linkedlist = element_create(value, *linkedlist);
}

value_t linkedlist_remove_from_front(linkedlist_t *linkedlist) {
    if (*linkedlist == NULL)
        return INT_MAX;
    return element_delete(linkedlist, (*linkedlist)->suivant);
}

void linkedlist_add_to_end(linkedlist_t *linkedlist, value_t value) {
    if (*linkedlist == NULL) {
        *linkedlist = element_create(value, NULL);
    } else {
        linkedlist_add_to_end(&((*linkedlist)->suivant), value);
    }
}

value_t linkedlist_remove_from_end(linkedlist_t *linkedlist) {
    if (*linkedlist == NULL)
        return INT_MAX;
    if ((*linkedlist)->suivant == NULL) {
        return element_delete(linkedlist, NULL);
    } else {
        return linkedlist_remove_from_end(&((*linkedlist)->suivant));
    }
}

void linkedlist_print(linkedlist_t linkedlist) {
    if (linkedlist == NULL) {
        puts("EOL");
    } else {
        printf("%d ", linkedlist->value);
        linkedlist_print(linkedlist->suivant);
    }
}
