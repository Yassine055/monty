#include "monty.h"
/**
* execute_instruction - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute_instruction(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
    instruction_t opst[] = {
        {"push", push_stack},
        {"pall", pall_stack},
        {"pint", pint_stack},
        {"pop", pop_stack},
        {"swap", swap_stack},
        {"add", add_stack},
        {"sub", sub_stack},
        {"nop", nop_stack},
        {"queue", queue_stack},
        {"stack", stack_stack},
        {NULL, NULL}
    };


   
    unsigned int i = 0;
    char *op;


    op = strtok(content, " \n\t");
    if (op && op[0] == '#')
        return (0);
    bus.arg = strtok(NULL, " \n\t");
    while (opst[i].opcode && op)
    {
        if (strcmp(op, opst[i].opcode) == 0)
        {   opst[i].f(stack, counter);
            return (0);
        }
        i++;
    }
    if (op && opst[i].opcode == NULL)
    { fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
        fclose(file);
        free(content);
        free_stack_memory(*stack);
        exit(EXIT_FAILURE); }
    return (1);
}
