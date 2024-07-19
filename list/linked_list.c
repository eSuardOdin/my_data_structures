#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void printList(Node *item)
{
    printf("%c -> ", *(char *)item->value);
    if(item->next == NULL)
    {
        printf("\nEnd of list\n");
    }
    else
    {
        printList(item->next);
    }
}


/**
 * @brief 
 * 
 * @param current 
 * @param data_size 
 * @param data 
 * @return Node* 
 */
Node *appendList(Node *current, int data_size, void *data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->next = NULL; 
    new->value = malloc((size_t)data_size);
    // Iterate through all bytes of data and cast to char pointer in
    // order to copy
    for(int i = 0; i < data_size; i++)
    {
        *(char *)(new->value + i) = *(char*)(data + i);
    }
    current->next = new;

}

