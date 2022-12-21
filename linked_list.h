
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#pragma once

typedef struct node node_t;

struct node
{
    int value;
    struct node *next;
};

node_t *linked_list_create_new(int value);
void linked_list_kill_node(node_t *node_to_kill);
void linked_list_print(node_t *head);
void linked_list_add_end(node_t *head, int new_number);
void linked_list_remove_last(node_t *head);
void linked_list_remove_at(node_t *head, int index);
int linked_list_get_at(node_t *head, int index);
node_t *linked_list_get_node_at(node_t **head, int index);
int linked_list_length(node_t head);

#endif /*LINKED_LIST_H*/