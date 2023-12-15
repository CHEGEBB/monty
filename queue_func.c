#include "monty.h"

/**
 * f_queue - Switches the mode to queue (FIFO).
 * @stack_head: Stack head
 * @line_number: Line number
 *
 * Description:
 * This function switches the mode to queue (FIFO).
 *
 * Return: No return value.
 */
void f_queue(stack_t **stack_head, unsigned int line_number)
{
	(void)stack_head;
	(void)line_number;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack (queue).
 * @head: Head of the stack
 * @n: New value
 *
 * Description:
 * This function adds a new node to the tail of the stack (queue) with the
 * given value.
 *
 * Return: No return value.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
	}

	if (!current)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		current->next = new_node;
		new_node->prev = current;
	}
}
