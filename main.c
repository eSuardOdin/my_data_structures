#include <stdio.h>
#include "list/linked_list.h"


int main(int argc, char *argv)
{
    char a = 'a';
    char b = 'b';
    char c = 'c';
    Node elA = {elA.next = NULL, elA.value = &a};
    Node elB = {elB.next = &elA, elB.value = &b};
    Node elC = {elC.next = &elB, elC.value = &c};

    printList(&elC);

    return 0;
}