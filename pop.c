#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;

	free(temp);
}
