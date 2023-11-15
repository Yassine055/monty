#include "monty.h"


/**
 * pint_stack - prints the top inyeget
 * @head: stack head
 * @counter: line number
 * Return: no return nothing
*/


void pint_stack(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack_memory(*head);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*head)->n);
}
