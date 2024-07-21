#include <stdio.h>
#include "list/linked_list.h"


int main(int argc, char *argv)
{
    CharNode *list = createCharList();

    push(&list, 'a');
    push(&list, 'b');
    push(&list, 'c');

    // printList(list);
    isElementPresent('b', list);
    isElementPresent('d', list);
    push(&list, 'd');
    isElementPresent('d', list);


    return 0;
}