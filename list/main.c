#include <stdio.h>

#include "list.h"

int main()
{
    printf("Tests for linked list implementation\n");
    list_t *test = list_alloc(5);
    list_add_to_back(test, 7);
    list_free(test);
    return 0;
}