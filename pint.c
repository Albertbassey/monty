#include "monty.h"

/**
 * monty_pint - pint is print stack backwards.
 * @node: pointer to head.
 * @line_count: current line number.
 * Return: void function.
 */

void monty_pint(stack_t **node, unsigned int line_count)
{
	if (!*node || !node)
	{
		printf("L%u: can't pint, stack empty\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*node)->n);
}
