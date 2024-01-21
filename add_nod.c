#include "monty.h"

/**
 * add_node - add node at beginning of doubly linked list.
 * @head: pointer to head.
 * @n: integer
 * Return: no. of nodes.
 */

stack_t *add_node(stack_t **head, const int n)
{
	stack_t *new, *temp;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	temp = *head;
	if (!*head)
	{
		new->next = NULL;
	}
	else
	{
		new->next = temp;
		temp->prev = new;
	}
	*head = new;
	return (new);
}
