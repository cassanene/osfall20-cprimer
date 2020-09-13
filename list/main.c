#include <stdio.h>

#include "list.h"

int main()
{
    printf("Tests for linked list implementation\n");
    printf("Allocating memory...\n");
    list_t *list_one = list_alloc(5);
    printf("Adding elements to list...\n");
    list_add_to_back(list_one, 3);
    list_add_to_front(list_one, 4);
    list_add_to_front(list_one, 1);
    list_add_to_back(list_one, 6);
    list_add_to_back(list_one, 8);
    list_add_to_back(list_one, 7);
    list_add_to_back(list_one, 9);
    list_add_to_back(list_one, 12);
    list_add_to_back(list_one, 15);
    list_add_at_index(list_one, 10, 1);
    list_print(list_one);
    int length = list_length(list_one);
    printf("Length of the list is %d\n", length);
    printf("Removing from back...\n");
    list_remove_from_back(list_one);
    list_print(list_one);
    printf("Removing from front...\n");
    list_remove_from_front(list_one);
    list_print(list_one);
    printf("Removing at index 2...\n");
    list_remove_at_index(list_one, 2);
    list_print(list_one);
    printf("Checking if 11 is in list...\n");
    bool isin11 = list_is_in(list_one, 11);
    printf("%s\n", isin11 ? "true" : "false");
    printf("Checking if 4 is in list...\n");
    bool isin4 = list_is_in(list_one, 4);
    printf("%s\n", isin4 ? "true" : "false");
    elem element = list_get_elem_at(list_one, 3);
    printf("Element at index 3 is %d\n", element);
    printf("Getting index of element 9...\n");
    int index = list_get_index_of(list_one, 9);
    printf("%d\n", index);

    return 0;
}