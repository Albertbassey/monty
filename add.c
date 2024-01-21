#include "monty.h"

/**
 * monty_add - add the top and second element of the stack.
 * @head: pointer to head
 * @line_count: current line number
 * Return: void function
 */

void monty_add(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int valor;

	if (!head || !(*head) || !(*head)->next)
	{
		printf("L%u: can't add, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;

	valor = temp->n + temp->next->n;
	monty_pop(head, line_count);
	monty_pop(head, line_count);
	add_node(head, valor);
}
