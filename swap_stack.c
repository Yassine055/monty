#include "monty.h"
/**
 * swap_stack - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void swap_stack(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;


    h = *head;
    while (h)
    {
        h = h->next;
        len++;
    }
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack_memory(*head);
        exit(EXIT_FAILURE);
    }
    h = *head;
    aux = h->n;
    h->n = h->next->n;
    h->next->n = aux;
}
