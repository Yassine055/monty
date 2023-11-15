#include "monty.h"


/**
 * pall_stack - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void pall_stack(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;


    h = *head;
    if (h == NULL)
        return;
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
