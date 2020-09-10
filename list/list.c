// list/list.c
//
// Implementation for linked list.
//
// Solomon Lucas / Cassey Anene / Emmanuel Fowora / Chima Egbuji

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

//allocating a space in the memory the size of whatever you are putting in the variable list_t and node_t.
list_t *list_alloc(elem val)
{
    //https://www.techiedelight.com/linked-list-implementation-part-1/

    list_t *l = malloc(sizeof(list_t));
    l->head = malloc(sizeof(node_t));
    printf("Allocating works \n");
    l->head->value = val;
    l->head->next = NULL;
    printf("The value for this node is %d\n", l->head->value);
    return l;
}

void list_free(list_t *l)
{
    node_t *t = l->head;
    while (t)
    {
        node_t *temp = t;
        t = t->next;
        free(temp);
    }
    free(t);
    //printf("The value of this is %d \n", l->head->value);
    return;
}

void list_print(list_t *l)
{
    {

        node_t *t = l->head;
        while (t != NULL)
        {
            printf("%d ", t->value);
            t = t->next;
        }
    }
}
int list_length(list_t *l)
{
    if (!l->head || !l)
    {
        return 0;
    }
    int length = 1;
    node_t *t = l->head;

    while (t->next)
    {
        printf("Length is now %d \n", length);
        length++;
        t = t->next;
    }
    return length;
}

void list_add_to_back(list_t *l, elem value)
{
    node_t *t = l->head;
    while (t->next)
    {
        t = t->next;
    }
    t->value = value;
    printf("The value of the last node is now %d \n", l->head->next->value);
}
void list_add_to_front(list_t *l, elem value)
{
    node_t *t = l->head;

    l->head = (node_t *)malloc(sizeof(node_t));
    l->head->value = value;
    l->head->next = t;

    printf("Successfully added data to the front");
}
void list_add_at_index(list_t *l, elem value, int index)
{
}

elem list_remove_from_back(list_t *l) { return -1; }
elem list_remove_from_front(list_t *l) { return -1; }
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }