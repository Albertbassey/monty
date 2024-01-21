#include "monty.h"

/**
 * monty_pall - print the stack.
 * @head: doubly pointer to head of linked list.
 * @line_count: current line of monty file.
 * Return: returns void
 *
 */

void monty_pall(stack_t **head, __attribute__((unused))
		unsigned int line_count)
{
	stack_t *temp = *head;

	if (*head && head)
	{
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
