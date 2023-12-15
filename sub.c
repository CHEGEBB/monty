#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_sub(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n -= (*head)->n;
	f_pop(head, counter);
}
