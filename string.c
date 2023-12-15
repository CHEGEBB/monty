#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack,
 *           followed by a new line.
 * @stack_head: Stack head
 * @line_number: Line number
 *
 * Description:
 * This function prints the string represented by the ASCII values
 * on the stack until it encounters a non-printable character
 * or a zero.
 *
 * Return: No return value.
 */
void f_pstr(stack_t **stack_head, unsigned int line_number)
{
	stack_t *current;
	(void) line_number;

	current = *stack_head;

	while (current)
	{
		if (current->n > 127 || current->n <= 0)
		{
			break;
		}
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
