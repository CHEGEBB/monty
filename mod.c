#include "monty.h"

/**
 * f_mod - Computes the rest of the division of the second top element
 *         of the stack by the top element.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_mod(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n %= (*head)->n;
	f_pop(head, counter);
}
