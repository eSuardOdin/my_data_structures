#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node
{
    Node *next;
    void *value;
} typedef Node;


Node *appendList(Node *current, int data_size, void *data);
void printList(Node *item);

#endif