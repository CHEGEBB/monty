#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *temp = *head;

	(void)counter;

	while (temp && temp->n != 0 && (temp->n > 0 && temp->n <= 127))
	{
		putchar(temp->n);
		temp = temp->next;
	}

	putchar('\n');
}
