#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* MACROS */
#define SEPARATORS " \n\t\r"

/**
 * struct stack_s - doubly linked list reps of a stack (or queue).
 * @n: integer
 * @prev: points to the previous element of the stack (or queue).
 * @next: points to the next element of the stack (or queue).
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
 * struct instruction_s - opcode and It's function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and It's function.
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* GLOBAL VARIABLES */
extern stack_t **global_free;

/* FUNCTONS PROTOTYPES */
int read_line(FILE *monty_file);
void monty_function(char *operator, stack_t **node, unsigned int count_lines);
stack_t *add_node(stack_t **head, const int n);
void monty_push(stack_t **node, unsigned int line_count);
size_t print_rev(stack_t *h);
void monty_pint(stack_t **node, unsigned int line_count);
size_t print(stack_t *h);
void free_all(void);
void monty_pop(stack_t **head, unsigned int line_count);
void monty_add(stack_t **head, unsigned int line_count);
void monty_swap(stack_t **head, unsigned int count_lines);
void monty_nop(stack_t **head, unsigned int count_lines);
void monty_pall(stack_t **node, unsigned int line_count);
int delete_node(stack_t **head, unsigned int index);

#endif
