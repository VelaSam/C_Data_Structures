#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

struct node
{
    int value;
    struct node *next;
    int size;
};

node_t *linked_list_create_new(int value)
{

    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next = NULL;
    new_node->size = 1;

    return new_node;
}

void linked_list_kill_node(node_t *node_to_kill)
{
    free(node_to_kill);
}

void linked_list_print(node_t *head)
{

    struct node *currentNode = head;

    printf("Linked list (size: %d): ", head->size);

    while (currentNode != NULL)
    {
        printf("%i ", currentNode->value);
        currentNode = currentNode->next;
    }
    printf("\n");
}

void linked_list_add_end(node_t *head, int new_number)
{
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node)
    {
        new_node->value = new_number;
        new_node->next = NULL;
    }
    node_t *current_node = head;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    head->size++;

    current_node->next = new_node;
}

void linked_list_remove_last(node_t *head)
{

    node_t *current_node = head;

    while (current_node->next != NULL)
    {

        if (current_node->next->next == NULL)
        {
            linked_list_kill_node(current_node->next);
            current_node->next = NULL;
            break;
        }
        current_node = current_node->next;
    }

    head->size--;
}

void linked_list_remove_at(node_t **head, int index)
{
    node_t *curr = *head;
    *head = curr->next;
    free(curr);
    return;
}

int linked_list_get_at(node_t *head, int index)
{

    node_t *current_node = head;

    if (index < 0 || index > head->size)
    {
        printf("Error getting node for index = %d \n", index);
        exit(1);
    }

    for (int i = 0; i < index; i++)
    {
        current_node = current_node->next;
    }

    return current_node->value;
}

node_t *linked_list_get_node_at(node_t *head, int index)
{

    node_t *current_node = head;

    if (index < 0 || index > head->size)
    {
        printf("Error getting node for index = %d \n", index);
        exit(1);
    }

    for (int i = 0; i < index; i++)
    {
        current_node = current_node->next;
    }

    return current_node;
}