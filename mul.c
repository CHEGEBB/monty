#include "monty.h"

/**
 * f_mul - Multiplies the second top element of the stack by the top element.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_mul(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n *= (*head)->n;
	f_pop(head, counter);
}
