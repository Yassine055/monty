#include "monty.h"
/**
* free_stack_memory - frees a doubly linked list
* @head: head of the stack
*/
void free_stack_memory(stack_t *head)
{
    stack_t *a;


    a = head;
    while (head)
    {
        a = head->next;
        free(head);
        head = a;
    }
}
