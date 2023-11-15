#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <unistd.h>


#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>




/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;






/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;




/**
 * struct buss - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct buss
{
    char *arg;
    FILE *file;
    char *content;
    int lifi;
}  bust;
extern bust bus;


int execute_instruction(char *content, stack_t **head, unsigned int counter, FILE *file);


void queue_stack(stack_t **head, unsigned int counter);
void stack_stack(stack_t **head, unsigned int counter);




void queue_stack(stack_t **head, unsigned int counter);
void stack_stack(stack_t **head, unsigned int counter);


void swap_stack(stack_t **head, unsigned int counter);
void pint_stack(stack_t **head, unsigned int counter);


void push_stack(stack_t **head, unsigned int number);
void pall_stack(stack_t **head, unsigned int number);


void sub_stack(stack_t **head, unsigned int counter);
void nop_stack(stack_t **head, unsigned int counter);
void add_stack(stack_t **head, unsigned int counter);


void pop_stack(stack_t **head, unsigned int counter);


void add_node_to_stack(stack_t **head, int n);
void add_node_to_queue(stack_t **head, int n);


void free_stack_memory(stack_t *head);




#endif
