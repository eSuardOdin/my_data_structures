#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

CharNode *createCharList()
{
    CharNode *head = NULL;
    return head;
}
void push(CharNode **head, char data)
{
    CharNode *new = malloc(sizeof(CharNode));
    new->next = *head;
    new->value = data;
    *head = new;
}


void printList(CharNode *head)
{
    while (head != NULL)
    {
        printf("Head is on adress %p\n", head);
        printf("Head has value '%c'\n", head->value);
        CharNode *temp = head->next;
        head = temp;
    }
    
}
