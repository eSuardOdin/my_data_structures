#include <stdio.h>
#include "list/linked_list.h"


int main(int argc, char *argv)
{
    CharNode *list = createCharList();

    push(&list, 'a');
    push(&list, 'b');
    push(&list, 'c');

    printList(list);
    return 0;
}