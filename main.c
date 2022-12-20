#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void)
{
    printf("\n\n\n\n");

        node_t *head = linked_list_create_new(11);
    linked_list_add_end(head, 12);
    linked_list_add_end(head, 13);
    linked_list_add_end(head, 14);
    linked_list_add_end(head, 15);
    linked_list_add_end(head, 16);

    linked_list_print(head);

    return 0;
}