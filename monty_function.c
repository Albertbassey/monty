#include "monty.h"

/**
 * monty_function - search monty functions.
 * @operator: search function
 * @node: pointer to head
 *
 * @count_lines: current line number.
 * Return: void
 */

void monty_function(char *operator, stack_t **node, unsigned int count_lines)
{
	size_t i;

	instruction_t valid_com[] = {
		{"push", monty_push},
		{"pall", monty_pall},
		{"pint", monty_pint},
		{"pop", monty_pop},
		{"swap", monty_swap},
		{"add", monty_add},
		{"nop", monty_nop},
		{NULL, NULL}
	};
	for (i = 0; valid_com[i].opcode; i++)
	{
		if (strcmp(valid_com[i].opcode, operator) == 0)
		{
			valid_com[i].f(node, count_lines);
			return;
		}
	}
	printf("L%u: unknown instruction %s\n", count_lines, operator);
	free_all();
	exit(EXIT_FAILURE);
}
