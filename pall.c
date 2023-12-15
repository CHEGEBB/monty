#include "monty.h"

/**
 * f_pall - Prints the stack.
 * @stack_head: Stack head
 * @line_number: Not used
 *
 * Description:
 * This function prints all elements in the stack.
 *
 * Return: No return value.
 */
void f_pall(stack_t **stack_head, unsigned int line_number)
{
	stack_t *current;
	(void) line_number;

	current = *stack_head;

	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
