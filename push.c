#include "monty.h"

/**
 * check_digit - check if string is a number
 * @param: param to push
 * @line_count: current line number
 * Return: number
 */

int check_digit(char *param, unsigned int line_count)
{
	int number;

	number = atoi(param);
	if (number == 0 && strcmp(param, "0") != 0)
	{
		printf("L%u: usage: push integer\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	return (number);
}

/**
 * monty_push - it pushes an element to stack.
 * @node: pointer to head
 * @line_count: current line number
 * Return: void function.
 */

void monty_push(stack_t **node, unsigned int line_count)
{
	int number;
	char *param;

	param = strtok(NULL, SEPARATORS);

	if (!param)
	{
		printf("L%u: usage: push integer\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	number = check_digit(param, line_count);
	if (!add_node(node, number))
	{
		printf("Error: malloc failed\n");
		free_all();
		exit(EXIT_FAILURE);
	}
}
