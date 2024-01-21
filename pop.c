#include "monty.h"

/**
 * monty_pop - delete element top of stack
 * @head: doubly pointer to head of linked list.
 * @line_count: current line of monty file.
 * Return: returns void.
 */

void monty_pop(stack_t **head, unsigned int line_count)
{
	stack_t *temp;

	if (!(*head) || !head)
	{
		printf("L%u: can't pop an empty stack\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->next)
	{
		temp->next->prev = NULL;
		*head = temp->next;
	}
	else
		*head = NULL;
	free(temp);
}
