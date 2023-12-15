#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	if (!head || !*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		exit(EXIT_FAILURE);
	}

	putchar((*head)->n);
	putchar('\n');
}
